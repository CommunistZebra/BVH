//
// Created by Guillermo Vázquez on 02/12/19.
//

#ifndef RAYTRACESKIKIS1_TREES_H
#define RAYTRACESKIKIS1_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "types.h"

typedef struct Box{
    Vector max;
    Vector min;
    int nTri;
//8 vertices  por caja, con coordenadas de Vector x,y,z

} Box;




//Definimos los arboles
//ARBOL DE TRIANGULO CUBO

struct node
{
    Box box;
    struct node *left;
    struct node *right;
};

struct node* newNode(Box box)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->box = box;

    node->left = NULL;
    node->right = NULL;
    return(node);
}


/*void asignavalores(Box Box, float x1,float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float x5, float y6, float z6, float x7, float y7, float z7, float x8, float y8, float z8) {
    Box.v1.x =x1;
    Box.v1.y =y1;
    Box.v1.z =z1;
    Box.v2.x =x2;
    Box.v2.y =y2;
    Box.v2.z =z2;
    Box.v3.x =x3;
    Box.v3.y =y3;
    Box.v3.z =z3;
    Box.v4.x =x4;
    Box.v4.y =y4;
    Box.v4.z =z4;
    Box.v5.x =x5;
    Box.v5.y =y5;
    Box.v5.z =z5;
    Box.v6.x =x6;
    Box.v6.y =y6;
    Box.v6.z =z6;
    Box.v7.y =y7;
    Box.v7.z =z7;
    Box.v8.x =x8;
    Box.v8.y =y8;
    Box.v8.z =z8;


}*/

/* ESTO LO DEFINEN EN OTRO .h
typedef struct Vector
{
    float x;
    float y;
    float z;
}
        Vector;
*/
#endif //RAYTRACESKIKIS1_TREES_H
