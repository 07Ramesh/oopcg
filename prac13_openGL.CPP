#include<GL\glut.h>
//g++ 3dcube.cpp -lGL -lGLU -lglut
void myprg()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
       glColor3f(1,0,0);
	   glVertex2f(0,0);
	   glVertex2f(0.5,0.7);
	glEnd();

	/*glBegin(GL_POLYGON);
	   glColor3f(1,0,0);
	   glVertex2f(-0.5,0);
	   glColor3f(0,1,0);
	   glVertex2f(0.3,0);
	   glColor3f(0,0,1);
	   glVertex2f(0.2,0.5);
	   glColor3f(1,1,1);
	   glVertex2f(-0.3,0.4);
	glEnd();*/

	  glColor3f(1,1,1);
	glutWireTeapot(0.3);



	glFlush();
}




int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(600,600);
  glutInitWindowPosition(300,300);
  glutCreateWindow("SE COMP");
  glutDisplayFunc(myprg);
  glutMainLoop();
  return 0;

}
