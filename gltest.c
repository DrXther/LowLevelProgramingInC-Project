#include <stdio.h>
#include <GL/glut.h>
#include <GL/glew.h>

static void RenderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);

    int width = 1280, height = 720;
    glutInitWindowSize(width, height);

    int x = 0, y = 0;
    glutInitWindowPosition(x, y);

    int win_id = glutCreateWindow("Test");
    
    printf("window id: %d\n", win_id);

    GLclampf Red = 0.4f, Green = 0.15f, Blue = 0.6f, Alpha = 0.5f;
    glClearColor(Red, Green, Blue, Alpha);

    glutDisplayFunc(RenderSceneCB);

    glutMainLoop();

    return 0;
}
