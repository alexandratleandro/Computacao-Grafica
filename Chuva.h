#ifndef CHUVA_H_INCLUDED
#define CHUVA_H_INCLUDED

#define MAX_PARTICULAS  1000
#define MAX_NEVE  100

//---------------------------------------- atributos particula
typedef struct {
	float	life;
	float	fade;
	GLfloat x, y, z;    // posicao
	GLfloat v; // velocidade
    GLfloat gravidade;

} Particula;

Particula  particula[MAX_PARTICULAS];

void iniParticulas(int i);
void iniParticulas();
void drawChuva();
void drawNeve();

#include "Chuva.cpp"

#endif // CHUVA_H_INCLUDED
