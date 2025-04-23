#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_LINE_LOOP);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(75, 285, 0);
        glVertex3i(60, 250, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(60, 250, 0);
        glVertex3i(25, 250, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(25, 250, 0);
        glVertex3i(50, 225, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(50, 225, 0);
        glVertex3i(35, 190, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(35, 190, 0);
        glVertex3i(75, 215, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(75, 215, 0);
        glVertex3i(115, 190, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(115, 190, 0);
        glVertex3i(100, 225, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(100, 225, 0);
        glVertex3i(125, 250, 0);

        glColor3f(0.0, 0.0, 0.0);
        glVertex3i(125, 250, 0);
        glVertex3i(90, 250, 0);

    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3i(225, 285, 0);
        glVertex3i(210, 250, 0);
        glVertex3i(240, 250, 0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3i(200, 250, 0);
        glVertex3i(165, 250, 0);
        glVertex3i(200, 225, 0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3i(200, 225, 0);
        glVertex3i(190, 190, 0);
        glVertex3i(225, 215, 0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3i(225, 215, 0);
        glVertex3i(260, 190, 0);
        glVertex3i(250, 225, 0);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3i(250, 225, 0);
        glVertex3i(285, 250, 0);
        glVertex3i(250, 250, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3i(200, 250, 0);
        glVertex3i(200, 225, 0);
        glVertex3i(225, 215, 0);
        glVertex3i(250, 225, 0);
        glVertex3i(250, 250, 0);
    glEnd();

    glFlush();
}

void init(void)
{
    glClearColor(1,1,1,0);
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
    glutCreateWindow("STAR_20-41980-1");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

