//
//  View.c
//  GLUTStroke
//
//  Created by Laura del Pino Díaz on 1/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "View.h"



void Init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
}


void menu_manager(int value){
    if (value == -1) {
        glutDestroyWindow(win1);
        exit(0);
    }
    visualiza = value;
    glutPostRedisplay();
}


void ReshapeSize(int ancho, int alto){
    
    float dx = gl_width;
    float dy = gl_height;
    
    dx *= (float)ancho / (float)w_width;
    dy *= (float)alto / (float)w_height;
    
    glViewport(0, 0, ancho, alto); // utiliza la totalidad de la ventana
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-dx / 2.0, dx / 2.0, -dy / 2.0, dy / 2.0, gl_near, gl_far); // espacio de trabajo
    glutPostRedisplay();
}


void Display(){

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    
    switch (visualiza) {
        case WATCH_SPHERE:
            glutWireSphere(0.5, 20, 20);
            break;
        case WATCH_TORUS:
            glutWireTorus(0.2, 0.6, 20, 20);
            break;
        case WATCH_CONE:
            glutWireCone(0.4, 1.0, 20, 20);
            break;
        case WATCH_T4:
            glutWireTetrahedron();
            break;
        case WATCH_T6:
            glutWireCube(0.5);
            break;
        case WATCH_T8:
            glutWireOctahedron();
            break;
        case WATCH_T12:
            glutWireDodecahedron();
            break;
        case WATCH_T20:
            glutWireIcosahedron();
            break;
        case WATCH_TEAPOT:
            glutWireTeapot(0.5);
        default: // TEAPOT
            break;
    }
    
    glutSwapBuffers();
}