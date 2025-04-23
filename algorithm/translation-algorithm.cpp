#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

int positonX = 100;
int positonY = 200;
int x, y;
int choice;

void scaling(){
    glBegin(GL_LINE_LOOP);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(positonX-x, positonY-y, 0);
        glVertex3i(positonX+100+x,positonY-y, 0);
        glVertex3i(positonX+50, positonY+100+y, 0);
    glEnd();
}

void translate(){
    glBegin(GL_LINE_LOOP);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(x, y, 0);
        glVertex3i(x+100, y, 0);
        glVertex3i(x+50, y+100, 0);
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(0, -600, 0);
        glVertex3i(0, 600, 0);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(800, 0, 0);
        glVertex3i(-800, 0, 0);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3i(positonX, positonY, 0);
        glVertex3i(positonX+100, positonY, 0);
        glVertex3i(positonX+50, positonY+100, 0);
    glEnd();


    if(choice == 1){
        scaling();
    } else {
        translate();
    }

    glFlush();
}


void init(void)
{
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-800, 800, -600, 600);
}

int main(int argc, char** argv)
{
    cout<<"Choose Operation"<<endl;
    cout<<"1.Scaling"<<endl;
    cout<<"2.Translation"<<endl;
    cin>>choice;
    cin>>x;
    cin>>y;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(50, 100);
    glutCreateWindow("Translation");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

