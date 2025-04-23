#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


        glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 0.0f);
            glVertex2f(-1.0f, 0.0f);
            glVertex2f(1.0f, 0.0f);

            glVertex2f(0.0f, 1.0f);
            glVertex2f(0.0f, -1.0f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-0.4f, 0.4f);
            glVertex2f(-0.8f, 0.4f);
            glVertex2f(-0.8f, 0.8f);
            glVertex2f(-0.4f, 0.8f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(1.0f, 1.0f, 0.0f);
            glVertex2f(0.4f, 0.8f);
            glVertex2f(0.6f, 0.8f);
            glVertex2f(0.7f, 0.6f);
            glVertex2f(0.6f, 0.4f);
            glVertex2f(0.4f, 0.4f);
            glVertex2f(0.3f, 0.6f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(0.0f, 1.0f, 0.0f);
            glVertex2f(-0.4f, -0.1f);
            glVertex2f(-0.1f, -0.1f);
            glVertex2f(-0.1f, -0.4f);
            glVertex2f(-0.4f, -0.4f);
        glEnd();

         glBegin(GL_POLYGON);
         glColor3f(0.4f, 0.3f, 0.0f);
            glVertex2f(-0.5f, -0.3f);
            glVertex2f(-0.3f, -0.3f);
            glVertex2f(-0.3f, -0.5f);
            glVertex2f(-0.5f, -0.5f);
        glEnd();

        glBegin(GL_TRIANGLES);
            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(0.4, -0.2);
            glVertex2f(0.6, -0.6);
            glVertex2f(0.2, -0.6);
        glEnd();

        glBegin(GL_TRIANGLES);
            glColor3f(0.5f, 0.4f, 0.5f);
            glVertex2f(0.4, -0.4);
            glVertex2f(0.8, -0.4);
            glVertex2f(0.6, -0.8);
        glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    //Initialize openGL states
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Introduction"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height

	//Register call back function
	glutDisplayFunc(display); // Register display callback handler for window re-paint

	//Event-processing loop
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}