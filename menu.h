#ifndef MATERIAIS_H_INCLUDED
#define MATERIAIS_H_INCLUDED

#include <GL/glut.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <GL/freeglut_ext.h>
#include <GL/freeglut_std.h>
#include <GL/glext.h>

#include "RgbImage.h"
//==================================================================== Definir cores
#define VERMELHO 1.0, 0.0, 0.0, 1.0
#define VERDE    0.0, 1.0, 0.0, 1.0
#define AZUL     0.0, 0.0, 1.0, 1.0
#define AMARELO  1.0, 1.0, 0.0, 1.0
#define LARANJA  1.0, 0.5, 0.0, 1.0
#define CINZA    0.3, 0.3, 0.3, 1.0
#define ROSA     1.0, 0.2, 0.6, 1.0
#define ROXO     0.3, 0.0, 0.6, 1.0
#define BRANCO   1.0, 1.0, 1.0, 1.0
#define PRETO    0.0, 0.0, 0.0, 1.0

#define VERDEC    0.0, 0.4, 0.0, 1.0
#define AZULC     0.0, 0.8, 0.8, 1.0
#define AMARELOC  1.0, 1.0, 0.6, 1.0
#define LARANJAC  1.0, 0.2, 0.0, 1.0
#define ROSAC     0.7, 0.4, 1.0, 1.0
#define BRANCOC   0.7, 0.7, 0.7, 1.0

//==================================================================== Definir Materiais
GLfloat  esmeraldAmb []={ 0.0215 ,0.1745 ,0.0215 };
GLfloat  esmeraldDif []={   0.07568 ,0.61424 ,0.07568 };
GLfloat  esmeraldSpec []={ 0.633 ,0.727811 ,0.633 };
GLint    esmeraldCoef = 0.6 *128;

GLfloat  jadeAmb []={ 0.135 ,0.2225 ,0.1575 };
GLfloat  jadeDif []={   0.54 ,0.89 ,0.63 };
GLfloat  jadeSpec []={ 0.316228 ,0.316228 ,0.316228 };
GLint   jadeCoef = 0.1 *128;

GLfloat  obsidianAmb []={ 0.05375 ,0.05 ,0.06625 };
GLfloat  obsidianDif []={   0.18275 ,0.17 ,0.22525 };
GLfloat  obsidianSpec []={ 0.332741 ,0.328634 ,0.346435 };
GLint  obsidianCoef = 0.3 *128;

GLfloat  pearlAmb []={ 0.25 ,0.20725 ,0.20725 };
GLfloat  pearlDif []={   1.0 ,0.829 ,0.829 };
GLfloat  pearlSpec []={ 0.296648 ,0.296648 ,0.296648 };
GLint  pearlCoef = 0.088 *128;

GLfloat  rubyAmb []={ 0.1745 ,0.01175 ,0.01175 };
GLfloat  rubyDif []={   0.61424 ,0.04136 ,0.04136 };
GLfloat  rubySpec []={ 0.727811 ,0.626959 ,0.626959 };
GLint  rubyCoef = 0.6 *128;

GLfloat  turquoiseAmb []={ 0.1 ,0.18725 ,0.1745 };
GLfloat  turquoiseDif []={   0.396 ,0.74151 ,0.69102 };
GLfloat  turquoiseSpec []={ 0.297254 ,0.30829 ,0.306678 };
GLint  turquoiseCoef = 0.1 *128;

GLfloat  brassAmb []={ 0.329412 ,0.223529 ,0.027451 };
GLfloat  brassDif []={   0.780392 ,0.568627 ,0.113725 };
GLfloat  brassSpec []={ 0.992157 ,0.941176 ,0.807843 };
GLint  brassCoef = 0.21794872 *128;

GLfloat  bronzeAmb []={ 0.2125 ,0.1275 ,0.054 };
GLfloat  bronzeDif []={   0.714 ,0.4284 ,0.18144 };
GLfloat  bronzeSpec []={ 0.393548 ,0.271906 ,0.166721 };
GLint  bronzeCoef = 0.2 *128;

GLfloat  chromeAmb []={ 0.25 ,0.25 ,0.25 };
GLfloat  chromeDif []={   0.4 ,0.4 ,0.4 };
GLfloat  chromeSpec []={ 0.774597 ,0.774597 ,0.774597 };
GLint  chromeCoef = 0.6 *128;

GLfloat  copperAmb []={ 0.19125 ,0.0735 ,0.0225 };
GLfloat  copperDif []={   0.7038 ,0.27048 ,0.0828 };
GLfloat  copperSpec []={ 0.256777 ,0.137622 ,0.086014 };
GLint  copperCoef = 0.1 *128;

GLfloat  goldAmb []={ 0.24725 ,0.1995 ,0.0745 };
GLfloat  goldDif []={   0.75164 ,0.60648 ,0.22648 };
GLfloat  goldSpec []={ 0.628281 ,0.555802 ,0.366065 };
GLint  goldCoef = 0.4 *128;

GLfloat  silverAmb []={ 0.19225 ,0.19225 ,0.19225 };
GLfloat  silverDif []={   0.50754 ,0.50754 ,0.50754 };
GLfloat  silverSpec []={ 0.508273 ,0.508273 ,0.508273 };
GLint  silverCoef = 0.4 *128;

GLfloat blackPlasticAmb []={ 0.0 ,0.0 ,0.0 };
GLfloat blackPlasticDif []={   0.01 ,0.01 ,0.01 };
GLfloat blackPlasticSpec []={ 0.50 ,0.50 ,0.50 };
GLint blackPlasticCoef = 0.25 *128;


GLfloat  cyanPlasticAmb []={ 0.0 ,0.1 ,0.06 };
GLfloat  cyanPlasticDif []={   0.0 ,0.50980392 ,0.50980392 };
GLfloat  cyanPlasticSpec []={ 0.50196078 ,0.50196078 ,0.50196078 };
GLint  cyanPlasticCoef = 0.25 *128;

GLfloat greenPlasticAmb []={ 0.0 ,0.0 ,0.0 };
GLfloat greenPlasticDif []={   0.1 ,0.35 ,0.1 };
GLfloat greenPlasticSpec []={ 0.45 ,0.55 ,0.45 };
GLint greenPlasticCoef = 0.25 *128;

GLfloat  redPlasticAmb []={ 0.0 ,0.0 ,0.0 };
GLfloat  redPlasticDif []={   0.5 ,0.0 ,0.0 };
GLfloat  redPlasticSpec []={ 0.7 ,0.6 ,0.6 };
GLint  redPlasticCoef = 0.25 *128;

GLfloat whitePlasticAmb []={ 0.0 ,0.0 ,0.0 };
GLfloat whitePlasticDif []={   0.55 ,0.55 ,0.55 };
GLfloat whitePlasticSpec []={ 0.70 ,0.70 ,0.70 };
GLint whitePlasticCoef = 0.25 *128;

GLfloat yellowPlasticAmb []={ 0.0 ,0.0 ,0.0 };
GLfloat yellowPlasticDif []={   0.5 ,0.5 ,0.0 };
GLfloat yellowPlasticSpec []={ 0.60 ,0.60 ,0.50 };
GLint yellowPlasticCoef = 0.25 *128;

GLfloat  blackRubberAmb []={ 0.02 ,0.02 ,0.02 };
GLfloat  blackRubberDif []={   0.01 ,0.01 ,0.01 };
GLfloat  blackRubberSpec []={ 0.4 ,0.4 ,0.4 };
GLint  blackRubberCoef = 0.078125 *128;

GLfloat  cyanRubberAmb []={ 0.0 ,0.05 ,0.05 };
GLfloat  cyanRubberDif []={   0.4 ,0.5 ,0.5 };
GLfloat  cyanRubberSpec []={ 0.04 ,0.7 ,0.7 };
GLint  cyanRubberCoef = 0.078125 *128;

GLfloat  greenRubberAmb []={ 0.0 ,0.05 ,0.0 };
GLfloat  greenRubberDif []={   0.4 ,0.5 ,0.4 };
GLfloat  greenRubberSpec []={ 0.04 ,0.7 ,0.04 };
GLint  greenRubberCoef = 0.078125 *128;

GLfloat  redRubberAmb []={ 0.05 ,0.0 ,0.0 };
GLfloat  redRubberDif []={   0.5 ,0.4 ,0.4 };
GLfloat  redRubberSpec []={ 0.7 ,0.04 ,0.04 };
GLint  redRubberCoef = 0.078125 *128;

GLfloat  whiteRubberAmb []={ 0.05 ,0.05 ,0.05 };
GLfloat  whiteRubberDif []={   0.5 ,0.5 ,0.5 };
GLfloat  whiteRubberSpec []={ 0.7 ,0.7 ,0.7 };
GLint  whiteRubberCoef = 0.078125 *128;

GLfloat yellowRubberAmb []={ 0.05 ,0.05 ,0.0 };
GLfloat yellowRubberDif []={   0.5 ,0.5 ,0.4 };
GLfloat yellowRubberSpec []={ 0.7 ,0.7 ,0.04 };
GLint yellowRubberCoef = 0.078125 *128;

GLfloat tinAmb []={ 0.105882f, 0.058824f, 0.113725f, 1.0f };
GLfloat tinDif []={0.427451f, 0.470588f, 0.541176f, 1.0f };
GLfloat tinSpec []={0.333333f, 0.333333f, 0.521569f, 1.0f };
GLint tinCoef = 0.076923046*128;

GLfloat polishedBronzeAmb []={0.25f, 0.148f, 0.06475f, 1.0f };
GLfloat polishedBronzeDif []={0.4f, 0.2368f, 0.1036f, 1.0f };
GLfloat polishedBronzeSpec []={0.774597f, 0.458561f, 0.200621f, 1.0f };
GLint polishedBronzeCoef = 0.6 *128;

//==================================================================== Definir Texturas
RgbImage  imag;
GLuint    texture[20];

int opcaoFaces=2;
int opcaoLuzes=0;
int opcaoTempo=3;

void MenuMateriais(int op){
    opcaoFaces =op;

    glutPostRedisplay();
}
void MenuLuzes(int op){

    opcaoLuzes =op;

    glutPostRedisplay();
}

void MenuTempo(int op){

    opcaoTempo =op;
    glutPostRedisplay();
}

void Menu(int op){
    if(op==0)
        exit(0);
    glutPostRedisplay();
}

void CriaMenu(){

    int submenu1;
    submenu1= glutCreateMenu(MenuMateriais);
    glutAddMenuEntry("Cores",1);
	glutAddMenuEntry("Materiais",2);
	glutAddMenuEntry("Texturas",3);

    int submenu2;
    submenu2= glutCreateMenu(MenuLuzes);
    glutAddMenuEntry("Dia/Noit",1);
	glutAddMenuEntry("Tecto - on/off",2);
    glutAddMenuEntry("Foco - on/off",3);

    int submenu3;
    submenu3= glutCreateMenu(MenuTempo);
    glutAddMenuEntry("Chuva - on/off",1);
	glutAddMenuEntry("Neve - on/off",2);
	glutAddMenuEntry("Nevoeiro - on/off",3);

    glutCreateMenu(Menu);
    glutAddSubMenu("Faces Cubo", submenu1);
    glutAddSubMenu("Luzes", submenu2);
    glutAddSubMenu("Tempo", submenu3);
    glutAddMenuEntry("Quit",0);

    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void criaDefineTexturas(){

    //……………………………………………………………………………………………………………………………  textura 0
	glGenTextures(1, &texture[0]);
	glBindTexture(GL_TEXTURE_2D, texture[0]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("Tyellow.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 1
	glGenTextures(1, &texture[1]);
	glBindTexture(GL_TEXTURE_2D, texture[1]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("Tblue.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 2
	glGenTextures(1, &texture[2]);
	glBindTexture(GL_TEXTURE_2D, texture[2]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("Twhite.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 3
	glGenTextures(1, &texture[3]);
	glBindTexture(GL_TEXTURE_2D, texture[3]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("Tpink.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());


    //……………………………………………………………………………………………………………………………  textura 4
	glGenTextures(1, &texture[4]);
	glBindTexture(GL_TEXTURE_2D, texture[4]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("Tgreen.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 5
	glGenTextures(1, &texture[5]);
	glBindTexture(GL_TEXTURE_2D, texture[5]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("Torange.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 6
    glGenTextures(1, &texture[6]);
	glBindTexture(GL_TEXTURE_2D, texture[6]);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("skybox.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 7
    glGenTextures(1, &texture[7]);
    glBindTexture(GL_TEXTURE_2D, texture[7]);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    imag.LoadBmpFile("skybox1.bmp");
    glTexImage2D(GL_TEXTURE_2D, 0, 3,
    imag.GetNumCols(),
    imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
    imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 8
    glGenTextures(1, &texture[8]);
    glBindTexture(GL_TEXTURE_2D, texture[8]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    imag.LoadBmpFile("terrain.bmp");
    glTexImage2D(GL_TEXTURE_2D, 0, 3,
        imag.GetNumCols(),
        imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
        imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 9
    glGenTextures(1, &texture[9]);
    glBindTexture(GL_TEXTURE_2D, texture[9]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    imag.LoadBmpFile("planet.bmp");
    glTexImage2D(GL_TEXTURE_2D, 0, 3,
        imag.GetNumCols(),
        imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
        imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 10
    glGenTextures(1, &texture[10]);
    glBindTexture(GL_TEXTURE_2D, texture[10]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    imag.LoadBmpFile("planet1.bmp");
    glTexImage2D(GL_TEXTURE_2D, 0, 3,
        imag.GetNumCols(),
        imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
        imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 11
    glGenTextures(1, &texture[11]);
    glBindTexture(GL_TEXTURE_2D, texture[11]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    imag.LoadBmpFile("moon.bmp");
    glTexImage2D(GL_TEXTURE_2D, 0, 3,
        imag.GetNumCols(),
        imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
        imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 12
    glGenTextures(1, &texture[12]);
    glBindTexture(GL_TEXTURE_2D, texture[12]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    imag.LoadBmpFile("sun.bmp");
    glTexImage2D(GL_TEXTURE_2D, 0, 3,
        imag.GetNumCols(),
        imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
        imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 13
    glGenTextures(1, &texture[13]);
	glBindTexture(GL_TEXTURE_2D, texture[13]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("tree.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 14
    glGenTextures(1, &texture[14]);
	glBindTexture(GL_TEXTURE_2D, texture[14]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("leaves.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    //……………………………………………………………………………………………………………………………  textura 15
    glGenTextures(1, &texture[15]);
	glBindTexture(GL_TEXTURE_2D, texture[15]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	imag.LoadBmpFile("neve.bmp");
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
	imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());
}


void initTexturas(int textura){

    glEnable(GL_LIGHTING);
    glDisable(GL_COLOR_MATERIAL);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[textura]);

}

void initCores(int cor){

    glDisable(GL_TEXTURE_2D);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE );
    glEnable(GL_LIGHTING);

	switch (cor){
		case 0:
            glColor4f(VERMELHO);
			break;
		case 1:
            glColor4f(VERDE);
			break;
        case 2:
            glColor4f(AZUL);
			break;
		case 3:
		    glColor4f(AMARELO);
			break;
		case 4:
            glColor4f(LARANJA);
			break;
        case 5:
            glColor4f(CINZA);
			break;
		case 6:
            glColor4f(ROSA);
			break;
		case 7:
            glColor4f(ROXO);
			break;
		case 8:
            glColor4f(BRANCO);
			break;
        case 9:
            glColor4f(PRETO);
			break;
        case 10:
            glColor4f(VERDEC);
			break;
        case 11:
            glColor4f(AMARELOC);
			break;
        case 12:
            glColor4f(AZULC);
			break;
        case 13:
            glColor4f(LARANJAC);
			break;
        case 14:
            glColor4f(ROSAC);
			break;
        case 15:
            glColor4f(BRANCOC);
			break;
	}

}

void initMaterials(int material){

    glDisable(GL_TEXTURE_2D);
    glDisable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

	switch (material){
		case 0: //esmerald
			glMaterialfv(GL_FRONT,GL_AMBIENT,  esmeraldAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  esmeraldDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, esmeraldSpec);
			glMateriali (GL_FRONT,GL_SHININESS,esmeraldCoef);
			break;
		case 1: //jade
			glMaterialfv(GL_FRONT,GL_AMBIENT,  jadeAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  jadeDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, jadeSpec);
			glMateriali (GL_FRONT,GL_SHININESS,jadeCoef);
			break;
        case 2: //obsidian
			glMaterialfv(GL_FRONT,GL_AMBIENT,  obsidianAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  obsidianDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, obsidianSpec);
			glMateriali (GL_FRONT,GL_SHININESS,obsidianCoef);
			break;
		case 3: //pearl
			glMaterialfv(GL_FRONT,GL_AMBIENT,  pearlAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  pearlDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, pearlSpec);
			glMateriali (GL_FRONT,GL_SHININESS,pearlCoef);
			break;
		case 4: //ruby
			glMaterialfv(GL_FRONT,GL_AMBIENT,  rubyAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  rubyDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, rubySpec);
			glMateriali (GL_FRONT,GL_SHININESS,rubyCoef);
			break;
        case 5: //turquoise
			glMaterialfv(GL_FRONT,GL_AMBIENT,  turquoiseAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  turquoiseDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, turquoiseSpec);
			glMateriali (GL_FRONT,GL_SHININESS,turquoiseCoef);
			break;
		case 6: //brass
			glMaterialfv(GL_FRONT,GL_AMBIENT,  brassAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  brassDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, brassSpec);
			glMateriali (GL_FRONT,GL_SHININESS,brassCoef);
			break;
		case 7: //bronze
			glMaterialfv(GL_FRONT,GL_AMBIENT,  bronzeAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  bronzeDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, bronzeSpec);
			glMateriali (GL_FRONT,GL_SHININESS,bronzeCoef);
			break;
		case 8: //chrome
			glMaterialfv(GL_FRONT,GL_AMBIENT,  chromeAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  chromeDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, chromeSpec);
			glMateriali (GL_FRONT,GL_SHININESS,chromeCoef);
			break;
        case 9: //copper
			glMaterialfv(GL_FRONT,GL_AMBIENT,  copperAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  copperDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, copperSpec);
			glMateriali (GL_FRONT,GL_SHININESS,copperCoef);
			break;
        case 10: //gold
			glMaterialfv(GL_FRONT,GL_AMBIENT,  goldAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  goldDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, goldSpec);
			glMateriali (GL_FRONT,GL_SHININESS,goldCoef);
			break;
		case 11: //silver
			glMaterialfv(GL_FRONT,GL_AMBIENT,  silverAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  silverDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, silverSpec);
			glMateriali (GL_FRONT,GL_SHININESS,silverCoef);
			break;
		case 12: //blackPlastic
			glMaterialfv(GL_FRONT,GL_AMBIENT,  blackPlasticAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  blackPlasticDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, blackPlasticSpec);
			glMateriali (GL_FRONT,GL_SHININESS,blackPlasticCoef);
			break;
		case 13: //cyankPlastic
			glMaterialfv(GL_FRONT,GL_AMBIENT,  cyanPlasticAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  cyanPlasticDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, cyanPlasticSpec);
			glMateriali (GL_FRONT,GL_SHININESS,cyanPlasticCoef);
			break;
		case 14: //greenPlastic
			glMaterialfv(GL_FRONT,GL_AMBIENT,  greenPlasticAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  greenPlasticDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, greenPlasticSpec);
			glMateriali (GL_FRONT,GL_SHININESS,greenPlasticCoef);
			break;
		case 15: //redPlastic
			glMaterialfv(GL_FRONT,GL_AMBIENT,  redPlasticAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  redPlasticDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, redPlasticSpec);
			glMateriali (GL_FRONT,GL_SHININESS,redPlasticCoef);
			break;
	        case 16: //whitePlastic
			glMaterialfv(GL_FRONT,GL_AMBIENT,  whitePlasticAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  whitePlasticDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, whitePlasticSpec);
			glMateriali (GL_FRONT,GL_SHININESS,whitePlasticCoef);
			break;
		case 17: //yellowPlastic
			glMaterialfv(GL_FRONT,GL_AMBIENT,  yellowPlasticAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  yellowPlasticDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, yellowPlasticSpec);
			glMateriali (GL_FRONT,GL_SHININESS,yellowPlasticCoef);
			break;
        case 18: //blackRubber
			glMaterialfv(GL_FRONT,GL_AMBIENT,  blackRubberAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  blackRubberDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, blackRubberSpec);
			glMateriali (GL_FRONT,GL_SHININESS,blackRubberCoef);
			break;
		case 19: //cyanRubber
			glMaterialfv(GL_FRONT,GL_AMBIENT,  cyanRubberAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  cyanRubberDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, cyanRubberSpec);
			glMateriali (GL_FRONT,GL_SHININESS,cyanRubberCoef);
			break;
		case 20: //greenRubber
			glMaterialfv(GL_FRONT,GL_AMBIENT,  greenRubberAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  greenRubberDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, greenRubberSpec);
			glMateriali (GL_FRONT,GL_SHININESS,greenRubberCoef);
			break;
		case 21: //redRubber
			glMaterialfv(GL_FRONT,GL_AMBIENT,  redRubberAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  redRubberDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, redRubberSpec);
			glMateriali (GL_FRONT,GL_SHININESS,redRubberCoef);
			break;
		case 22: //whiteRubber
			glMaterialfv(GL_FRONT,GL_AMBIENT,  whiteRubberAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  whiteRubberDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, whiteRubberSpec);
			glMateriali (GL_FRONT,GL_SHININESS,whiteRubberCoef);
			break;
		case 23: //yellowRubber
			glMaterialfv(GL_FRONT,GL_AMBIENT,  yellowRubberAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  yellowRubberDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, yellowRubberSpec);
			glMateriali (GL_FRONT,GL_SHININESS,yellowRubberCoef);
			break;
        case 24: //tin
			glMaterialfv(GL_FRONT,GL_AMBIENT,  tinAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  tinDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, tinSpec);
			glMateriali (GL_FRONT,GL_SHININESS,tinCoef);
			break;
        case 25: //polishedBronze
			glMaterialfv(GL_FRONT,GL_AMBIENT,  polishedBronzeAmb  );
			glMaterialfv(GL_FRONT,GL_DIFFUSE,  polishedBronzeDif );
			glMaterialfv(GL_FRONT,GL_SPECULAR, polishedBronzeSpec);
			glMateriali (GL_FRONT,GL_SHININESS,polishedBronzeCoef);
			break;
	}
}

#endif // MATERIAIS_H_INCLUDED
