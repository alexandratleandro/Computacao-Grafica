#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

#include "Chuva.h"
#include "menu.h"

#define frand()			((float)rand()/RAND_MAX)

void iniParticulas(){
    int i;
    for(i=0; i<MAX_PARTICULAS; i++){
        iniParticulas(i);
    }
}

void iniParticulas(int i){

    particula[i].x	  = frand()*20-2;
    particula[i].y	  = 15.0;
    particula[i].z	  = frand()*20-2;

    particula[i].v = 0.0;
    particula[i].gravidade = -1.0;

    particula[i].life = 1.0f;
    particula[i].fade = 0.1*frand();

}

void drawChuva() {
    int i;
    for (i=0; i<MAX_PARTICULAS; i++){

        glColor4f(0.63,0.65, 0.8, particula[i].life);
        glBegin(GL_QUADS);
            glVertex3f(particula[i].x         , particula[i].y+0.1f, particula[i].z );
            glVertex3f(particula[i].x  + 0.02f, particula[i].y+0.1f, particula[i].z );
            glVertex3f(particula[i].x  + 0.02f, particula[i].y     , particula[i].z );
            glVertex3f(particula[i].x         , particula[i].y     , particula[i].z );
        glEnd();

        particula[i].y += particula[i].v /2000;
        particula[i].v  += particula[i].gravidade;
        particula[i].life -= particula[i].fade;

        // reiniciar chuva qd chega ao chao
        if (particula[i].y <= -2) {
            particula[i].life = -1.0;
        }
        if (particula[i].life < 0.0) {
            iniParticulas(i);
        }
	}
}

void drawNeve() {
    int i=0;

    for (i=0; i<MAX_NEVE; i++){
        glColor4f(1.0,1.0, 1.0, 1.0);
        glPushMatrix();
            initTexturas(15);
            glTranslatef(particula[i].x  , particula[i].y, particula[i].z );
            GLUquadricObj*  yS = gluNewQuadric();
            gluQuadricTexture(yS, GL_TRUE);
            gluSphere(yS, 0.1, 8, 8);
            gluDeleteQuadric(yS);
        glPopMatrix();

        particula[i].y += particula[i].v /5000;
        particula[i].v += particula[i].gravidade;
        particula[i].life -= particula[i].fade;

        // reiniciar neve qd chega ao chao
        if (particula[i].y <= -2) {
            particula[i].life = -1.0;
        }
        if (particula[i].life < 0.0) {
            iniParticulas(i);
        }

	}

}
