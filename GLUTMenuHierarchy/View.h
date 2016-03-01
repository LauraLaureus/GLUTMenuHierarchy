//
//  View.h
//  GLUTStroke
//
//  Created by Laura del Pino Díaz on 1/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#ifndef View_h
#define View_h

#include <stdio.h>
#include <GLUT/glut.h>

#endif /* View_h */

#define EXIT -1
#define WATCH_NADA 0
#define WATCH_SPHERE 1
#define WATCH_TORUS 2
#define WATCH_CONE 3
#define WATCH_CYLINDER 4
#define WATCH_T4 5
#define WATCH_T6 6
#define WATCH_T8 7
#define WATCH_T12 8
#define WATCH_T20 9
#define WATCH_TEAPOT 10

extern int visualiza,w_width,w_height,win1;
extern float gl_width,gl_height,gl_near,gl_far;

extern void menu_manager(int value);
extern void Display();
extern void Init();
extern void ReshapeSize();