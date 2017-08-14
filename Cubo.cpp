#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "menu.h"
#include "Cubo.h"

void drawCubo() {
    //cubo preto de fundo
	glPushMatrix();
        glTranslatef(xx, yy - 0.03, zz);
        glRotatef(0.2*angR, 0, 1, 0);
        glRotatef(45, 1, 0, 1);
        glScalef(0.055, 0.055, 0.055);

        glBegin(GL_QUADS);
            initCores(9);
            //frente
            ///FACE 1
            glNormal3f(0.0f,0.0f, 1.0f);
            glVertex3f(-3.0f, -3.0f, 1.0f);
            glVertex3f(-3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, 1.0f);
            //baixo
            ///FACE 2
            glNormal3f(0.0f, -1.0f, 0.0f);
            glVertex3f(-3.0f, -3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, -5.0f);
            glVertex3f(-3.0f, -3.0f, -5.0f);
            //cima
            ///FACE 3
            glNormal3f(0.0f, 1.0f, 0.0f);
            glVertex3f(-3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, 3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, -5.0f);
            //tras
            ///FACE 4
            glNormal3f(0.0f, 0.0f, -1.0f);
            glVertex3f(-3.0f, -3.0f, -5.0f);
            glVertex3f(3.0f, -3.0f, -5.0f);
            glVertex3f(3.0f, 3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, -5.0f);
            //esquerda
            ///FACE 5
            glNormal3f(-1.0f, 0.0f, 0.0f);
            glVertex3f(-3.0f, -3.0f, 1.0f);
            glVertex3f(-3.0f, -3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, 1.0f);
            //direita
            ///FACE 6
            glNormal3f(1.0f, 0.0f, 0.0f);
            glVertex3f(3.0f, -3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, -5.0f);
            glVertex3f(3.0f, 3.0f, -5.0f);
            glVertex3f(3.0f, 3.0f, 1.0f);
        glEnd();
	glPopMatrix();
    // faces de 9 quadrados
	if (opcaoFaces == 1) { //================================= Cores
        glPushMatrix();
            glTranslatef(xx, yy, zz);
            glRotatef(0.2*angR, 0, 1, 0);
            glRotatef(45, 1, 0, 1);
            glScalef(0.05, 0.05, 0.05);

            initCores(3);
            glBegin(GL_QUADS);
                //frente
                ///FACE 1
                glNormal3f(0.0f, 0.0f, 1.0f);
                initCores(3);
                glVertex3f(0.7f, 0.7f, 1.45f);
                glVertex3f(-1.3f, 0.7f, 1.45f);
                initCores(11);
                glVertex3f(-1.3f, -1.3f, 1.45f);
                glVertex3f(0.7f, -1.3f, 1.45f);

                initCores(8);
                glVertex3f(-3.45f, 0.7f, 1.45f);
                glVertex3f(-1.45f, 0.7f, 1.45f);
                initCores(15);
                glVertex3f(-1.45f, -1.3f, 1.45f);
                glVertex3f(-3.45f, -1.3f, 1.45f);

                initCores(4);
                glVertex3f(2.85f, 0.7f, 1.45f);
                glVertex3f(0.85f, 0.7f, 1.45f);
                initCores(13);
                glVertex3f(0.85f, -1.3f, 1.45f);
                glVertex3f(2.85f, -1.3f, 1.45f);
                /////////////////////////
                initCores(6);
                glVertex3f(0.7f, 2.85f, 1.45f);
                glVertex3f(-1.3f, 2.85f, 1.45f);
                initCores(14);
                glVertex3f(-1.3f, 0.85f, 1.45f);
                glVertex3f(0.7f, 0.85f, 1.45f);

                initCores(2);
                glVertex3f(-3.45f, 2.85f, 1.45f);
                glVertex3f(-1.45f, 2.85f, 1.45f);
                initCores(12);
                glVertex3f(-1.45f, 0.85f, 1.45f);
                glVertex3f(-3.45f, 0.85f, 1.45f);

                initCores(1);
                glVertex3f(2.85f, 2.85f, 1.45f);
                glVertex3f(0.85f, 2.85f, 1.45f);
                initCores(10);
                glVertex3f(0.85f, 0.85f, 1.45f);
                glVertex3f(2.85f, 0.85f, 1.45f);
                //////////////////////////////
                initCores(4);
                glVertex3f(0.7f, -1.45f, 1.45f);
                glVertex3f(-1.3f, -1.45f, 1.45f);
                initCores(13);
                glVertex3f(-1.3f, -3.45f, 1.45f);
                glVertex3f(0.7f, -3.45f, 1.45f);

                initCores(6);
                glVertex3f(-3.45f, -1.45f, 1.45f);
                glVertex3f(-1.45f, -1.45f, 1.45f);
                initCores(14);
                glVertex3f(-1.45f, -3.45f, 1.45f);
                glVertex3f(-3.45f, -3.45f, 1.45f);

                initCores(2);
                glVertex3f(2.85f, -1.45f, 1.45f);
                glVertex3f(0.85f, -1.45f, 1.45f);
                initCores(12);
                glVertex3f(0.85f, -3.45f, 1.45f);
                glVertex3f(2.85f, -3.45f, 1.45f);

                ///FACE 2
                initCores(3);
                glNormal3f(0.0f, -1.0f, 0.0f);
                glVertex3f(0.7f, -3.85f, 1.15f);
                glVertex3f(-1.3f, -3.85f, 1.15f);
                initCores(11);
                glVertex3f(-1.3f, -3.85f, -0.85f);
                glVertex3f(0.7f, -3.85f, -0.85f);

                initCores(8);
                glVertex3f(2.85f, -3.85f, 1.15f);
                glVertex3f(0.85f, -3.85f, 1.15f);
                initCores(15);
                glVertex3f(0.85f, -3.85f, -0.85f);
                glVertex3f(2.85f, -3.85f, -0.85f);

                initCores(1);
                glVertex3f(-1.45f, -3.85f, 1.15f);
                glVertex3f(-3.45f, -3.85f, 1.0f);
                initCores(10);
                glVertex3f(-3.45f, -3.85f, -0.85f);
                glVertex3f(-1.45f, -3.85f, -0.85f);
                //////////////////////////////

                initCores(2);
                glVertex3f(0.7f, -3.85f, -1.0f);
                glVertex3f(-1.3f, -3.85f, -1.0f);
                initCores(12);
                glVertex3f(-1.3f, -3.85f, -3.0f);
                glVertex3f(0.7f, -3.85f, -3.0f);

                initCores(1);
                glVertex3f(2.85f, -3.85f, -1.0f);
                glVertex3f(0.85f, -3.85f, -1.0f);
                initCores(10);
                glVertex3f(0.85f, -3.85f, -3.0f);
                glVertex3f(2.85f, -3.85f, -3.0f);

                initCores(6);
                glVertex3f(-1.45f, -3.85f, -1.0f);
                glVertex3f(-3.45f, -3.85f, -1.0f);
                initCores(14);
                glVertex3f(-3.45f, -3.85f, -3.0f);
                glVertex3f(-1.45f, -3.85f, -3.0f);
                ///////////////////////
                initCores(3);
                glVertex3f(0.7f, -3.85f, -3.15f);
                glVertex3f(-1.3f, -3.85f, -3.15f);
                initCores(11);
                glVertex3f(-1.3f, -3.85f, -5.15f);
                glVertex3f(0.7f, -3.85f, -5.15f);

                initCores(8);
                glVertex3f(2.85f, -3.85f, -3.15f);
                glVertex3f(0.85f, -3.85f, -3.15f);
                initCores(15);
                glVertex3f(0.85f, -3.85f, -5.15f);
                glVertex3f(2.85f, -3.85f, -5.15f);

                initCores(4);
                glVertex3f(-1.45f, -3.85f, -3.15f);
                glVertex3f(-3.45f, -3.85f, -3.15f);
                initCores(13);
                glVertex3f(-3.45f, -3.85f, -5.15f);
                glVertex3f(-1.45f, -3.85f, -5.15f);

                ///FACE 3
                initCores(1);
                glNormal3f(0.0f, 1.0f, 0.0f);
                glVertex3f(0.75f, 3.0f, -0.75f);
                glVertex3f(-1.15f, 3.0f, -0.75f);
                initCores(10);
                glVertex3f(-1.15f, 3.0f, 1.15f);
                glVertex3f(0.75f, 3.0f, 1.15f);

                initCores(2);
                glVertex3f(2.875f, 3.0f, -0.75f);
                glVertex3f(0.875f, 3.0f, -0.75f);
                initCores(12);
                glVertex3f(0.875f, 3.0f, 1.15f);
                glVertex3f(2.875f, 3.0f, 1.15f);

                initCores(3);
                glVertex3f(-1.3f, 3.0f, -0.75f);
                glVertex3f(-3.3f, 3.0f, -0.75f);
                initCores(11);
                glVertex3f(-3.3f, 3.0f, 1.15f);
                glVertex3f(-1.3f, 3.0f, 1.15f);
                ///////////////////////////////////////
                initCores(4);
                glVertex3f(0.75f, 3.0f, -2.875f);
                glVertex3f(-1.15f, 3.0f, -2.875f);
                initCores(13);
                glVertex3f(-1.15f, 3.0f, -0.875f);
                glVertex3f(0.75f, 3.0f, -0.875f);

                initCores(6);
                glVertex3f(2.875f, 3.0f, -2.875f);
                glVertex3f(0.875f, 3.0f, -2.875f);
                initCores(14);
                glVertex3f(0.875f, 3.0f, -0.875f);
                glVertex3f(2.875f, 3.0f, -0.875f);

                initCores(8);
                glVertex3f(-1.3f, 3.0f, -2.875f);
                glVertex3f(-3.3f, 3.0f, -2.875f);
                initCores(15);
                glVertex3f(-3.3f, 3.0f, -0.875f);
                glVertex3f(-1.3f, 3.0f, -0.875f);
                //////////////////
                initCores(3);
                glVertex3f(0.75f, 3.0f, -5.0f);
                glVertex3f(-1.15f, 3.0f, -5.0f);
                initCores(11);
                glVertex3f(-1.15f, 3.0f, -3.0f);
                glVertex3f(0.75f, 3.0f, -3.0f);

                initCores(4);
                glVertex3f(2.875f, 3.0f, -5.0f);
                glVertex3f(0.875f, 3.0f, -5.0f);
                initCores(13);
                glVertex3f(0.875f, 3.0f, -3.0f);
                glVertex3f(2.875f, 3.0f, -3.0f);

                initCores(1);
                glVertex3f(-1.3f, 3.0f, -5.0f);
                glVertex3f(-3.3f, 3.0f, -5.0f);
                initCores(10);
                glVertex3f(-3.3f, 3.0f, -3.0f);
                glVertex3f(-1.3f, 3.0f, -3.0f);

                ///FACE 4
                initCores(8);
                glNormal3f(0.0f, 0.0f, -1.0f);
                glVertex3f(0.7f, -3.6f, -5.30f);
                glVertex3f(-1.3f, -3.6f, -5.30f);
                initCores(15);
                glVertex3f(-1.3f, -1.6f, -5.30f);
                glVertex3f(0.7f, -1.6f, -5.30f);

                initCores(6);
                glVertex3f(-1.45f, -3.6f, -5.30f);
                glVertex3f(-3.45f, -3.6f, -5.30f);
                initCores(14);
                glVertex3f(-3.45f, -1.6f, -5.30f);
                glVertex3f(-1.45f, -1.6f, -5.30f);

                initCores(4);
                glVertex3f(2.85f, -3.6f, -5.30f);
                glVertex3f(0.85f, -3.6f, -5.30f);
                initCores(13);
                glVertex3f(0.85f, -1.6f, -5.30f);
                glVertex3f(2.85f, -1.6f, -5.30f);
                /////////////////////////////////////
                initCores(3);
                glVertex3f(0.7f, -1.45f, -5.30f);
                glVertex3f(-1.3f, -1.45f, -5.30f);
                initCores(11);
                glVertex3f(-1.3f, 0.55f, -5.30f);
                glVertex3f(0.7f, 0.55f, -5.30f);

                initCores(2);
                glVertex3f(-1.45f, -1.45f, -5.30f);
                glVertex3f(-3.45f, -1.45f, -5.30f);
                initCores(12);
                glVertex3f(-3.45f, 0.55f, -5.30f);
                glVertex3f(-1.45f, 0.55f, -5.30f);

                initCores(1);
                glVertex3f(2.85f, -1.45f, -5.30f);
                glVertex3f(0.85f, -1.45f, -5.30f);
                initCores(10);
                glVertex3f(0.85f, 0.55f, -5.30f);
                glVertex3f(2.85f, 0.55f, -5.30f);
                /////////////////
                initCores(6);
                glVertex3f(0.7f, 0.7f, -5.30f);
                glVertex3f(-1.3f, 0.7f, -5.30f);
                initCores(14);
                glVertex3f(-1.3f, 2.7f, -5.30f);
                glVertex3f(0.7f, 2.7f, -5.30f);

                initCores(8);
                glVertex3f(-1.45f, 0.7f, -5.30f);
                glVertex3f(-3.45f, 0.7f, -5.30f);
                initCores(15);
                glVertex3f(-3.45f, 2.7f, -5.30f);
                glVertex3f(-1.45f, 2.7f, -5.30f);

                initCores(2);
                glVertex3f(2.85f, 0.7f, -5.30f);
                glVertex3f(0.85f, 0.7f, -5.30f);
                initCores(12);
                glVertex3f(0.8f, 2.7f, -5.30f);
                glVertex3f(2.85f, 2.7f, -5.30f);

                ///FACE 5
                initCores(1);
                glNormal3f(-1.0f, 0.0f, 0.0f);
                glVertex3f(-3.65f, 0.7f, 1.3f);
                glVertex3f(-3.65f, 0.7f, -0.7f);
                initCores(10);
                glVertex3f(-3.65f, -1.3f, -0.7f);
                glVertex3f(-3.65f, -1.3f, 1.3f);

                initCores(2);
                glVertex3f(-3.65f, 2.85f, 1.3f);
                glVertex3f(-3.65f, 2.85f, -0.7f);
                initCores(12);
                glVertex3f(-3.65f, 0.85f, -0.7f);
                glVertex3f(-3.65f, 0.85f, 1.3f);

                initCores(4);
                glVertex3f(-3.65f, -1.45f, 1.3f);
                glVertex3f(-3.65f, -1.45f, -0.7f);
                initCores(13);
                glVertex3f(-3.65f, -3.45f, -0.7f);
                glVertex3f(-3.65f, -3.45f, 1.3f);
                ///////////////////
                initCores(6);
                glVertex3f(-3.65f, 0.7f, -0.85f);
                glVertex3f(-3.65f, 0.7f, -2.85f);
                initCores(14);
                glVertex3f(-3.65f, -1.3f, -2.85f);
                glVertex3f(-3.65f, -1.3f, -0.85f);

                initCores(8);
                glVertex3f(-3.65f, 2.85f, -0.85f);
                glVertex3f(-3.65f, 2.85f, -2.85f);
                initCores(15);
                glVertex3f(-3.65f, 0.85f, -2.85f);
                glVertex3f(-3.65f, 0.85f, -0.85f);

                initCores(3);
                glVertex3f(-3.65f, -1.45f, -0.85f);
                glVertex3f(-3.65f, -1.45f, -2.85f);
                initCores(11);
                glVertex3f(-3.65f, -3.45f, -2.85f);
                glVertex3f(-3.65f, -3.45f, -0.85f);
                ///////////////////
                initCores(2);
                glVertex3f(-3.65f, 0.7f, -3.0f);
                glVertex3f(-3.65f, 0.7f, -5.0f);
                initCores(12);
                glVertex3f(-3.65f, -1.3f, -5.0f);
                glVertex3f(-3.65f, -1.3f, -3.0f);

                initCores(4);
                glVertex3f(-3.65f, 2.85f, -3.0f);
                glVertex3f(-3.65f, 2.85f, -5.0f);
                initCores(13);
                glVertex3f(-3.65f, 0.85f, -5.0f);
                glVertex3f(-3.65f, 0.85f, -3.0f);

                initCores(1);
                glVertex3f(-3.65f, -1.45f, -3.0f);
                glVertex3f(-3.65f, -1.45f, -5.0f);
                initCores(10);
                glVertex3f(-3.65f, -3.45f, -5.0f);
                glVertex3f(-3.65f, -3.45f, -3.0f);

                ///FACE 6
                initCores(6);
                glNormal3f(1.0f, 0.0f, 0.0f);
                glVertex3f(3.1f, 0.55f, -0.8f);
                glVertex3f(3.1f, 0.55f, 1.2f);
                initCores(14);
                glVertex3f(3.1f, -1.45f, 1.2f);
                glVertex3f(3.1f, -1.45f, -0.8f);

                initCores(1);
                glVertex3f(3.1f, -1.6f, -0.8f);
                glVertex3f(3.1f, -1.6f, 1.2f);
                initCores(10);
                glVertex3f(3.1f, -3.6f, 1.2f);
                glVertex3f(3.1f, -3.6f, -0.8f);

                initCores(8);
                glVertex3f(3.1f, 2.7f, -0.8f);
                glVertex3f(3.1f, 2.7f, 1.2f);
                initCores(15);
                glVertex3f(3.1f, 0.7f, 1.2f);
                glVertex3f(3.1f, 0.7f, -0.8);
                /////////////
                initCores(2);
                glVertex3f(3.1f, 0.55f, -2.95f);
                glVertex3f(3.1f, 0.55f, -0.95f);
                initCores(12);
                glVertex3f(3.1f, -1.45f, -0.95f);
                glVertex3f(3.1f, -1.45f, -2.95f);

                initCores(4);
                glVertex3f(3.1f, -1.6f, -2.95f);
                glVertex3f(3.1f, -1.6f, -0.95f);
                initCores(13);
                glVertex3f(3.1f, -3.6f, -0.95f);
                glVertex3f(3.1f, -3.6f, -2.95f);

                initCores(3);
                glVertex3f(3.1f, 2.7f, -2.95f);
                glVertex3f(3.1f, 2.7f, -0.95f);
                initCores(11);
                glVertex3f(3.1f, 0.7f, -0.95f);
                glVertex3f(3.1f, 0.7f, -2.95f);
                /////////////
                initCores(8);
                glVertex3f(3.1f, 0.55f, -5.1f);
                glVertex3f(3.1f, 0.55f, -3.1f);
                initCores(15);
                glVertex3f(3.1f, -1.45f, -3.1f);
                glVertex3f(3.1f, -1.45f, -5.1f);

                initCores(3);
                glVertex3f(3.1f, -1.6f, -5.1f);
                glVertex3f(3.1f, -1.6f, -3.1f);
                initCores(11);
                glVertex3f(3.1f, -3.6f, -3.1f);
                glVertex3f(3.1f, -3.6f, -5.1f);

                initCores(6);
                glVertex3f(3.1f, 2.7f, -5.1f);
                glVertex3f(3.1f, 2.7f, -3.1f);
                initCores(14);
                glVertex3f(3.1f, 0.7f, -3.1f);
                glVertex3f(3.1f, 0.7f, -5.1f);
                initCores(9);
                initMaterials(12);
            glEnd();
		glPopMatrix();

		glDisable(GL_TEXTURE_2D);
		glEnable(GL_COLOR_MATERIAL);

	}
	else if (opcaoFaces == 2) { //================================= Materiais

		glPushMatrix();
            glTranslatef(xx, yy, zz);
            glRotatef(0.2*angR, 0, 1, 0);
            glRotatef(45, 1, 0, 1);
            glScalef(0.05, 0.05, 0.05);

            initMaterials(12);
            glBegin(GL_QUADS);

                ///FACE 1
                initMaterials(10);
                glNormal3f(0.0f, 0.0f, 1.0f);
                glVertex3f(0.7f, 0.7f, 1.45f);
                glVertex3f(-1.3f, 0.7f, 1.45f);
                glVertex3f(-1.3f, -1.3f, 1.45f);
                glVertex3f(0.7f, -1.3f, 1.45f);

                initMaterials(11);
                glVertex3f(-3.45f, 0.7f, 1.45f);
                glVertex3f(-1.45f, 0.7f, 1.45f);
                glVertex3f(-1.45f, -1.3f, 1.45f);
                glVertex3f(-3.45f, -1.3f, 1.45f);

                initMaterials(9);
                glVertex3f(2.85f, 0.7f, 1.45f);
                glVertex3f(0.85f, 0.7f, 1.45f);
                glVertex3f(0.85f, -1.3f, 1.45f);
                glVertex3f(2.85f, -1.3f, 1.45f);
                /////////////////////////
                initMaterials(3);
                glVertex3f(0.7f, 2.85f, 1.45f);
                glVertex3f(-1.3f, 2.85f, 1.45f);
                glVertex3f(-1.3f, 0.85f, 1.45f);
                glVertex3f(0.7f, 0.85f, 1.45f);

                initMaterials(5);
                glVertex3f(-3.45f, 2.85f, 1.45f);
                glVertex3f(-1.45f, 2.85f, 1.45f);
                glVertex3f(-1.45f, 0.85f, 1.45f);
                glVertex3f(-3.45f, 0.85f, 1.45f);

                initMaterials(0);
                glVertex3f(2.85f, 2.85f, 1.45f);
                glVertex3f(0.85f, 2.85f, 1.45f);
                glVertex3f(0.85f, 0.85f, 1.45f);
                glVertex3f(2.85f, 0.85f, 1.45f);
                //////////////////////////////
                initMaterials(9);
                glVertex3f(0.7f, -1.45f, 1.45f);
                glVertex3f(-1.3f, -1.45f, 1.45f);
                glVertex3f(-1.3f, -3.45f, 1.45f);
                glVertex3f(0.7f, -3.45f, 1.45f);

                initMaterials(3);
                glVertex3f(-3.45f, -1.45f, 1.45f);
                glVertex3f(-1.45f, -1.45f, 1.45f);
                glVertex3f(-1.45f, -3.45f, 1.45f);
                glVertex3f(-3.45f, -3.45f, 1.45f);

                initMaterials(5);
                glVertex3f(2.85f, -1.45f, 1.45f);
                glVertex3f(0.85f, -1.45f, 1.45f);
                glVertex3f(0.85f, -3.45f, 1.45f);
                glVertex3f(2.85f, -3.45f, 1.45f);
                //////////////////////////////
                ///FACE 2
                initMaterials(10);
                glNormal3f(0.0f, -1.0f, 0.0f);
                glVertex3f(0.7f, -3.85f, 1.15f);
                glVertex3f(-1.3f, -3.85f, 1.15f);
                glVertex3f(-1.3f, -3.85f, -0.85f);
                glVertex3f(0.7f, -3.85f, -0.85f);

                initMaterials(11);
                glVertex3f(2.85f, -3.85f, 1.15f);
                glVertex3f(0.85f, -3.85f, 1.15f);
                glVertex3f(0.85f, -3.85f, -0.85f);
                glVertex3f(2.85f, -3.85f, -0.85f);

                initMaterials(0);
                glVertex3f(-1.45f, -3.85f, 1.15f);
                glVertex3f(-3.45f, -3.85f, 1.0f);
                glVertex3f(-3.45f, -3.85f, -0.85f);
                glVertex3f(-1.45f, -3.85f, -0.85f);
                //////////////////////////////

                initMaterials(5);
                glVertex3f(0.7f, -3.85f, -1.0f);
                glVertex3f(-1.3f, -3.85f, -1.0f);
                glVertex3f(-1.3f, -3.85f, -3.0f);
                glVertex3f(0.7f, -3.85f, -3.0f);

                initMaterials(0);
                glVertex3f(2.85f, -3.85f, -1.0f);
                glVertex3f(0.85f, -3.85f, -1.0f);
                glVertex3f(0.85f, -3.85f, -3.0f);
                glVertex3f(2.85f, -3.85f, -3.0f);

                initMaterials(3);
                glVertex3f(-1.45f, -3.85f, -1.0f);
                glVertex3f(-3.45f, -3.85f, -1.0f);
                glVertex3f(-3.45f, -3.85f, -3.0f);
                glVertex3f(-1.45f, -3.85f, -3.0f);
                ///////////////////////
                initMaterials(10);
                glVertex3f(0.7f, -3.85f, -3.15f);
                glVertex3f(-1.3f, -3.85f, -3.15f);
                glVertex3f(-1.3f, -3.85f, -5.15f);
                glVertex3f(0.7f, -3.85f, -5.15f);

                initMaterials(11);
                glVertex3f(2.85f, -3.85f, -3.15f);
                glVertex3f(0.85f, -3.85f, -3.15f);
                glVertex3f(0.85f, -3.85f, -5.15f);
                glVertex3f(2.85f, -3.85f, -5.15f);

                initMaterials(9);
                glVertex3f(-1.45f, -3.85f, -3.15f);
                glVertex3f(-3.45f, -3.85f, -3.15f);
                glVertex3f(-3.45f, -3.85f, -5.15f);
                glVertex3f(-1.45f, -3.85f, -5.15f);
                ///FACE 3
                initMaterials(0);
                glNormal3f(0.0f, 1.0f, 0.0f);
                glVertex3f(0.75f, 3.0f, -0.75f);
                glVertex3f(-1.15f, 3.0f, -0.75f);
                glVertex3f(-1.15f, 3.0f, 1.15f);
                glVertex3f(0.75f, 3.0f, 1.15f);

                initMaterials(5);
                glVertex3f(2.875f, 3.0f, -0.75f);
                glVertex3f(0.875f, 3.0f, -0.75f);
                glVertex3f(0.875f, 3.0f, 1.15f);
                glVertex3f(2.875f, 3.0f, 1.15f);

                initMaterials(10);
                glVertex3f(-1.3f, 3.0f, -0.75f);
                glVertex3f(-3.3f, 3.0f, -0.75f);
                glVertex3f(-3.3f, 3.0f, 1.15f);
                glVertex3f(-1.3f, 3.0f, 1.15f);
                ///////////////////////////////////////
                initMaterials(9);
                glVertex3f(0.75f, 3.0f, -2.875f);
                glVertex3f(-1.15f, 3.0f, -2.875f);
                glVertex3f(-1.15f, 3.0f, -0.875f);
                glVertex3f(0.75f, 3.0f, -0.875f);

                initMaterials(3);
                glVertex3f(2.875f, 3.0f, -2.875f);
                glVertex3f(0.875f, 3.0f, -2.875f);
                glVertex3f(0.875f, 3.0f, -0.875f);
                glVertex3f(2.875f, 3.0f, -0.875f);

                initMaterials(11);
                glVertex3f(-1.3f, 3.0f, -2.875f);
                glVertex3f(-3.3f, 3.0f, -2.875f);
                glVertex3f(-3.3f, 3.0f, -0.875f);
                glVertex3f(-1.3f, 3.0f, -0.875f);
                //////////////////
                initMaterials(10);
                glVertex3f(0.75f, 3.0f, -5.0f);
                glVertex3f(-1.15f, 3.0f, -5.0f);
                glVertex3f(-1.15f, 3.0f, -3.0f);
                glVertex3f(0.75f, 3.0f, -3.0f);

                initMaterials(9);
                glVertex3f(2.875f, 3.0f, -5.0f);
                glVertex3f(0.875f, 3.0f, -5.0f);
                glVertex3f(0.875f, 3.0f, -3.0f);
                glVertex3f(2.875f, 3.0f, -3.0f);

                initMaterials(0);
                glVertex3f(-1.3f, 3.0f, -5.0f);
                glVertex3f(-3.3f, 3.0f, -5.0f);
                glVertex3f(-3.3f, 3.0f, -3.0f);
                glVertex3f(-1.3f, 3.0f, -3.0f);
                ///FACE 4
                initMaterials(11);
                glNormal3f(0.0f, 0.0f, -1.0f);
                glVertex3f(0.7f, -3.6f, -5.30f);
                glVertex3f(-1.3f, -3.6f, -5.30f);
                glVertex3f(-1.3f, -1.6f, -5.30f);
                glVertex3f(0.7f, -1.6f, -5.30f);

                initMaterials(3);
                glVertex3f(-1.45f, -3.6f, -5.30f);
                glVertex3f(-3.45f, -3.6f, -5.30f);
                glVertex3f(-3.45f, -1.6f, -5.30f);
                glVertex3f(-1.45f, -1.6f, -5.30f);

                initMaterials(9);
                glVertex3f(2.85f, -3.6f, -5.30f);
                glVertex3f(0.85f, -3.6f, -5.30f);
                glVertex3f(0.85f, -1.6f, -5.30f);
                glVertex3f(2.85f, -1.6f, -5.30f);
                /////////////////////////////////////
                initMaterials(10);
                glVertex3f(0.7f, -1.45f, -5.30f);
                glVertex3f(-1.3f, -1.45f, -5.30f);
                glVertex3f(-1.3f, 0.55f, -5.30f);
                glVertex3f(0.7f, 0.55f, -5.30f);

                initMaterials(5);
                glVertex3f(-1.45f, -1.45f, -5.30f);
                glVertex3f(-3.45f, -1.45f, -5.30f);
                glVertex3f(-3.45f, 0.55f, -5.30f);
                glVertex3f(-1.45f, 0.55f, -5.30f);

                initMaterials(0);
                glVertex3f(2.85f, -1.45f, -5.30f);
                glVertex3f(0.85f, -1.45f, -5.30f);
                glVertex3f(0.85f, 0.55f, -5.30f);
                glVertex3f(2.85f, 0.55f, -5.30f);
                /////////////////
                initMaterials(3);
                glVertex3f(0.7f, 0.7f, -5.30f);
                glVertex3f(-1.3f, 0.7f, -5.30f);
                glVertex3f(-1.3f, 2.7f, -5.30f);
                glVertex3f(0.7f, 2.7f, -5.30f);

                initMaterials(11);
                glVertex3f(-1.45f, 0.7f, -5.30f);
                glVertex3f(-3.45f, 0.7f, -5.30f);
                glVertex3f(-3.45f, 2.7f, -5.30f);
                glVertex3f(-1.45f, 2.7f, -5.30f);

                initMaterials(5);
                glVertex3f(2.85f, 0.7f, -5.30f);
                glVertex3f(0.85f, 0.7f, -5.30f);
                glVertex3f(0.8f, 2.7f, -5.30f);
                glVertex3f(2.85f, 2.7f, -5.30f);

                ///FACE 5
                initMaterials(0);
                glNormal3f(-1.0f, 0.0f, 0.0f);
                glVertex3f(-3.65f, 0.7f, 1.3f);
                glVertex3f(-3.65f, 0.7f, -0.7f);
                glVertex3f(-3.65f, -1.3f, -0.7f);
                glVertex3f(-3.65f, -1.3f, 1.3f);

                initMaterials(5);
                glVertex3f(-3.65f, 2.85f, 1.3f);
                glVertex3f(-3.65f, 2.85f, -0.7f);
                glVertex3f(-3.65f, 0.85f, -0.7f);
                glVertex3f(-3.65f, 0.85f, 1.3f);

                initMaterials(9);
                glVertex3f(-3.65f, -1.45f, 1.3f);
                glVertex3f(-3.65f, -1.45f, -0.7f);
                glVertex3f(-3.65f, -3.45f, -0.7f);
                glVertex3f(-3.65f, -3.45f, 1.3f);
                ///////////////////
                initMaterials(3);
                glVertex3f(-3.65f, 0.7f, -0.85f);
                glVertex3f(-3.65f, 0.7f, -2.85f);
                glVertex3f(-3.65f, -1.3f, -2.85f);
                glVertex3f(-3.65f, -1.3f, -0.85f);

                initMaterials(11);
                glVertex3f(-3.65f, 2.85f, -0.85f);
                glVertex3f(-3.65f, 2.85f, -2.85f);
                glVertex3f(-3.65f, 0.85f, -2.85f);
                glVertex3f(-3.65f, 0.85f, -0.85f);

                initMaterials(10);
                glVertex3f(-3.65f, -1.45f, -0.85f);
                glVertex3f(-3.65f, -1.45f, -2.85f);
                glVertex3f(-3.65f, -3.45f, -2.85f);
                glVertex3f(-3.65f, -3.45f, -0.85f);
                ///////////////////
                initMaterials(5);
                glVertex3f(-3.65f, 0.7f, -3.0f);
                glVertex3f(-3.65f, 0.7f, -5.0f);
                glVertex3f(-3.65f, -1.3f, -5.0f);
                glVertex3f(-3.65f, -1.3f, -3.0f);

                initMaterials(9);
                glVertex3f(-3.65f, 2.85f, -3.0f);
                glVertex3f(-3.65f, 2.85f, -5.0f);
                glVertex3f(-3.65f, 0.85f, -5.0f);
                glVertex3f(-3.65f, 0.85f, -3.0f);

                initMaterials(0);
                glVertex3f(-3.65f, -1.45f, -3.0f);
                glVertex3f(-3.65f, -1.45f, -5.0f);
                glVertex3f(-3.65f, -3.45f, -5.0f);
                glVertex3f(-3.65f, -3.45f, -3.0f);

                ///FACE 6
                initMaterials(3);
                glNormal3f(1.0f, 0.0f, 0.0f);
                glVertex3f(3.1f, 0.55f, -0.8f);
                glVertex3f(3.1f, 0.55f, 1.2f);
                glVertex3f(3.1f, -1.45f, 1.2f);
                glVertex3f(3.1f, -1.45f, -0.8f);

                initMaterials(0);
                glVertex3f(3.1f, -1.6f, -0.8f);
                glVertex3f(3.1f, -1.6f, 1.2f);
                glVertex3f(3.1f, -3.6f, 1.2f);
                glVertex3f(3.1f, -3.6f, -0.8f);

                initMaterials(11);
                glVertex3f(3.1f, 2.7f, -0.8f);
                glVertex3f(3.1f, 2.7f, 1.2f);
                glVertex3f(3.1f, 0.7f, 1.2f);
                glVertex3f(3.1f, 0.7f, -0.8);
                /////////////
                initMaterials(5);
                glVertex3f(3.1f, 0.55f, -2.95f);
                glVertex3f(3.1f, 0.55f, -0.95f);
                glVertex3f(3.1f, -1.45f, -0.95f);
                glVertex3f(3.1f, -1.45f, -2.95f);

                initMaterials(9);
                glVertex3f(3.1f, -1.6f, -2.95f);
                glVertex3f(3.1f, -1.6f, -0.95f);
                glVertex3f(3.1f, -3.6f, -0.95f);
                glVertex3f(3.1f, -3.6f, -2.95f);

                initMaterials(10);
                glVertex3f(3.1f, 2.7f, -2.95f);
                glVertex3f(3.1f, 2.7f, -0.95f);
                glVertex3f(3.1f, 0.7f, -0.95f);
                glVertex3f(3.1f, 0.7f, -2.95f);
                /////////////
                initMaterials(11);
                glVertex3f(3.1f, 0.55f, -5.1f);
                glVertex3f(3.1f, 0.55f, -3.1f);
                glVertex3f(3.1f, -1.45f, -3.1f);
                glVertex3f(3.1f, -1.45f, -5.1f);

                initMaterials(10);
                glVertex3f(3.1f, -1.6f, -5.1f);
                glVertex3f(3.1f, -1.6f, -3.1f);
                glVertex3f(3.1f, -3.6f, -3.1f);
                glVertex3f(3.1f, -3.6f, -5.1f);

                initMaterials(3);
                glVertex3f(3.1f, 2.7f, -5.1f);
                glVertex3f(3.1f, 2.7f, -3.1f);
                glVertex3f(3.1f, 0.7f, -3.1f);
                glVertex3f(3.1f, 0.7f, -5.1f);

            glEnd();
            initMaterials(12);
		glPopMatrix();

        glDisable(GL_TEXTURE_2D);
		glEnable(GL_COLOR_MATERIAL);

	}
	else if (opcaoFaces == 3) { //================================= Texturas

		glPushMatrix();
            glTranslatef(xx, yy, zz);
            glRotatef(0.2*angR, 0, 1, 0);
            glRotatef(45, 1, 0, 1);
            glScalef(0.05, 0.05, 0.05);

            initTexturas(0);
            glBegin(GL_QUADS);
                ///FACE 1
                glNormal3f(0.0f, 0.0f, 1.0f);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, 0.7f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, 0.7f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, -1.3f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, -1.3f, 1.45f);
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.45f, 0.7f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.45f, 0.7f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.45f, -1.3f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.45f, -1.3f, 1.45f);
            glEnd();
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, 0.7f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, 0.7f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, -1.3f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, -1.3f, 1.45f);
            glEnd();
            /////////////////////////
            initTexturas(3);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, 2.85f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, 2.85f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, 0.85f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, 0.85f, 1.45f);
            glEnd();
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.45f, 2.85f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.45f, 2.85f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.45f, 0.85f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.45f, 0.85f, 1.45f);
            glEnd();
            initTexturas(4);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, 2.85f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, 2.85f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, 0.85f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, 0.85f, 1.45f);
            glEnd();
            //////////////////////////////
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, -1.45f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, -1.45f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, -3.45f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, -3.45f, 1.45f);

            glEnd();
            initTexturas(3);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.45f, -1.45f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.45f, -1.45f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.45f, -3.45f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.45f, -3.45f, 1.45f);
            glEnd();
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, -1.45f, 1.45f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, -1.45f, 1.45f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, -3.45f, 1.45f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, -3.45f, 1.45f);
            glEnd();
            //////////////////////////////
            ///FACE 2
            initTexturas(0);
            glNormal3f(0.0f, -1.0f, 0.0f);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, -3.85f, 1.15f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, -3.85f, 1.15f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, -3.85f, -0.85f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, -3.85f, -0.85f);
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, -3.85f, 1.15f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, -3.85f, 1.15f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, -3.85f, -0.85f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, -3.85f, -0.85f);
            glEnd();
            initTexturas(4);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.45f, -3.85f, 1.15f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.45f, -3.85f, 1.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.45f, -3.85f, -0.85f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.45f, -3.85f, -0.85f);
            glEnd();
            //////////////////////////////
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, -3.85f, -1.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, -3.85f, -1.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, -3.85f, -3.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, -3.85f, -3.0f);
            glEnd();
            initTexturas(4);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, -3.85f, -1.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, -3.85f, -1.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, -3.85f, -3.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, -3.85f, -3.0f);
            glEnd();
            initTexturas(3);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.45f, -3.85f, -1.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.45f, -3.85f, -1.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.45f, -3.85f, -3.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.45f, -3.85f, -3.0f);
            glEnd();
            ///////////////////////
            initTexturas(0);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, -3.85f, -3.15f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, -3.85f, -3.15f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, -3.85f, -5.15f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, -3.85f, -5.15f);
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, -3.85f, -3.15f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, -3.85f, -3.15f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, -3.85f, -5.15f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, -3.85f, -5.15f);
            glEnd();
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.45f, -3.85f, -3.15f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.45f, -3.85f, -3.15f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.45f, -3.85f, -5.15f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.45f, -3.85f, -5.15f);
            glEnd();
            ///FACE 3
            initTexturas(4);
            glNormal3f(0.0f, 1.0f, 0.0f);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.75f, 3.0f, -0.75f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.15f, 3.0f, -0.75f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.15f, 3.0f, 1.15f);
                glTexCoord2f(0.0, 1.0);  glVertex3f(0.75f, 3.0f, 1.15f);
            glEnd();
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.875f, 3.0f, -0.75f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.875f, 3.0f, -0.75f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.875f, 3.0f, 1.15f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.875f, 3.0f, 1.15f);
            glEnd();
            initTexturas(0);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.3f, 3.0f, -0.75f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.3f, 3.0f, -0.75f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.3f, 3.0f, 1.15f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.3f, 3.0f, 1.15f);
            glEnd();
            ///////////////////////////////////////
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.75f, 3.0f, -2.875f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.15f, 3.0f, -2.875f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.15f, 3.0f, -0.875f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.75f, 3.0f, -0.875f);
            glEnd();
            initTexturas(3);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.875f, 3.0f, -2.875f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.875f, 3.0f, -2.875f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.875f, 3.0f, -0.875f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.875f, 3.0f, -0.875f);
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.3f, 3.0f, -2.875f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.3f, 3.0f, -2.875f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.3f, 3.0f, -0.875f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.3f, 3.0f, -0.875f);
            glEnd();
            //////////////////
            initTexturas(0);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.75f, 3.0f, -5.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.15f, 3.0f, -5.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.15f, 3.0f, -3.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.75f, 3.0f, -3.0f);
            glEnd();
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.875f, 3.0f, -5.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.875f, 3.0f, -5.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.875f, 3.0f, -3.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.875f, 3.0f, -3.0f);
            glEnd();
            initTexturas(4);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.3f, 3.0f, -5.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.3f, 3.0f, -5.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.3f, 3.0f, -3.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.3f, 3.0f, -3.0f);
            glEnd();
            ///FACE 4
            initTexturas(2);
            glNormal3f(0.0f, 0.0f, -1.0f);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, -3.6f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, -3.6f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, -1.6f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, -1.6f, -5.30f);
            glEnd();
            initTexturas(3);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.45f, -3.6f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.45f, -3.6f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.45f, -1.6f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.45f, -1.6f, -5.30f);
            glEnd();
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, -3.6f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, -3.6f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, -1.6f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, -1.6f, -5.30f);
            glEnd();
            /////////////////////////////////////
            initTexturas(0);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, -1.45f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, -1.45f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, 0.55f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, 0.55f, -5.30f);
            glEnd();
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.45f, -1.45f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.45f, -1.45f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.45f, 0.55f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.45f, 0.55f, -5.30f);
            glEnd();
            initTexturas(4);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, -1.45f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, -1.45f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.85f, 0.55f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, 0.55f, -5.30f);
            glEnd();
            /////////////////
            initTexturas(3);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(0.7f, 0.7f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-1.3f, 0.7f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-1.3f, 2.7f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(0.7f, 2.7f, -5.30f);
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-1.45f, 0.7f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.45f, 0.7f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.45f, 2.7f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-1.45f, 2.7f, -5.30f);
            glEnd();
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(2.85f, 0.7f, -5.30f);
                glTexCoord2f(1.0, 0.0); glVertex3f(0.85f, 0.7f, -5.30f);
                glTexCoord2f(1.0, 1.0); glVertex3f(0.8f, 2.7f, -5.30f);
                glTexCoord2f(0.0, 1.0); glVertex3f(2.85f, 2.7f, -5.30f);
            glEnd();
            ///FACE 5
            initTexturas(4);
            glNormal3f(-1.0f, 0.0f, 0.0f);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, 0.7f, 1.3f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, 0.7f, -0.7f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, -1.3f, -0.7f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, -1.3f, 1.3f);
            glEnd();
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, 2.85f, 1.3f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, 2.85f, -0.7f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, 0.85f, -0.7f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, 0.85f, 1.3f);
            glEnd();
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, -1.45f, 1.3f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, -1.45f, -0.7f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, -3.45f, -0.7f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, -3.45f, 1.3f);
            glEnd();
            ///////////////////
            initTexturas(3);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, 0.7f, -0.85f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, 0.7f, -2.85f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, -1.3f, -2.85f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, -1.3f, -0.85f);
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, 2.85f, -0.85f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, 2.85f, -2.85f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, 0.85f, -2.85f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, 0.85f, -0.85f);
            glEnd();
            initTexturas(0);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, -1.45f, -0.85f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, -1.45f, -2.85f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, -3.45f, -2.85f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, -3.45f, -0.85f);
            glEnd();
            ///////////////////
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, 0.7f, -3.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, 0.7f, -5.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, -1.3f, -5.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, -1.3f, -3.0f);
            glEnd();
            initTexturas(5);
            glBegin(GL_QUADS);
            glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, 2.85f, -3.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, 2.85f, -5.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, 0.85f, -5.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, 0.85f, -3.0f);
            glEnd();
            initTexturas(4);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(-3.65f, -1.45f, -3.0f);
                glTexCoord2f(1.0, 0.0); glVertex3f(-3.65f, -1.45f, -5.0f);
                glTexCoord2f(1.0, 1.0); glVertex3f(-3.65f, -3.45f, -5.0f);
                glTexCoord2f(0.0, 1.0); glVertex3f(-3.65f, -3.45f, -3.0f);
            glEnd();
            initTexturas(3);
            glBegin(GL_QUADS);
            ///FACE 6
            glNormal3f(1.0f, 0.0f, 0.0f);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, 0.55f, -0.8f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, 0.55f, 1.2f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, -1.45f, 1.2f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, -1.45f, -0.8f);
            glEnd();
            initTexturas(4);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, -1.6f, -0.8f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, -1.6f, 1.2f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, -3.6f, 1.2f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, -3.6f, -0.8f);
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
            glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, 2.7f, -0.8f);
            glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, 2.7f, 1.2f);
            glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, 0.7f, 1.2f);
            glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, 0.7f, -0.8);
            glEnd();
            /////////////
            initTexturas(1);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, 0.55f, -2.95f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, 0.55f, -0.95f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, -1.45f, -0.95f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, -1.45f, -2.95f);
            glEnd();
            initTexturas(5);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, -1.6f, -2.95f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, -1.6f, -0.95f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, -3.6f, -0.95f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, -3.6f, -2.95f);
            glEnd();
            initTexturas(0);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, 2.7f, -2.95f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, 2.7f, -0.95f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, 0.7f, -0.95f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, 0.7f, -2.95f);
            /////////////
            glEnd();
            initTexturas(2);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, 0.55f, -5.1f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, 0.55f, -3.1f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, -1.45f, -3.1f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, -1.45f, -5.1f);
            glEnd();
            initTexturas(0);
            glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, -1.6f, -5.1f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, -1.6f, -3.1f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, -3.6f, -3.1f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, -3.6f, -5.1f);
            glEnd();
            initTexturas(3);
                glBegin(GL_QUADS);
                glTexCoord2f(0.0, 0.0); glVertex3f(3.1f, 2.7f, -5.1f);
                glTexCoord2f(1.0, 0.0); glVertex3f(3.1f, 2.7f, -3.1f);
                glTexCoord2f(1.0, 1.0); glVertex3f(3.1f, 0.7f, -3.1f);
                glTexCoord2f(0.0, 1.0); glVertex3f(3.1f, 0.7f, -5.1f);
            glEnd();
		glPopMatrix();
		glDisable(GL_TEXTURE_2D);
		glEnable(GL_COLOR_MATERIAL);

	}
}
 void drawCubo2() {

	glPushMatrix();

        glTranslatef(3.985, yy - 0.03, 4.015);
        glScalef(0.055, 0.055, 0.055);

        glBegin(GL_QUADS);
            initCores(9);
            //frente
            glNormal3f(0.0f,0.0f, 1.0f);
            glVertex3f(-3.0f, -3.0f, 1.0f);
            glVertex3f(-3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, 1.0f);
            //baixo
            ///FACE 2
            glNormal3f(0.0f, -1.0f, 0.0f);
            glVertex3f(-3.0f, -3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, -5.0f);
            glVertex3f(-3.0f, -3.0f, -5.0f);
            //cima
            ///FACE 3
            glNormal3f(0.0f, 1.0f, 0.0f);
            glVertex3f(-3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, 3.0f, 1.0f);
            glVertex3f(3.0f, 3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, -5.0f);
            //tras
            ///FACE 4
            glNormal3f(0.0f, 0.0f, -1.0f);
            glVertex3f(-3.0f, -3.0f, -5.0f);
            glVertex3f(3.0f, -3.0f, -5.0f);
            glVertex3f(3.0f, 3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, -5.0f);
            //esquerda
            ///FACE 5
            glNormal3f(-1.0f, 0.0f, 0.0f);
            glVertex3f(-3.0f, -3.0f, 1.0f);
            glVertex3f(-3.0f, -3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, -5.0f);
            glVertex3f(-3.0f, 3.0f, 1.0f);
            //direita
            ///FACE 6
            glNormal3f(1.0f, 0.0f, 0.0f);
            glVertex3f(3.0f, -3.0f, 1.0f);
            glVertex3f(3.0f, -3.0f, -5.0f);
            glVertex3f(3.0f, 3.0f, -5.0f);
            glVertex3f(3.0f, 3.0f, 1.0f);

        glEnd();
	glPopMatrix();

	glPushMatrix();
            glTranslatef(4.0, yy, 4.0);
            glScalef(0.05, 0.05, 0.05);

            initMaterials(12);
            glBegin(GL_QUADS);
                ///FACE 1
                initMaterials(24);
                glNormal3f(0.0f, 0.0f, 1.0f);
                glVertex3f(0.7f, 0.7f, 1.45f);
                glVertex3f(-1.3f, 0.7f, 1.45f);
                glVertex3f(-1.3f, -1.3f, 1.45f);
                glVertex3f(0.7f, -1.3f, 1.45f);

                glVertex3f(-3.45f, 0.7f, 1.45f);
                glVertex3f(-1.45f, 0.7f, 1.45f);
                glVertex3f(-1.45f, -1.3f, 1.45f);
                glVertex3f(-3.45f, -1.3f, 1.45f);

                glVertex3f(2.85f, 0.7f, 1.45f);
                glVertex3f(0.85f, 0.7f, 1.45f);
                glVertex3f(0.85f, -1.3f, 1.45f);
                glVertex3f(2.85f, -1.3f, 1.45f);
                /////////////////////////

                glVertex3f(0.7f, 2.85f, 1.45f);
                glVertex3f(-1.3f, 2.85f, 1.45f);
                glVertex3f(-1.3f, 0.85f, 1.45f);
                glVertex3f(0.7f, 0.85f, 1.45f);

                glVertex3f(-3.45f, 2.85f, 1.45f);
                glVertex3f(-1.45f, 2.85f, 1.45f);
                glVertex3f(-1.45f, 0.85f, 1.45f);
                glVertex3f(-3.45f, 0.85f, 1.45f);

                glVertex3f(2.85f, 2.85f, 1.45f);
                glVertex3f(0.85f, 2.85f, 1.45f);
                glVertex3f(0.85f, 0.85f, 1.45f);
                glVertex3f(2.85f, 0.85f, 1.45f);
                //////////////////////////////

                glVertex3f(0.7f, -1.45f, 1.45f);
                glVertex3f(-1.3f, -1.45f, 1.45f);
                glVertex3f(-1.3f, -3.45f, 1.45f);
                glVertex3f(0.7f, -3.45f, 1.45f);

                glVertex3f(-3.45f, -1.45f, 1.45f);
                glVertex3f(-1.45f, -1.45f, 1.45f);
                glVertex3f(-1.45f, -3.45f, 1.45f);
                glVertex3f(-3.45f, -3.45f, 1.45f);

                glVertex3f(2.85f, -1.45f, 1.45f);
                glVertex3f(0.85f, -1.45f, 1.45f);
                glVertex3f(0.85f, -3.45f, 1.45f);
                glVertex3f(2.85f, -3.45f, 1.45f);

                ///FACE 2
                initMaterials(2);
                glNormal3f(0.0f, -1.0f, 0.0f);
                glVertex3f(0.7f, -3.85f, 1.15f);
                glVertex3f(-1.3f, -3.85f, 1.15f);
                glVertex3f(-1.3f, -3.85f, -0.85f);
                glVertex3f(0.7f, -3.85f, -0.85f);

                glVertex3f(2.85f, -3.85f, 1.15f);
                glVertex3f(0.85f, -3.85f, 1.15f);
                glVertex3f(0.85f, -3.85f, -0.85f);
                glVertex3f(2.85f, -3.85f, -0.85f);

                glVertex3f(-1.45f, -3.85f, 1.15f);
                glVertex3f(-3.45f, -3.85f, 1.0f);
                glVertex3f(-3.45f, -3.85f, -0.85f);
                glVertex3f(-1.45f, -3.85f, -0.85f);
                //////////////////////////////

                glVertex3f(0.7f, -3.85f, -1.0f);
                glVertex3f(-1.3f, -3.85f, -1.0f);
                glVertex3f(-1.3f, -3.85f, -3.0f);
                glVertex3f(0.7f, -3.85f, -3.0f);

                glVertex3f(2.85f, -3.85f, -1.0f);
                glVertex3f(0.85f, -3.85f, -1.0f);
                glVertex3f(0.85f, -3.85f, -3.0f);
                glVertex3f(2.85f, -3.85f, -3.0f);

                glVertex3f(-1.45f, -3.85f, -1.0f);
                glVertex3f(-3.45f, -3.85f, -1.0f);
                glVertex3f(-3.45f, -3.85f, -3.0f);
                glVertex3f(-1.45f, -3.85f, -3.0f);
                ///////////////////////

                glVertex3f(0.7f, -3.85f, -3.15f);
                glVertex3f(-1.3f, -3.85f, -3.15f);
                glVertex3f(-1.3f, -3.85f, -5.15f);
                glVertex3f(0.7f, -3.85f, -5.15f);

                glVertex3f(2.85f, -3.85f, -3.15f);
                glVertex3f(0.85f, -3.85f, -3.15f);
                glVertex3f(0.85f, -3.85f, -5.15f);
                glVertex3f(2.85f, -3.85f, -5.15f);

                glVertex3f(-1.45f, -3.85f, -3.15f);
                glVertex3f(-3.45f, -3.85f, -3.15f);
                glVertex3f(-3.45f, -3.85f, -5.15f);
                glVertex3f(-1.45f, -3.85f, -5.15f);

                ///FACE 3
                initMaterials(4);
                glNormal3f(0.0f, 1.0f, 0.0f);
                glVertex3f(0.75f, 3.0f, -0.75f);
                glVertex3f(-1.15f, 3.0f, -0.75f);
                glVertex3f(-1.15f, 3.0f, 1.15f);
                glVertex3f(0.75f, 3.0f, 1.15f);

                glVertex3f(2.875f, 3.0f, -0.75f);
                glVertex3f(0.875f, 3.0f, -0.75f);
                glVertex3f(0.875f, 3.0f, 1.15f);
                glVertex3f(2.875f, 3.0f, 1.15f);

                glVertex3f(-1.3f, 3.0f, -0.75f);
                glVertex3f(-3.3f, 3.0f, -0.75f);
                glVertex3f(-3.3f, 3.0f, 1.15f);
                glVertex3f(-1.3f, 3.0f, 1.15f);
                ///////////////////////////////////////

                glVertex3f(0.75f, 3.0f, -2.875f);
                glVertex3f(-1.15f, 3.0f, -2.875f);
                glVertex3f(-1.15f, 3.0f, -0.875f);
                glVertex3f(0.75f, 3.0f, -0.875f);

                glVertex3f(2.875f, 3.0f, -2.875f);
                glVertex3f(0.875f, 3.0f, -2.875f);
                glVertex3f(0.875f, 3.0f, -0.875f);
                glVertex3f(2.875f, 3.0f, -0.875f);

                glVertex3f(-1.3f, 3.0f, -2.875f);
                glVertex3f(-3.3f, 3.0f, -2.875f);
                glVertex3f(-3.3f, 3.0f, -0.875f);
                glVertex3f(-1.3f, 3.0f, -0.875f);
                //////////////////

                glVertex3f(0.75f, 3.0f, -5.0f);
                glVertex3f(-1.15f, 3.0f, -5.0f);
                glVertex3f(-1.15f, 3.0f, -3.0f);
                glVertex3f(0.75f, 3.0f, -3.0f);

                glVertex3f(2.875f, 3.0f, -5.0f);
                glVertex3f(0.875f, 3.0f, -5.0f);
                glVertex3f(0.875f, 3.0f, -3.0f);
                glVertex3f(2.875f, 3.0f, -3.0f);

                glVertex3f(-1.3f, 3.0f, -5.0f);
                glVertex3f(-3.3f, 3.0f, -5.0f);
                glVertex3f(-3.3f, 3.0f, -3.0f);
                glVertex3f(-1.3f, 3.0f, -3.0f);

                ///FACE 4
                initMaterials(17);
                glNormal3f(0.0f, 0.0f, -1.0f);
                glVertex3f(0.7f, -3.6f, -5.30f);
                glVertex3f(-1.3f, -3.6f, -5.30f);
                glVertex3f(-1.3f, -1.6f, -5.30f);
                glVertex3f(0.7f, -1.6f, -5.30f);

                glVertex3f(-1.45f, -3.6f, -5.30f);
                glVertex3f(-3.45f, -3.6f, -5.30f);
                glVertex3f(-3.45f, -1.6f, -5.30f);
                glVertex3f(-1.45f, -1.6f, -5.30f);

                glVertex3f(2.85f, -3.6f, -5.30f);
                glVertex3f(0.85f, -3.6f, -5.30f);
                glVertex3f(0.85f, -1.6f, -5.30f);
                glVertex3f(2.85f, -1.6f, -5.30f);
                /////////////////////////////////////

                glVertex3f(0.7f, -1.45f, -5.30f);
                glVertex3f(-1.3f, -1.45f, -5.30f);
                glVertex3f(-1.3f, 0.55f, -5.30f);
                glVertex3f(0.7f, 0.55f, -5.30f);

                glVertex3f(-1.45f, -1.45f, -5.30f);
                glVertex3f(-3.45f, -1.45f, -5.30f);
                glVertex3f(-3.45f, 0.55f, -5.30f);
                glVertex3f(-1.45f, 0.55f, -5.30f);

                glVertex3f(2.85f, -1.45f, -5.30f);
                glVertex3f(0.85f, -1.45f, -5.30f);
                glVertex3f(0.85f, 0.55f, -5.30f);
                glVertex3f(2.85f, 0.55f, -5.30f);
                /////////////////

                glVertex3f(0.7f, 0.7f, -5.30f);
                glVertex3f(-1.3f, 0.7f, -5.30f);
                glVertex3f(-1.3f, 2.7f, -5.30f);
                glVertex3f(0.7f, 2.7f, -5.30f);

                glVertex3f(-1.45f, 0.7f, -5.30f);
                glVertex3f(-3.45f, 0.7f, -5.30f);
                glVertex3f(-3.45f, 2.7f, -5.30f);
                glVertex3f(-1.45f, 2.7f, -5.30f);

                glVertex3f(2.85f, 0.7f, -5.30f);
                glVertex3f(0.85f, 0.7f, -5.30f);
                glVertex3f(0.8f, 2.7f, -5.30f);
                glVertex3f(2.85f, 2.7f, -5.30f);

                ///FACE 5
                initMaterials(1);
                glNormal3f(-1.0f, 0.0f, 0.0f);
                glVertex3f(-3.65f, 0.7f, 1.3f);
                glVertex3f(-3.65f, 0.7f, -0.7f);
                glVertex3f(-3.65f, -1.3f, -0.7f);
                glVertex3f(-3.65f, -1.3f, 1.3f);

                glVertex3f(-3.65f, 2.85f, 1.3f);
                glVertex3f(-3.65f, 2.85f, -0.7f);
                glVertex3f(-3.65f, 0.85f, -0.7f);
                glVertex3f(-3.65f, 0.85f, 1.3f);

                glVertex3f(-3.65f, -1.45f, 1.3f);
                glVertex3f(-3.65f, -1.45f, -0.7f);
                glVertex3f(-3.65f, -3.45f, -0.7f);
                glVertex3f(-3.65f, -3.45f, 1.3f);
                ///////////////////

                glVertex3f(-3.65f, 0.7f, -0.85f);
                glVertex3f(-3.65f, 0.7f, -2.85f);
                glVertex3f(-3.65f, -1.3f, -2.85f);
                glVertex3f(-3.65f, -1.3f, -0.85f);

                glVertex3f(-3.65f, 2.85f, -0.85f);
                glVertex3f(-3.65f, 2.85f, -2.85f);
                glVertex3f(-3.65f, 0.85f, -2.85f);
                glVertex3f(-3.65f, 0.85f, -0.85f);

                glVertex3f(-3.65f, -1.45f, -0.85f);
                glVertex3f(-3.65f, -1.45f, -2.85f);
                glVertex3f(-3.65f, -3.45f, -2.85f);
                glVertex3f(-3.65f, -3.45f, -0.85f);
                ///////////////////

                glVertex3f(-3.65f, 0.7f, -3.0f);
                glVertex3f(-3.65f, 0.7f, -5.0f);
                glVertex3f(-3.65f, -1.3f, -5.0f);
                glVertex3f(-3.65f, -1.3f, -3.0f);

                glVertex3f(-3.65f, 2.85f, -3.0f);
                glVertex3f(-3.65f, 2.85f, -5.0f);
                glVertex3f(-3.65f, 0.85f, -5.0f);
                glVertex3f(-3.65f, 0.85f, -3.0f);

                glVertex3f(-3.65f, -1.45f, -3.0f);
                glVertex3f(-3.65f, -1.45f, -5.0f);
                glVertex3f(-3.65f, -3.45f, -5.0f);
                glVertex3f(-3.65f, -3.45f, -3.0f);

                ///FACE 6
                initMaterials(16);
                glNormal3f(1.0f, 0.0f, 0.0f);
                glVertex3f(3.1f, 0.55f, -0.8f);
                glVertex3f(3.1f, 0.55f, 1.2f);
                glVertex3f(3.1f, -1.45f, 1.2f);
                glVertex3f(3.1f, -1.45f, -0.8f);

                glVertex3f(3.1f, -1.6f, -0.8f);
                glVertex3f(3.1f, -1.6f, 1.2f);
                glVertex3f(3.1f, -3.6f, 1.2f);
                glVertex3f(3.1f, -3.6f, -0.8f);

                glVertex3f(3.1f, 2.7f, -0.8f);
                glVertex3f(3.1f, 2.7f, 1.2f);
                glVertex3f(3.1f, 0.7f, 1.2f);
                glVertex3f(3.1f, 0.7f, -0.8);
                /////////////

                glVertex3f(3.1f, 0.55f, -2.95f);
                glVertex3f(3.1f, 0.55f, -0.95f);
                glVertex3f(3.1f, -1.45f, -0.95f);
                glVertex3f(3.1f, -1.45f, -2.95f);

                glVertex3f(3.1f, -1.6f, -2.95f);
                glVertex3f(3.1f, -1.6f, -0.95f);
                glVertex3f(3.1f, -3.6f, -0.95f);
                glVertex3f(3.1f, -3.6f, -2.95f);

                glVertex3f(3.1f, 2.7f, -2.95f);
                glVertex3f(3.1f, 2.7f, -0.95f);
                glVertex3f(3.1f, 0.7f, -0.95f);
                glVertex3f(3.1f, 0.7f, -2.95f);
                /////////////

                glVertex3f(3.1f, 0.55f, -5.1f);
                glVertex3f(3.1f, 0.55f, -3.1f);
                glVertex3f(3.1f, -1.45f, -3.1f);
                glVertex3f(3.1f, -1.45f, -5.1f);

                glVertex3f(3.1f, -1.6f, -5.1f);
                glVertex3f(3.1f, -1.6f, -3.1f);
                glVertex3f(3.1f, -3.6f, -3.1f);
                glVertex3f(3.1f, -3.6f, -5.1f);

                glVertex3f(3.1f, 2.7f, -5.1f);
                glVertex3f(3.1f, 2.7f, -3.1f);
                glVertex3f(3.1f, 0.7f, -3.1f);
                glVertex3f(3.1f, 0.7f, -5.1f);

            glEnd();
        initMaterials(12);
		glPopMatrix();

        glDisable(GL_TEXTURE_2D);
		glEnable(GL_COLOR_MATERIAL);

}

void drawTree(int sombra) {

	//TRONCO
	glPushMatrix();
        glTranslatef(12, 1, 7);
        glScalef(0.2, 0.2, 0.2);

        if(sombra)
            glColor4f(0.0,0.0,0.0,1.0);
        else{
            if (opcaoFaces == 2)
                initMaterials(25);
            else
               initTexturas(13);
        }
        glBegin(GL_QUADS);
            glNormal3f(0.0f,0.0f, 1.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, 5.0f, 1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, 5.0f, 1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, -5.0f, 1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, -5.0f, 1.0f);

            glNormal3f(0.0f, 0.0f, -1.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, -5.0f, -1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, -5.0f, -1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, 5.0f, -1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, 5.0f, -1.0f);

            glNormal3f(-1.0f, 0.0f, 0.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(-1.0f, 5.0f, 1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, 5.0f, -1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, -5.0f, -1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(-1.0f, -5.0f, 1.0f);

            glNormal3f(1.0f, 0.0f, 0.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, 5.0f, -1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(1.0f, 5.0f, 1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(1.0f, -5.0f, 1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, -5.0f, -1.0f);
        glEnd();
	glPopMatrix();

	// COPA
	glPushMatrix();
        glTranslatef(12,2, 7);
        glScalef(0.5, 0.5, 0.5);

        if(sombra)
            glColor4f(0.0,0.0,0.0,1.0);
        else{
            if (opcaoFaces == 2)
                initMaterials(14);
            else
               initTexturas(14);
        }
        glBegin(GL_QUADS);
            glNormal3f(0.0f,0.0f, 1.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, 1.0f, 1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, 1.0f, 1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, -1.0f, 1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, -1.0f, 1.0f);

            glNormal3f(0.0f, -1.0f, 0.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, -1.0f, 1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, -1.0f, 1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, -1.0f, -1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, -1.0f, -1.0f);

            glNormal3f(0.0f, 1.0f, 0.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, 1.0f, -1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, 1.0f, -1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, 1.0f, 1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, 1.0f, 1.0f);

            glNormal3f(0.0f, 0.0f, -1.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, -1.0f, -1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, -1.0f, -1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, 1.0f, -1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, 1.0f, -1.0f);

            glNormal3f(-1.0f, 0.0f, 0.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(-1.0f, 1.0f, 1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(-1.0f, 1.0f, -1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(-1.0f, -1.0f, -1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(-1.0f, -1.0f, 1.0f);

            glNormal3f(1.0f, 0.0f, 0.0f);
            glTexCoord2f(0.0, 0.0); glVertex3f(1.0f, 1.0f, -1.0f);
            glTexCoord2f(1.0, 0.0); glVertex3f(1.0f, 1.0f, 1.0f);
            glTexCoord2f(1.0, 1.0); glVertex3f(1.0f, -1.0f, 1.0f);
            glTexCoord2f(0.0, 1.0); glVertex3f(1.0f, -1.0f, -1.0f);
        glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
	glEnable(GL_COLOR_MATERIAL);

}

