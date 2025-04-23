#include<Gl/gl.h>

#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display (void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 0.5, 0.2);

     glBegin(GL_TRIANGLES);
        glVertex3f(1.0f,1.0f,0);
        glVertex3f(1.0f,1.5f,0);
        glVertex3f(0.0f,1.5f,0);
      glEnd();

      glBegin(GL_TRIANGLES);
        glVertex3f(1.0f,1.0f,0);
        glVertex3f(0.6f,0.0f,0);
        glVertex3f(1.5f,0.5f,0);
      glEnd();

       glBegin(GL_TRIANGLES);
        glVertex3f(2.0f,1.0f,0);
        glVertex3f(1.5f,0.5f,0);
        glVertex3f(2.4f,0.0f,0);
      glEnd();

      glBegin(GL_TRIANGLES);
        glVertex3f(2.0f,1.5f,0);
        glVertex3f(2.0f,1.0f,0);
        glVertex3f(3.0f,1.5f,0);
      glEnd();

       glBegin(GL_TRIANGLES);
        glVertex3f(1.0f,1.5f,0);
        glVertex3f(1.5f,2.5f,0);
        glVertex3f(2.0f,1.5f,0);
      glEnd();

      glBegin(GL_POLYGON);
        glVertex3f(1.0f,1.5f,0);
        glVertex3f(1.0f,1.0f,0);
        glVertex3f(1.5f,0.5f,0);
        glVertex3f(2.0f,1.0f,0);
        glVertex3f(2.0f,1.5f,0);
      glEnd();

    glFlush();
}

void init (void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 3.0, 0.0, 3.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("");
    glutDisplayFunc(display);
    init ();
    glutMainLoop();
}
