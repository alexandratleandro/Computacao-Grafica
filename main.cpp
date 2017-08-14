#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#endif
#include "menu.h"
#include "Cubo.h"
#include "Chuva.h"

#define WHITE  1.0, 1.0, 1.0, 1.0
#define GRAY1  0.2, 0.2, 0.2, 1.0
#define GRAY2  0.93, 0.93, 0.93, 1.0
#define PI     3.14159

//================================================================================
//------------------------------------------------------------ Sistema Coordenadas

GLfloat xC = 15.0;
GLint   wScreen = 800, hScreen = 666;
GLint   dentro = 1;
//------------------------------------------------------------ Observador
GLint tipoProj = 1;

GLfloat  raioP = 0.35*PI;
GLfloat  anguloP = 0.35*PI;
GLfloat  anguloP1 = 0.35*PI;
GLfloat fraction = 0.5f;

GLfloat lx = cos(anguloP), lz = sin(anguloP);
GLfloat lx1 = cos(anguloP1), lz1 = sin(anguloP1);
GLfloat camX = raioP*cos(anguloP) + xx, camY = yy + 0.2, camZ = raioP*sin(anguloP) + zz;
GLfloat camX1 = raioP*cos(anguloP1) + xx1, camY1 = yy1 + 0.2, camZ1 = raioP*sin(anguloP1) + zz;

GLfloat  incy = 0.5;
GLfloat  inca = 0.3;

GLfloat  rVisao = 3.0, aVisao = 0.5*PI, incVisao = 0.1;

//------------------------------------------------------------ Nevoeiro
GLint chuva = 0;
GLint neve = 0;
GLint nevoeiro = 1;
GLint nAtivo = 0;
GLfloat nevoeiroCor[] = { 1.0, 0.6, 0.8, 0.5};
GLfloat nevoeiroDensidade = 0.1;

//------------------------------------------------------------ Iluminacao
//--------------------------------------------- Global (ambiente)
GLint   noite = 1;
GLfloat luzGlobalCor[4] = { 1.0,1.0,1.0,1.0 };

//--------------------------------------------- Lampada tecto/sol (ambiente local)
GLint tecto = 1;
GLfloat localCor[4] = { 0.1,0.1,0.1,1.0 };
GLfloat localCorDif[4] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat localPos[4] = { 0.0, 1.0, 0, 1.0 };
GLfloat localAttCon = 1.5;
GLfloat localAttLin = 0.5;
GLfloat localAttQua = 0.2;

//--------------------------------------------- Lanterna (local)
GLint   foco = 1;
GLfloat rFoco = .1, aFoco = 0.5*PI;
GLfloat incH = 0.0, incV = 0.0;
GLfloat incMaxH = 0.5, incMaxV = 0.35;

GLfloat focoPini[] = { camX, camY, camZ, 1.0 };
GLfloat focoPfin[] = { camX - camX - rFoco*lx, camY, camZ - rFoco*lz, 1.0 };

GLfloat focoDir[] = { focoPfin[0] - focoPini[0], 0, focoPfin[2] - focoPini[2] };
GLfloat focoExp = 20.0; // concentraca de luz ([0..128]).
GLfloat focoCut = 40.0; // ângulo ([0..90])

GLfloat focoCorEsp[4] = { 1.0 ,  1.0, 1.0, 1.0 };
GLfloat focoCorDif[4] = { 0.85, 0.85,0.85, 1.0 };

//--------------------------------------------- rotacao e posicao Sol
GLint luzSol = 1;

GLfloat  raioSol = 20;
GLfloat  anguloSol = -PI/2;
GLfloat  anguloSolaux = -PI/2;

GLfloat solX = 7.5, solY= raioSol*cos(anguloSol), solZ = raioSol*sin(anguloSol)+7.5;
GLfloat solRot = 0.0005;

//------------------------------------------------------------ Sombra/reflexao
GLint reflexao = 1;

float chaoSombra[4][4];	// matriz para calcular a sombra no chao

GLfloat chao[] = { 0.0f, 1.0f, 0.0f, 1.0f }; // normal do chao
GLfloat lightSPos[] = { 2.0f, 2.0f, 7.0f, 1.0f };	// posicao da luz responsavel pela sombra
GLfloat lightSCor[] = { 0.4f, 0.0f, 0.4f, 1.0f };
GLfloat lightSCorDif[] = {0.85f, 0.85f, 0.85f, 1.0f};

//================================================================================
float distancia(float x1, float z1, float x2, float z2) {
	return sqrt( (x1-x2)*(x1-x2)+ (z1-z2)*(z1-z2));
}

void gestaoRato(int button, int state, int x, int y){
    if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN)
            CriaMenu();

    glutPostRedisplay();
}

//------------------------------------------------------------ definicoes  Luzes
void initLights(void){
	//Ambiente
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzGlobalCor);

	//Tecto
	glLightfv(GL_LIGHT0, GL_POSITION,      localPos );
	glLightfv(GL_LIGHT0, GL_AMBIENT,       localCor );
	glLightfv(GL_LIGHT0, GL_DIFFUSE,       localCorDif );
	glLightf (GL_LIGHT0, GL_CONSTANT_ATTENUATION, localAttCon);
	glLightf (GL_LIGHT0, GL_LINEAR_ATTENUATION,   localAttLin) ;
	glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION,localAttQua) ;

	//Foco
	glLightfv(GL_LIGHT1, GL_POSITION,      focoPini );
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION,focoDir );
	glLightf (GL_LIGHT1, GL_SPOT_EXPONENT ,focoExp);
	glLightf (GL_LIGHT1, GL_SPOT_CUTOFF,   focoCut);
	glLightfv(GL_LIGHT1, GL_DIFFUSE,       focoCorDif );
	glLightfv(GL_LIGHT1, GL_SPECULAR,      focoCorEsp  );

	//Luz sombra
	glLightfv(GL_LIGHT2, GL_POSITION,      lightSPos );
	glLightfv(GL_LIGHT2, GL_AMBIENT,       lightSCor );
	glLightfv(GL_LIGHT2, GL_DIFFUSE,       lightSCorDif);

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, localCorDif);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,localCor);
    glMateriali(GL_FRONT_AND_BACK, GL_SHININESS,128);

}

//------------------------------------------------------------ definicoes Nevoeiro
void initNevoeiro(void){

    glFogfv(GL_FOG_COLOR, nevoeiroCor); //Cor do nevoeiro
    glFogf (GL_FOG_DENSITY, nevoeiroDensidade); //Densidade do nevoeiro

    glFogf(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glFogi(GL_FOG_MODE, GL_EXP);
}

void init(void){
	glClearColor(WHITE);

    glEnable(GL_NORMALIZE);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);

	glShadeModel(GL_SMOOTH);

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE );
    glEnable ( GL_COLOR_MATERIAL);

    glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	initLights();

	initNevoeiro();

	iniParticulas();

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	criaDefineTexturas();
}

void drawEsfera1(){

	glPushMatrix();
        glColor4f(1, 1, 1, 0.5);
        initTexturas(9);

        glTranslatef(-15.0f, 5.0f, 35.0f);
        GLUquadricObj*  yS = gluNewQuadric();
        gluQuadricDrawStyle(yS, GLU_FILL);
        gluQuadricNormals(yS, GLU_SMOOTH);
        gluQuadricTexture(yS, GL_TRUE);
        gluSphere(yS, 5, 50, 50);
        gluDeleteQuadric(yS);
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);

}

void drawEsfera2(){

	glPushMatrix();
        glColor4f(1, 1, 1, 0.5);
        initTexturas(10);

        glTranslatef(0.0f, 5.0f, 25.0f);
        GLUquadricObj*  ySS = gluNewQuadric();
        gluQuadricDrawStyle(ySS, GLU_FILL);
        gluQuadricNormals(ySS, GLU_SMOOTH);
        gluQuadricTexture(ySS, GL_TRUE);
        gluSphere(ySS, 5, 50, 50);
        gluDeleteQuadric(ySS);
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);
}

void drawPlaneta() {

	initTexturas(8);
	glPushMatrix();
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f); glVertex3i(0, -xC, 0);
            glTexCoord2f(1.0f, 0.0f); glVertex3i(xC, -xC, 0);
            glTexCoord2f(1.0f, 1.0f); glVertex3i(xC, -xC, xC);
            glTexCoord2f(0.0f, 1.0f); glVertex3i(0, -xC, xC);
        glEnd();
	glPopMatrix();

	initTexturas(8);
	glPushMatrix();
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f); glVertex3i(0, 0, 0);
            glTexCoord2f(1.0f, 0.0f); glVertex3i(xC, 0, 0);
            glTexCoord2f(1.0f, 1.0f); glVertex3i(xC, -xC, 0);
            glTexCoord2f(0.0f, 1.0f); glVertex3i(0, -xC, 0);
        glEnd();
	glPopMatrix();

	initTexturas(8);
	glPushMatrix();
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f); glVertex3i(xC, 0, 0);
            glTexCoord2f(1.0f, 0.0f); glVertex3i(xC, 0, xC);
            glTexCoord2f(1.0f, 1.0f); glVertex3i(xC, -xC, xC);
            glTexCoord2f(0.0f, 1.0f); glVertex3i(xC, -xC, 0);
        glEnd();
	glPopMatrix();

	initTexturas(8);
	glPushMatrix();
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f); glVertex3i(xC, 0, xC);
            glTexCoord2f(1.0f, 0.0f); glVertex3i(0, 0, xC);
            glTexCoord2f(1.0f, 1.0f); glVertex3i(0, -xC, xC);
            glTexCoord2f(0.0f, 1.0f); glVertex3i(xC, -xC, xC);
        glEnd();
	glPopMatrix();

	initTexturas(8);
	glPushMatrix();
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f); glVertex3i(0, 0, xC);
            glTexCoord2f(1.0f, 0.0f); glVertex3i(0, 0, 0);
            glTexCoord2f(1.0f, 1.0f); glVertex3i(0, -xC, 0);
            glTexCoord2f(0.0f, 1.0f); glVertex3i(0, -xC, xC);
        glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);
}

void drawSky(){
	GLfloat dist = 200*cos(45.0f);
	GLfloat th = 1.0f / 3.0f;
	GLfloat of = (1.0f / 1024.0f) / 2;

	glPushMatrix();
    glTranslatef(4, 10, 0);

	if (dentro) {
		if (noite)
			initTexturas(7);
		else
			initTexturas(6);
	}
	else
		initTexturas(7);

        // Cima
        glBegin(GL_QUADS);
            glTexCoord2f(0.25f + of, 1 * th - of); glVertex3f(dist, dist, dist);
            glTexCoord2f(0.50f - of, 1 * th - of); glVertex3f(-dist, dist, dist);
            glTexCoord2f(0.50f - of, 0.0f + of); glVertex3f(-dist, dist, -dist);
            glTexCoord2f(0.25f + of, 0.0f + of); glVertex3f(dist, dist, -dist);
        glEnd();
        // Bottom
        glBegin(GL_QUADS);
            glTexCoord2f(0.25f + of, 1.0f - of); glVertex3f(dist, -dist, -dist);
            glTexCoord2f(0.50f - of, 1.0f - of); glVertex3f(-dist, -dist, -dist);
            glTexCoord2f(0.50f - of, 2 * th + of); glVertex3f(-dist, -dist, dist);
            glTexCoord2f(0.25f + of, 2 * th + of); glVertex3f(dist, -dist, dist);
        glEnd();
        // Frente
        glBegin(GL_QUADS);
            glTexCoord2f(0.25f, 2 * th - of); glVertex3f(dist, -dist, dist);
            glTexCoord2f(0.50f, 2 * th - of); glVertex3f(-dist, -dist, dist);
            glTexCoord2f(0.50f, 1 * th + of); glVertex3f(-dist, dist, dist);
            glTexCoord2f(0.25f, 1 * th + of); glVertex3f(dist, dist, dist);
        glEnd();
        // Back
        glBegin(GL_QUADS);
            glTexCoord2f(0.75f, 2 * th - of); glVertex3f(-dist, -dist, -dist);
            glTexCoord2f(1.00f, 2 * th - of); glVertex3f(dist, -dist, -dist);
            glTexCoord2f(1.00f, 1 * th + of); glVertex3f(dist, dist, -dist);
            glTexCoord2f(0.75f, 1 * th + of); glVertex3f(-dist, dist, -dist);
        glEnd();
        // Dir
        glBegin(GL_QUADS);
            glTexCoord2f(0.50f, 2 * th - of); glVertex3f(-dist, -dist, dist);
            glTexCoord2f(0.75f, 2 * th - of); glVertex3f(-dist, -dist, -dist);
            glTexCoord2f(0.75f, 1 * th + of); glVertex3f(-dist, dist, -dist);
            glTexCoord2f(0.50f, 1 * th + of); glVertex3f(-dist, dist, dist);
        glEnd();
        // Esq
        glBegin(GL_QUADS);
            glTexCoord2f(0.00f, 2 * th - of); glVertex3f(dist, -dist, -dist);
            glTexCoord2f(0.25f, 2 * th - of); glVertex3f(dist, -dist, dist);
            glTexCoord2f(0.25f, 1 * th + of); glVertex3f(dist, dist, dist);
            glTexCoord2f(0.00f, 1 * th + of); glVertex3f(dist, dist, -dist);
        glEnd();

	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);

}

void drawChao(){
    initTexturas(8);
	glPushMatrix();
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f); glVertex3i(0, 0, 0);
            glTexCoord2f(1.0f, 0.0f); glVertex3i(xC, 0, 0);
            glTexCoord2f(1.0f, 1.0f); glVertex3i(xC, 0, xC);
            glTexCoord2f(0.0f, 1.0f); glVertex3i(0, 0, xC);
        glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);
}

void drawSol(){

    if(noite)
        initTexturas(11);
	else
        initTexturas(12);

	glPushMatrix();
        glTranslatef(0, -7.5, 7.5);
        glTranslatef(solX, solY, solZ);
        GLUquadricObj*  ySS = gluNewQuadric();
        gluQuadricDrawStyle(ySS, GLU_FILL);
        gluQuadricNormals(ySS, GLU_SMOOTH);
        gluQuadricNormals(ySS, GLU_SMOOTH);
        gluQuadricTexture(ySS, GL_TRUE);
        gluSphere(ySS, 1.0, 50, 50);
        gluDeleteQuadric(ySS);
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);
}

void orbita() {
	anguloSol += solRot;

	if ( anguloSol >= anguloSolaux+ PI) {
		anguloSolaux = anguloSolaux + PI;
		noite = !noite;
	}
	solZ = raioSol*sin(anguloSol);
	solY= raioSol*cos(anguloSol);

}
void matrizSombra(){
    float dot;

    if(luzSol){
        lightSPos[0] = solX;
        lightSPos[1] =solY;
        lightSPos[2]= solZ;
    }

    dot = chao[0] * lightSPos[0] + chao[1] * lightSPos[1] + chao[2] * lightSPos[2] + chao[3] * lightSPos[3];

    chaoSombra[0][0] = dot - lightSPos[0] * chao[0];
    chaoSombra[1][0] = 0.0 - lightSPos[0] * chao[1];
    chaoSombra[2][0] = 0.0 - lightSPos[0] * chao[2];
    chaoSombra[3][0] = 0.0 - lightSPos[0] * chao[3];

    chaoSombra[0][1] = 0.0 - lightSPos[1] * chao[0];
    chaoSombra[1][1] = dot - lightSPos[1] * chao[1];
    chaoSombra[2][1] = 0.0 - lightSPos[1] * chao[2];
    chaoSombra[3][1] = 0.0 - lightSPos[1] * chao[3];

    chaoSombra[0][2] = 0.0 - lightSPos[2] * chao[0];
    chaoSombra[1][2] = 0.0 - lightSPos[2] * chao[1];
    chaoSombra[2][2] = dot - lightSPos[2] * chao[2];
    chaoSombra[3][2] = 0.0 - lightSPos[2] * chao[3];

    chaoSombra[0][3] = 0.0 - lightSPos[3] * chao[0];
    chaoSombra[1][3] = 0.0 - lightSPos[3] * chao[1];
    chaoSombra[2][3] = 0.0 - lightSPos[3] * chao[2];
    chaoSombra[3][3] = dot - lightSPos[3] * chao[3];

}
//======================================================================== CHUVA/NEVE
void temporal(){
    if(opcaoTempo==1)
        chuva=!chuva;

    if(opcaoTempo==2)
        neve=!neve;

    if(opcaoTempo==3){
        nevoeiro=!nevoeiro;
        nAtivo=0;
    }
    opcaoTempo=0;

    if(dentro && !nAtivo){
        if(nevoeiro){ //nevoeiro rosa
            nevoeiroCor[0] = 1.0, nevoeiroCor[1] = 0.6, nevoeiroCor[2] = 0.8;
            nevoeiroDensidade = 0.1;
        }
        else{ // nevoeiro profundidade
            nevoeiroCor[0] = 0.9, nevoeiroCor[1] = 0.9, nevoeiroCor[2] = 0.9;
            nevoeiroDensidade = 0.001;
        }
        nAtivo=1;
        glFogfv(GL_FOG_COLOR, nevoeiroCor); //Cor do nevoeiro
        glFogf (GL_FOG_DENSITY, nevoeiroDensidade); //Densidade do nevoeiro
        glEnable(GL_FOG);
    }
    if(!dentro){
        nAtivo=0;
        glDisable(GL_FOG);
    }

    glDisable(GL_LIGHTING);
    glEnable(GL_BLEND);

    if(chuva)
        drawChuva();
    else if(neve)
        drawNeve();

    glEnable(GL_LIGHTING);
    glDisable(GL_BLEND);

    glDisable(GL_TEXTURE_2D);
    glEnable(GL_COLOR_MATERIAL);

}

//======================================================================== Iluminacao
void iluminacao(){

    if(opcaoLuzes==1)
        noite=!noite;

    if(opcaoLuzes==2)
        tecto=!tecto;

    if(opcaoLuzes==3)
        foco=!foco;

    opcaoLuzes=0;

    if (noite){
        luzGlobalCor[0]=1.0;   luzGlobalCor[1]=1.0;   luzGlobalCor[2]=1.0;
        glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzGlobalCor);
    }
    else{
        luzGlobalCor[0]=0.1;   luzGlobalCor[1]=0.1;   luzGlobalCor[2]=0.1;
        glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzGlobalCor);
    }

	if (tecto)
        glEnable(GL_LIGHT0);
    else
        glDisable(GL_LIGHT0);

    if (foco)
        glEnable(GL_LIGHT1);
    else
        glDisable(GL_LIGHT1);

    if (!luzSol)
        glEnable(GL_LIGHT2);
    else
        glDisable(GL_LIGHT2);

    glLightfv(GL_LIGHT2, GL_POSITION,      lightSPos );

	glLightfv(GL_LIGHT1, GL_POSITION,      focoPini);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION,focoDir );

    glutPostRedisplay();
}

GLvoid resize(GLsizei width, GLsizei height){
	wScreen=width;
	hScreen=height;
}

void display(void){

    GLfloat d1, d2,d3;

    glEnable(GL_LIGHTING);
	if (noite)
		glClearColor(GRAY1);
	else
		glClearColor(GRAY2);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	//================================================================= Janela de Visualizaçao
	glViewport (0, 0, wScreen, hScreen);

	//================================================================= Projecao
  	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(88.0, (float)wScreen/hScreen, 0.1, 1200.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//================================================================= observador
	if (tipoProj == 1)
		gluLookAt(camX, camY, camZ, xx, yy, zz, 0, 1, 0);
	else
		gluLookAt(camX1, camY1, camZ1, xx1, yy1, zz1, 0, 1, 0);

	if(parar !=1){
        angR+=incR;
        orbita();
	}

	iluminacao();

    drawSky();
	drawPlaneta();

 	if (reflexao == 1) {
	//================================================================= Reflexao
        drawCubo2();
		drawCubo();

		glEnable(GL_STENCIL_TEST);
		glColorMask(0, 0, 0, 0);
		glDisable(GL_DEPTH_TEST);
		glStencilFunc(GL_ALWAYS, 1, 1);
		glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
		drawChao();

		glColorMask(1, 1, 1, 1);
		glEnable(GL_DEPTH_TEST);
		glStencilFunc(GL_EQUAL, 1, 1);
		glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
        // desenhar reflexao dos objetos
		glPushMatrix();
            glScalef(1, -1, 1);
            drawSol();

            drawCubo();

            drawCubo2();
            drawTree(0);

		glPopMatrix();
		glDisable(GL_STENCIL_TEST);

		glEnable(GL_BLEND);
            glColor4f(1, 1, 1, 0.6);
            drawChao();
		glDisable(GL_BLEND);


	}
	else {
    //================================================================= Sombra
        glEnable(GL_STENCIL_TEST);
        glColorMask(0, 0, 0, 0);
        glDisable(GL_DEPTH_TEST);
        glStencilOp(GL_REPLACE, GL_REPLACE, GL_REPLACE);
        drawChao();

        glColorMask(1, 1, 1, 1);
        glEnable(GL_DEPTH_TEST);
        glStencilFunc(GL_EQUAL, 1, 1);
        glStencilOp(GL_KEEP, GL_KEEP, GL_INCR);
        glPushMatrix();
            //calcular sombra dos objetos de acordo com a luz
            glTranslatef(0.0,0.99,0.0);
            matrizSombra();
            glMultMatrixf((float *)chaoSombra);

            drawCubo2();
            drawCubo();
            drawTree(1);
        glPopMatrix();
        glDisable(GL_STENCIL_TEST);

        glEnable(GL_BLEND);
            glColor4f(1, 1, 1, 0.5);
            drawChao();
        glDisable(GL_BLEND);

        drawCubo2();
        drawCubo();
	}
	// desenhar luz roxa configuravel
    if(!luzSol){
        glPushMatrix();
            initCores(7);
            glTranslatef(lightSPos[0], lightSPos[1], lightSPos[2]);
            glutSolidCube(0.1);
        glPopMatrix();
    }

    drawSol();

	if (tipoProj == 1) {
		d1 = distancia(camX, camZ, -15.0, 35.0); //distancia de observador a esfera 1
		d2 = distancia(camX, camZ, 0.0, 25.0);	// distancia do observador a esfera 2
		d3 = distancia(camX, camZ, 12.0, 7.0);  // distancia do observador a arvore
	}
	else {
		d1 = distancia(camX1, camZ1, -15.0, 35.0);  //distancia de observador a esfera 1
		d2 = distancia(camX1, camZ1, 0.0, 25.0);	// distancia do observador a esfera 2
        d3 = distancia(camX1, camZ1, 12.0, 7.0);    // distancia do observador a arvore
	}

	glEnable(GL_BLEND);
	//desenhar as duas esferas e a arvore por ordem de acordo com as suas distancias ao observador
	if (d1>d2) {
        if(d3>d1){
            drawTree(0);
            drawEsfera1();
            drawEsfera2();
        }
        else{
            if(d3>d2){
                drawEsfera1();
                drawTree(0);
                drawEsfera2();
            }
            else{
                drawEsfera1();
                drawEsfera2();
                drawTree(0);
            }
        }
	}
	if (d1<d2) {
        if(d3>d2){
            drawTree(0);
            drawEsfera2();
            drawEsfera1();
        }
        else{
            if(d3>d1){
                drawEsfera2();
                drawTree(0);
                drawEsfera1();
            }
            else{
                drawEsfera2();
                drawEsfera1();
                drawTree(0);
            }
        }
	}
	glDisable(GL_BLEND);

	temporal();

	glutSwapBuffers();

}

void updateVisao(){
    //atualizar foco de acordo com a posiçao e orientacao do observador
	focoPini[0] = camX;
	focoPini[1] = camY;
	focoPini[2] = camZ;

	focoPfin[0] = camX - rFoco*lx;
	focoPfin[1] = camY;
	focoPfin[2] = camZ - rFoco*lz;

	focoDir[0] = focoPfin[0] - focoPini[0];
	focoDir[1] = 0;
	focoDir[2] = focoPfin[2] - focoPini[2];
}

void key(unsigned char key, int x, int y){

    GLfloat xaux, zaux;
	if (key == 27)
        exit(0);

    //------------------------------------------------- rotação do cubo
	if (key == 'p') parar = !parar;
	if (parar == 0) glutIdleFunc(display);
	if (parar == 1) glutIdleFunc(NULL);
	if (key == '+') incR += 0.1;
	if (key == '-') incR -= 0.1;

    //------------------------------------------------- tipo de observador
	if (key == 'o'){
		tipoProj = !tipoProj;

		if(tipoProj==1){
            if (camY > 4)
                dentro = 0;
            else
                dentro = 1;
		}
		else{
            if (camY1 > 4 || !(xx1 > 0.5 && zz1 > 0.5 && xx1 < 14.5 && zz1 < 14.5))
                dentro = 0;
            else
				dentro = 1;
		}
	}

    //------------------------------------------------- movimentacao do cubo
	if (key == 'a') {
		if (tipoProj == 1) {
			// verificar se pode andar - esta dentro dos limites
			xaux = xx, zaux = zz;
			xaux -= lx * fraction;
			zaux -= lz * fraction;
			if (xaux>0.5 && zaux>0.5 && xaux<14 && zaux<14) {
				xx -= lx * fraction;
				zz -= lz * fraction;
				camX -= lx * fraction;
				camZ -= lz * fraction;
			}
		}
		else {
			xx1 -= lx1 * fraction;
			zz1 -= lz1 * fraction;
			camX1 -= lx1 * fraction;
			camZ1 -= lz1 * fraction;

			if (!(xx1 > 0.5 && zz1 > 0.5 && xx1 < 14.5 && zz1 < 14.5))
				dentro = 0;

			else {
				if (camY1 < 4)
					dentro = 1;
			}
		}
	}
	if (key == 'z') {
		if (tipoProj == 1) {
			xaux = xx, zaux = zz;
			xaux += lx * fraction;
			zaux += lz * fraction;
			if (xaux>0.5 && zaux>0.5 && xaux<14.5 && zaux<14.5) {
				xx += lx * fraction;
				zz += lz * fraction;
				camX += lx * fraction;
				camZ += lz * fraction;
			}
		}
		else {
			xx1 += lx1 * fraction;
			zz1 += lz1 * fraction;
			camX1 += lx1 * fraction;
			camZ1 += lz1 * fraction;

			if (!(xx1 > 0.5 && zz1 > 0.5 && xx1 < 14.5 && zz1 < 14.5))
				dentro = 0;
			else {
				if (camY1 < 4)
					dentro = 1;
			}
		}
	}

    //------------------------------------------------- distancia do observador ao cubo
	if (key == 'd')
		raioP += 0.5f;

	if (key == 't')
		raioP -= 0.5f;

    //------------------------------------------------- modo sombra/reflexao
	if (key == 'r')
		reflexao = 1;

	if (key == 's')
		reflexao = 0;

    //------------------------------------------------- luz-sombra posicao/definicao
    if (key == 'l'){
		luzSol = !luzSol;
		if(!luzSol){
            lightSPos[0]= 2.0f,lightSPos[1]= 2.0f, lightSPos[2]= 7.0f;
		}
    }

    if(!luzSol){
        if (key == '5')
            lightSPos[2] += 0.5f;

        if (key == '0')
            lightSPos[2] -= 0.5f;

        if (key == '3')
            lightSPos[0] += 0.5f;

        if (key == '1')
            lightSPos[0] -= 0.5f;
    }

    if(!dentro)
        glDisable(GL_FOG);
    if(dentro && nevoeiro)
        glEnable(GL_FOG);

    updateVisao();
	glutPostRedisplay();
}

void teclasNotAscii(int key, int x, int y){
    //------------------------------------------------- movimentacao do observador
	if (tipoProj == 1) {
		if (key == GLUT_KEY_UP)
			camY += incy;

		if (key == GLUT_KEY_DOWN){
            if(camY>0.5)
                camY -= incy;
		}

		if (key == GLUT_KEY_LEFT)
			anguloP -= inca;

		if (key == GLUT_KEY_RIGHT)
			anguloP += inca;

		camX = raioP*cos(anguloP) + xx;
		camZ = raioP*sin(anguloP) + zz;

		lx = cos(anguloP);
		lz = sin(anguloP);

		if (camY > 4)
			dentro = 0;
		else
			dentro = 1;
	}
	else {
		if (key == GLUT_KEY_UP)
			camY1 += incy;

		if (key == GLUT_KEY_DOWN){
            if(camY1>0.5)
                camY1 -= incy;
		}
		if (key == GLUT_KEY_LEFT)
			anguloP1 -= inca;

		if (key == GLUT_KEY_RIGHT)
			anguloP1 += inca;

		camX1 = raioP*cos(anguloP1) + xx1;
		camZ1 = raioP*sin(anguloP1) + zz1;

		lx1 = cos(anguloP1);
		lz1 = sin(anguloP1);

		if (camY1 > 4)
			dentro = 0;
		else {
			if (xx1 > 0.5 && zz1 > 0.5 && xx1 < 14.5 && zz1 < 14.5)
				dentro = 1;
		}
	}

    if(!dentro)
        glDisable(GL_FOG);
    if(dentro && nevoeiro)
        glEnable(GL_FOG);

	updateVisao();

    glutPostRedisplay();
}

//======================================================= MAIN
int main(int argc, char** argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH | GLUT_STENCIL);
	glutInitWindowSize (wScreen, hScreen);
	glutInitWindowPosition (300, 50);
	glutCreateWindow ("Teoria Geocentrica de Rubik's");

	init();

	glutSpecialFunc(teclasNotAscii);
    glutKeyboardFunc(key);
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutMouseFunc(gestaoRato);

	glutMainLoop();

	return 0;
}
