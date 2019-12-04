/*
Copyright (c) 2012, Shiben Bhattacharjee, Naveen Kumar

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom
the Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef _VECTORIZEDTYPES_H_
#define _VECTORIZEDTYPES_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPSILON 0.00001

/*
Vector vectorizedMult(float *vector, Vector v){
    Vector c;
    int i;
    setVector(&c, vector[0] * v.x + vector[1] * v.y + vector[2] * v.z + vector[3],
              vector[4] * v.x + vector[5] * v.y + vector[6] * v.z + vector[7],
              vector[8] * v.x + vector[9] * v.y + vector[10] * v.z + vector[11]);
    return c;
}
*/


void vectorizedrotateX(float a, float tempVect[16]){

    int Posicionvector;
    float cosa = cos(deg2rad(a)), sina = sin(deg2rad(a));
    float Vectorsaliente[16] = {1.0f, 0.0f, 0.0f, 0.0f,
                                0.0f, cosa,-sina, 0.0f,
                                0.0f, sina, cosa, 0.0f,
                                0.0f, 0.0f, 0.0f, 1.0f};

    printf("Esto demuestra que vectoricé\n");
    /*int i; int j;
    for(i=0;i<4;i++) {
        for (j = 0; j < 4; j++) {
            Posicionvector = (4 * i) + j; //4 es el numero de columnas
            tempVect[Posicionvector] = Vectorsaliente[Posicionvector];
        }
    }
    printf("Printing vector...\n");
    for (i = 0; i< 16; i++){
        // Print current element
        printf(" %f ", tempVect[i]);Vectorsaliente[i]);
        // Print a new line
        if((i+1) % 4 == 0)
            printf("\n");
    }*/
    //return(&m); //Retorna el vector, NOT SURE
}




void vectorizedrotateY(float a, float tempVect[16]){

    int Posicionvector;
    float cosa = cos(deg2rad(a)), sina = sin(deg2rad(a));
    float Vectorsaliente[16] = {cosa, 0.0f, sina, 0.0f,
                                0.0f, 1.0f, 0.0f, 0.0f,
                                -sina, 0.0f, cosa, 0.0f,
                                0.0f, 0.0f, 0.0f, 1.0f};

    printf("Esto demuestra que vectoricé\n");
    /*int i; int j;
    for(i=0;i<4;i++) {
        for (j = 0; j < 4; j++) {
            Posicionvector = (4 * i) + j; //4 es el numero de columnas
            tempVect[Posicionvector] = Vectorsaliente[Posicionvector];
        }
    }
    printf("Printing vector...\n");
    for (i = 0; i< 16; i++){
        // Print current element
        printf(" %f ", tempVect[i]);Vectorsaliente[i]);
        // Print a new line
        if((i+1) % 4 == 0)
            printf("\n");
    }*/
    //return(&m); //Retorna el vector, NOT SURE
}



void vectorizedrotateZ(float a, float tempVect[16]){

    int Posicionvector;
    float cosa = cos(deg2rad(a)), sina = sin(deg2rad(a));
    float Vectorsaliente[16] = {cosa,-sina, 0.0f, 0.0f,
                                sina, cosa, 0.0f, 0.0f,
                                0.0f, 0.0f, 1.0f, 0.0f,
                                0.0f, 0.0f, 0.0f, 1.0f};

    printf("Esto demuestra que vectoricé\n");
    /*int i; int j;
    for(i=0;i<4;i++) {
        for (j = 0; j < 4; j++) {
            Posicionvector = (4 * i) + j; //4 es el numero de columnas
            tempVect[Posicionvector] = Vectorsaliente[Posicionvector];
        }
    }
    printf("Printing vector...\n");
    for (i = 0; i< 16; i++){
        // Print current element
        printf(" %f ", tempVect[i]);Vectorsaliente[i]);
        // Print a new line
        if((i+1) % 4 == 0)
            printf("\n");
    }*/
    //return(&m); //Retorna el vector, NOT SURE
}

/*
Matrix rotate(float ax, float ay, float az)
{
     Simply doing rotX x rotY x rotZ */
    /*return matMatMult(matMatMult(rotateX(ax), rotateY(ay)), rotateZ(az));
}
*/




void vectorizedtranslate(float tx, float ty, float tz, float tempVect[16]){

    int Posicionvector;
    float Vectorsaliente[16] = {1, 0, 0, tx,
                                0, 1, 0, ty,
                                0, 0, 1, tz,
                                0, 0, 0, 1};

    printf("Esto demuestra que vectoricé\n");
    /*int i; int j;
    for(i=0;i<4;i++) {
        for (j = 0; j < 4; j++) {
            Posicionvector = (4 * i) + j; //4 es el numero de columnas
            tempVect[Posicionvector] = Vectorsaliente[Posicionvector];
        }
    }
    printf("Printing vector...\n");
    for (i = 0; i< 16; i++){
        Print current element
        printf(" %f ", tempVect[i]);Vectorsaliente[i]);
        Print a new line
        if((i+1) % 4 == 0)
            printf("\n");
    } */
    //return(&m); //Retorna el vector, NOT SURE
}

void vectorizedscale(float sx, float sy, float sz, float tempVect[16]){

    int Posicionvector;
    float Vectorsaliente[16] = {sx,   0.0f, 0.0f, 0.0f,
                                0.0f,   sy, 0.0f, 0.0f,
                                0.0f, 0.0f,   sz, 0.0f,
                                0.0f, 0.0f, 0.0f, 1.0f};

    printf("Esto demuestra que vectoricé\n");
    /*int i; int j;
    for(i=0;i<4;i++) {
        for (j = 0; j < 4; j++) {
            Posicionvector = (4 * i) + j; //4 es el numero de columnas
            tempVect[Posicionvector] = Vectorsaliente[Posicionvector];
        }
    }
    printf("Printing vector...\n");
    for (i = 0; i< 16; i++){
        // Print current element
        printf(" %f ", tempVect[i]);Vectorsaliente[i]);
        // Print a new line
        if((i+1) % 4 == 0)
            printf("\n");
    }*/
    //return(&m); //Retorna el vector, NOT SURE
}

void nvecnvecmult(float tmpVect[16], float tmpVec2[16],float resultado[16]){

    for(int i=0;i<16;i++){
        resultado[i]+=(tmpVect[i]*tmpVec2[i]);

    }
}


void multVector(float tmpVect[16], float tmpVect2[16], float resultado[16]){

    int Pos=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            Pos=(4*i)+j;
            resultado[Pos]=0;
            for(int k=0;k<4;k++){
                resultado[Pos] += tmpVect[(4*i)+k]*tmpVect2[(4*k)+j];
            }

        }
    }

}
#endif
