#include "config.h"
#include <stdlib.h>
# if HAVE_WINDOWS_H && defined(_WIN32)
  #include <windows.h>
# endif

#ifdef HAVE_GL_GL_H
# include <GL/gl.h>
#elif defined(HAVE_OPENGL_GL_H)
# include <OpenGL/gl.h>
#else
# error no gl.h
#endif

# if defined(HAVE_GL_GLUT_H)
#  include <GL/glut.h>
# elif defined(HAVE_GLUT_GLUT_H)
#  include <GLUT/glut.h>
# else
#  error no glut.h
# endif

static void render(void);

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
  glutInitWindowSize(640, 640);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("Hello World!");
  glutDisplayFunc(&render);
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

  glutMainLoop();
  return 0;
}

void render(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glBegin(GL_TRIANGLES);
  glVertex3f( 0.0f, 0.0f, 0.0f);
  glVertex3f( 0.5f, 1.0f, 0.0f);
  glVertex3f( 1.0f, 0.0f, 0.0f);
  glEnd();
  glutSwapBuffers();
}
