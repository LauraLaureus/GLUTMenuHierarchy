//
//  main.c
//  GLUTStroke
//
//  Created by Laura del Pino Díaz on 1/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//
#include "View.h"

int win1;
int menu1,menu2,menu3;

int visualiza = WATCH_NADA,w_width = 500,w_height = 500;
float gl_width = 2.0,gl_height = 2.0,gl_near = -1.0,gl_far =5.0;

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    
    win1 = glutCreateWindow("OpenGL Practica 3_2 1 Laura del Pino Díaz");
    Init();
    glutDisplayFunc(Display); // define la funcion de rendering
    glutReshapeFunc(ReshapeSize);
    
    menu1 =glutCreateMenu(menu_manager);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutAddMenuEntry("Sphere", WATCH_SPHERE);
    glutAddMenuEntry("Torus", WATCH_TORUS);
    glutAddMenuEntry("Cone", WATCH_CONE);
    glutAddMenuEntry("Exit", EXIT);
    
    menu2 =glutCreateMenu(menu_manager);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutAddMenuEntry("Tetraedrus", WATCH_T4);
    glutAddMenuEntry("Hexaedrus", WATCH_T6);
    glutAddMenuEntry("Octoedrus", WATCH_T8);
    glutAddMenuEntry("Dodecaedrus", WATCH_T12);
    glutAddMenuEntry("Icosaedrus", WATCH_T20);
    glutAddMenuEntry("Exit", EXIT);
    
    menu3 =glutCreateMenu(menu_manager);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutAddSubMenu("Cuadratic figures", menu1);
    glutAddSubMenu("Platonic figures",menu2);
    glutAddMenuEntry("Teapot", WATCH_TEAPOT);
    glutAddMenuEntry("Exit", EXIT);
 
    glutMainLoop();
    
    return 0;
}

