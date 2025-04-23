#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

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
float _angle_2 = 90;
float i = 0.0f;


void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -3.0); //Move forward 5 units

    glPushMatrix();
    glRotatef(_angle,0.0,1.0,0.0);
    glPushMatrix();
    glColor3f(1.0,1.0,0.0);
    glTranslatef(0,0.0,0.0);
    glutSolidCube(.5); //(GLdouble size)
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.0,0.0);
    glTranslatef(0.0,0.35,0.0);
    glutSolidCube(.2); //(GLdouble size)
    glPopMatrix();

//Lower Part
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(-0.05,-0.35,0.0);
    glutSolidCube(.3); //(GLdouble size)
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.05,-0.35,0.0);
    glutSolidCube(.3); //(GLdouble size)
    glPopMatrix();

//Legs - Left
    glPushMatrix();
    glColor3ub(255, 105, 180);
    glTranslatef(0.09,-0.55,0.0);
    glutSolidCube(.09); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glColor3ub(255, 105, 180);
    glTranslatef(0.09,-0.63,0.0);
    glutSolidCube(.09); //(GLdouble size)
    glPopMatrix();

//Legs - Right
    glPushMatrix();
    glColor3ub(255, 105, 180);
    glTranslatef(-0.09,-0.55,0.0);
    glutSolidCube(.09); //(GLdouble size)
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 105, 180);
    glTranslatef(-0.09,-0.63,0.0);
    glutSolidCube(.09); //(GLdouble size)
    glPopMatrix();


//Arms - Right
    glPushMatrix();
    glColor3ub(0, 255, 0);
    glTranslatef(0.35,0.1,0.0);
    glutSolidCube(.25); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0, 197, 205);
    glTranslatef(0.4,-0.1,0.0);
    glutSolidCube(.1); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0, 197, 205);
    glTranslatef(0.4,0.0,0.0);
    glutSolidCube(.1); //(GLdouble size)
    glPopMatrix();

//Arms - Right
    glPushMatrix();
    glColor3ub(0, 255, 0);
    glTranslatef(-0.35,0.1,0.0);
    glutSolidCube(.25); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0, 197, 205);
    glTranslatef(-0.4,-0.1,0.0);
    glutSolidCube(.1); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glColor3ub(0, 197, 205);
    glTranslatef(-0.4,0.0,0.0);
    glutSolidCube(.1); //(GLdouble size)
    glPopMatrix();
    glPopMatrix();
	glutSwapBuffers();
}
bool speed = true;
void update(int value = 0) {
    _angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
    if(speed){
        glutTimerFunc(25, update, 0);
    }
}

void Keyboard(unsigned char key, int x, int y){
    switch(key){
    case 'm':
        speed = true;
        update();
        glutPostRedisplay();
        break;
    case 's':
        speed = false;
        glutPostRedisplay();
        break;
    }

}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(900, 600);

	//Create the window
	glutCreateWindow("Robot");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(Keyboard);

	glutReshapeFunc(handleResize);

	glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}

