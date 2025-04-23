#include <GL/gl.h>
#include <GL/glut.h>

int x1 = 0, y1 = 0, r = 100;
void points(int x, int y){
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2i(x, y);
    glEnd();
}
void Algorithm(){
    int x = 0;
    int y = r;
    int h = 1 - r;
while ( y > x){
    if(h < 0){
        h = h + (2 * x) + 3;
        x++;
    }
    else{
        h = h + (2 *( x - y)) + 5;
        x++;
        y--;
    }
    points(x, y);
    points(x, -y);
    points(-x, y);
    points(-x, -y);
    points(y, x);
    points(-y, x);
    points(y, -x);
    points(-y, -x);
    }
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(0, -700, 0);
        glVertex3i(0, 700, 0);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3i(600, 0, 0);
        glVertex3i(-600, 0, 0);
    glEnd();
    Algorithm();
    glFlush();
}

void init(void)
{
    glClearColor(1,1,1,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-600, 600, -700, 700);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 700);
    glutInitWindowPosition(50, 100);
    glutCreateWindow("Mid Point Circle Algorithm");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    Algorithm();
    return 0;
}

