#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

//--------------------- coordenadas cubo
GLfloat xx = 7.5;
GLfloat zz = 7.5;
GLfloat yy = 0.3;

GLfloat xx1 = 7.5;
GLfloat zz1 = 7.5;
GLfloat yy1 = 0.3;

//--------------------- rotacao do cubo
GLint parar = 0;
GLfloat  angR = -90;
GLfloat  incR = 0.1;

void drawCubo();
void drawCubo2();
void drawTree(int sombra);

#include "Cubo.cpp"

#endif // CUBO_H_INCLUDED
