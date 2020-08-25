#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/GL.H>
#include <GL/GLU.H>
#include <GL/GLAUX.H>

short i = 0;
double X, Y;

void CALLBACK resize(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10, 2, 50);
	gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}



void CALLBACK display(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3d(1, 1, 1);

	glPushMatrix();
	glTranslated(0, -5, 0);
	auxSolidSphere(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 0);
	auxSolidSphere(3);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 3.7, 0);
	auxSolidSphere(2);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(0, 5.2, 0);
	glRotated(-90, 1, 0, 0);
	auxSolidCone(1, 2);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(1, 4.7, 1.6);
	auxSolidSphere(0.3);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(-1, 4.7, 1.6);
	auxSolidSphere(0.3);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 1, 1);
	glRotated(45, 0, 0, 1);
	glTranslated(1.5, 1.5, 0);
	auxSolidCylinder(0.7, 10);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glRotated(45, 0, 0, 1);
	glTranslated(1.5, -4, 0);
	auxSolidCylinder(0.8, 2);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 1, 1);
	glTranslated(3.9, -1.75, 1);
	auxSolidSphere(0.5);
	glPopMatrix();

	glPushMatrix();

	glColor3d(0, 0, 0);
	glRotated(45, 0, 0, 1);
	glTranslated(1.5, -4, 1.55);
	glBegin(GL_LINE_STRIP);

	glVertex3d(-0.3, 0.3, 0);
	glVertex3d(0, 0.3, 0);
	glVertex3d(0, -0.3, 0);
	glVertex3d(0.3, -0.3, 0);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex3d(0.3, 0.3, 0);
	glVertex3d(0.3, 0, 0);
	glVertex3d(-0.3, 0, 0);
	glVertex3d(-0.3, -0.3, 0);

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 1, 1);
	glRotated(-135, 1, 0, 0);
	glRotated(-30, 0, 0, 1);
	glTranslated(-2.5, 1.5, 0);
	auxSolidCylinder(0.7, 10);
	glPopMatrix();

	glRotated(0.5, 0, 1, 0);

	auxSwapBuffers();

}



void main()
{
	float pos[4] = { 3,3,3,1 };
	float dir[3] = { -1,-1,-1 };

	auxInitPosition(50, 10, 800, 800);
	auxInitDisplayMode(AUX_RGB | AUX_DEPTH | AUX_DOUBLE);
	auxInitWindow("Primitives");
	auxIdleFunc(display);
	auxReshapeFunc(resize);


	glEnable(GL_ALPHA_TEST);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glLightfv(GL_LIGHT0, GL_POSITION, pos);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, dir);
	auxMainLoop(display);
}