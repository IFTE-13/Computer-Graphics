// Event driven program
#include <math.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    // Flag of Bangladesh
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.3f, 0.0f);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(1.0f, -0.6f);
    glEnd();

    float x1, y1, x2, y2;
    float angle;
    double radius = 0.3;

    x1 = -0.2, y1 = 0.0;
    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2) {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    // Initialize openGL states
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Introduction");      // Create a window with the given title
    glutInitWindowSize(320, 320);          // Set the window's initial width & height

    // Register call back function
    glutDisplayFunc(display);              // Register display callback handler for window re-paint

    // Event-processing loop
    glutMainLoop();                        // Enter the event-processing loop
    return 0;
}
