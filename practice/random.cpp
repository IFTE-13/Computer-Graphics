#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units
	glPopMatrix();

	glPushMatrix();
	glScalef(1.5,1.5,0);
	glTranslatef(0.0, 0.5, 0.5);
	glRotatef(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);
	glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	//glutSolidSphere(.90,50,50);
	glEnd();

    glPushMatrix();
	glTranslatef(0.6, 0.0, 0.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(0.5, 0.1, 0.0);
        glVertex3f(0.5, -0.1, 0.0);
        glVertex3f(-0.5, -0.1, 0.0);
        glVertex3f(-0.5, 0.1, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScalef(1.0,1.0,0);
	glTranslatef(-0.6, 0.0, 0.0);
    glRotatef(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_QUADS);
        glVertex3f(0.5, 0.1, 0.0);
        glVertex3f(0.5, -0.1, 0.0);
        glVertex3f(-0.5, -0.1, 0.0);
        glVertex3f(-0.5, 0.1, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScalef(1.0,1.0,0);
	glTranslatef(0.0, 0.6, 0.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_QUADS);
        glVertex3f(0.1, 0.5, 0.0);
        glVertex3f(0.1, -0.5, 0.0);
        glVertex3f(-0.1, -0.5, 0.0);
        glVertex3f(-0.1, 0.5, 0.0);
        glEnd();
	glPopMatrix();

	glPushMatrix();
	glScalef(1.0,1.0,0);
	glTranslatef(0.0, -0.6, 0.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_QUADS);
        glVertex3f(0.1, 0.5, 0.0);
        glVertex3f(0.1, -0.5, 0.0);
        glVertex3f(-0.1, -0.5, 0.0);
        glVertex3f(-0.1, 0.5, 0.0);
	glEnd();
	glPopMatrix();

	glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	_ang_tri += 2.0f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Designed Fan");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}