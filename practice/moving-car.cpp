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

float _translate = 0.0f;
float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 0.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units
	glPopMatrix();


    glPushMatrix();
	glTranslatef(_translate, 0.0, 0.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
	glColor3ub(255,255,255);
	glTranslatef(-0.5, 0.0, 0.0);
	glTranslatef(_translate, 0.0, 0.0);

	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
	glVertex3f( 0.25,  0.75, 0.0);
	glVertex3f( 0.25, -0.05, 0.0);
	glVertex3f(-0.25, -0.05, 0.0);
	glVertex3f(-0.25,  0.5, 0.0);
	glEnd();
    glPopMatrix();

    glPushMatrix();
	glColor3ub(255,255,255);
	glTranslatef(2.5, 0.0, 0.0);
	glTranslatef(_translate, 0.0, 0.0);

	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
	glVertex3f( 0.25,  0.5, 0.0);
	glVertex3f( 0.25, -0.05, 0.0);
	glVertex3f(-0.25, -0.05, 0.0);
	glVertex3f(-0.25,  0.75, 0.0);
	glEnd();
    glPopMatrix();

    glPushMatrix();
	glColor3ub(255,255,255);
	glTranslatef(1.0, 0.0, 0.0);
	glTranslatef(_translate, 0.0, 0.0);

	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
	glVertex3f( 0.75,  0.5, 0.0);
	glVertex3f( 0.75, -0.05, 0.0);
	glVertex3f(-0.75, -0.05, 0.0);
	glVertex3f(-0.75,  0.5, 0.0);
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.0, 0.0, 0.0);
	glTranslatef(_translate, 0.0, 0.0);
	glRotatef(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


	glutSwapBuffers();
}

void screen(){
  _translate += 0.2f;
  if(_translate > 4){
    _translate = -6.0f;
  }
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
    screen();
	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(200, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 500);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Car Movement");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutTimerFunc(50, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}