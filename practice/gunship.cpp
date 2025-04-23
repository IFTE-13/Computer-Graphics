#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.0, 0.0, 0.0);//(R,G,B)

    //1St
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(10,10,0);
        glVertex3i(20,10,0);
        glVertex3i(20,50,0);
        glVertex3i(10,50,0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(10,50,0);
        glVertex3i(20,50,0);
        glVertex3i(20,60,0);
        glVertex3i(10,60,0);
    glEnd();

    //2nd
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(20,20,0);
        glVertex3i(30,20,0);
        glVertex3i(30,40,0);
        glVertex3i(20,40,0);
    glEnd();

    //3rd
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(30,30,0);
        glVertex3i(40,30,0);
        glVertex3i(40,50,0);
        glVertex3i(30,50,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3i(30,50,0);
        glVertex3i(40,50,0);
        glVertex3i(40,60,0);
        glVertex3i(30,60,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(30,60,0);
        glVertex3i(40,60,0);
        glVertex3i(40,80,0);
        glVertex3i(30,80,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(30,80,0);
        glVertex3i(40,80,0);
        glVertex3i(40,90,0);
        glVertex3i(30,90,0);
    glEnd();

    //4th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(40,20,0);
        glVertex3i(50,20,0);
        glVertex3i(50,30,0);
        glVertex3i(40,30,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(40,30,0);
        glVertex3i(50,30,0);
        glVertex3i(50,60,0);
        glVertex3i(40,60,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3i(40,60,0);
        glVertex3i(50,60,0);
        glVertex3i(50,70,0);
        glVertex3i(40,70,0);
    glEnd();

    //5th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(50,20,0);
        glVertex3i(60,20,0);
        glVertex3i(60,30,0);
        glVertex3i(50,30,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(50,30,0);
        glVertex3i(60,30,0);
        glVertex3i(60,40,0);
        glVertex3i(50,40,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(50,40,0);
        glVertex3i(60,40,0);
        glVertex3i(60,60,0);
        glVertex3i(50,60,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(50,60,0);
        glVertex3i(60,60,0);
        glVertex3i(60,90,0);
        glVertex3i(50,90,0);
    glEnd();

    //6th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(60,10,0);
        glVertex3i(70,10,0);
        glVertex3i(70,50,0);
        glVertex3i(60,50,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(60,50,0);
        glVertex3i(70,50,0);
        glVertex3i(70,70,0);
        glVertex3i(60,70,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(60,70,0);
        glVertex3i(70,70,0);
        glVertex3i(70,120,0);
        glVertex3i(60,120,0);
    glEnd();

    //7th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(70,20,0);
        glVertex3i(90,20,0);
        glVertex3i(90,30,0);
        glVertex3i(70,30,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(70,30,0);
        glVertex3i(80,30,0);
        glVertex3i(80,90,0);
        glVertex3i(70,90,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(70,40,0);
        glVertex3i(80,40,0);
        glVertex3i(80,60,0);
        glVertex3i(70,60,0);
    glEnd();

    //8th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(80,30,0);
        glVertex3i(90,30,0);
        glVertex3i(90,60,0);
        glVertex3i(80,60,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3i(80,60,0);
        glVertex3i(90,60,0);
        glVertex3i(90,70,0);
        glVertex3i(80,70,0);
    glEnd();

    //9th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(90,30,0);
        glVertex3i(100,30,0);
        glVertex3i(100,50,0);
        glVertex3i(90,50,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3i(90,50,0);
        glVertex3i(100,50,0);
        glVertex3i(100,60,0);
        glVertex3i(90,60,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(90,60,0);
        glVertex3i(100,60,0);
        glVertex3i(100,80,0);
        glVertex3i(90,80,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(90,80,0);
        glVertex3i(100,80,0);
        glVertex3i(100,90,0);
        glVertex3i(90,90,0);
    glEnd();

    //10th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(100,20,0);
        glVertex3i(110,20,0);
        glVertex3i(110,40,0);
        glVertex3i(100,40,0);
    glEnd();

    //11th
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(110,10,0);
        glVertex3i(120,10,0);
        glVertex3i(120,50,0);
        glVertex3i(110,50,0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(110,50,0);
        glVertex3i(120,50,0);
        glVertex3i(120,60,0);
        glVertex3i(110,60,0);
    glEnd();

    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0,0,0,0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 300, 0, 300);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(50, 100);
    glutCreateWindow("Hello");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

