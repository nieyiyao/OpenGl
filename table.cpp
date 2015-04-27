#include "glut.h"

float fTranslate;
float fRotate;
float fScale;

void Draw_Polygon() // This function draws a triangle with RGB colors
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(5.0f*0.2, 0.0f*0.2, 4.0f*0.2);
		glVertex3f(5.0f*0.2,4.0f*0.2, 4.0f*0.2);
		glVertex3f( 0.0f*0.2,4.0f*0.2, 4.0f*0.2);
		glVertex3f(0.0f*0.2,0.0f*0.2,4.0f*0.2);
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(5.0f*0.2, 0.0f*0.2, 3.0f*0.2);
		glVertex3f(5.0f*0.2,4.0f*0.2, 3.0f*0.2);
		glVertex3f( 0.0f*0.2,4.0f*0.2, 3.0f*0.2);
		glVertex3f(0.0f*0.2,0.0f*0.2,3.0f*0.2);
	glEnd();
	glBegin(GL_LINES);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(5.0f*0.2, 0.0f*0.2, 3.0f*0.2);
		glVertex3f(5.0f*0.2, 0.0f*0.2, 4.0f*0.2);
		glVertex3f(5.0f*0.2, 4.0f*0.2, 3.0f*0.2);
		glVertex3f(5.0f*0.2, 4.0f*0.2, 4.0f*0.2);
		glVertex3f(0.0f*0.2, 0.0f*0.2, 3.0f*0.2);
		glVertex3f(0.0f*0.2, 0.0f*0.2, 4.0f*0.2);
		glVertex3f(0.0f*0.2, 4.0f*0.2, 3.0f*0.2);
		glVertex3f(0.0f*0.2, 4.0f*0.2, 4.0f*0.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2, 0.5f*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2, 0.0f*0.2);
		glVertex3f( 4.5f*0.2,1.5f*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2,0.0f*0.2);
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2, 0.5f*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2, 3.0f*0.2);
		glVertex3f( 4.5f*0.2,1.5f*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2,3.0f*0.2);
	glEnd();
	glBegin(GL_LINES);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2, 0.5f*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2, 0.5f*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2,1.5f*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2,1.5f*0.2, 3.0f*0.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2, 0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f( 4.5f*0.2,1.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2+2*0.2,0.0f*0.2);
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2, 0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f( 4.5f*0.2,1.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2+2*0.2,3.0f*0.2);
	glEnd();
	glBegin(GL_LINES);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2, 0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2, 0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2,0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2,1.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2,1.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2,1.5f*0.2+2*0.2, 3.0f*0.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f( 4.5f*0.2-0.6f,1.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2+2*0.2,0.0f*0.2);
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f( 4.5f*0.2-0.6f,1.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2+2*0.2,3.0f*0.2);
	glEnd();
	glBegin(GL_LINES);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2+2*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,1.5f*0.2+2*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,1.5f*0.2+2*0.2, 3.0f*0.2);
	glEnd();

		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2, 0.0f*0.2);
		glVertex3f( 4.5f*0.2-0.6f,1.5f*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2,0.0f*0.2);
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//函数改变多边形绘制的模式，绘制其轮廓
	glBegin(GL_POLYGON);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2, 3.0f*0.2);
		glVertex3f( 4.5f*0.2-0.6f,1.5f*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2,3.0f*0.2);
	glEnd();
	glBegin(GL_LINES);
		 glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f, 0.5f*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,0.5f*0.2, 3.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2, 0.0f*0.2);
		glVertex3f(3.5f*0.2-0.6f,1.5f*0.2, 3.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,1.5f*0.2, 0.0f*0.2);
		glVertex3f(4.5f*0.2-0.6f,1.5f*0.2, 3.0f*0.2);
	glEnd();
}

void reshape(int width, int height)	//定义函数来自适应视觉
{
	if (height==0)										// Prevent A Divide By Zero By
	{
		height=1;										// Making Height Equal One
	}

	glViewport(0,0,width,height);						// Reset The Current Viewport

	glMatrixMode(GL_PROJECTION);						// Select The Projection Matrix
	glLoadIdentity();									// Reset The Projection Matrix

	// Calculate The Aspect Ratio Of The Window
	gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);

	glMatrixMode(GL_MODELVIEW);							// Select The Modelview Matrix
	glLoadIdentity();									// Reset The Modelview Matrix
}

void idle()
{
	glutPostRedisplay();//标记当前窗口需要重新绘制。通过glutMainLoop下一次循环时，窗口显示将被回调以重新显示窗口的正常面板。
}

void redraw()
{
// If want display in wireframe mode
//	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

  glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();									// Reset The Current Modelview Matrix
	
	glPushMatrix();
		glTranslatef(-2.5f, 0.0f,-6.0f);		// Place the polygon Left
		glTranslatef(0.0f, fTranslate, 0.0f);	// Translate in Y direction
		Draw_Polygon();						// Draw polygon					
	glPopMatrix();

    glPushMatrix();
		glTranslatef(0.0f, 0.0f,-6.0f);			// Place the polygon at Center
		glRotatef(fRotate, 0, 1.0f, 0);			// Rotate around Y axis
		Draw_Polygon();						// Draw polygon
	glPopMatrix();

	glPushMatrix();
		glTranslatef(2.0f,0.0f,-6.0f);//place the polygon right
		glScalef(fScale,fScale,fScale);//每次缩写0.9
		Draw_Polygon();// Draw polygon
	glPopMatrix();

	fTranslate += 0.0005f;
	fRotate    += 0.05f;
	fScale *=0.99f;
	
	if(fTranslate > 0.5f) fTranslate = 0.0f;//还原为原来
	if(fScale < 0.3f) fScale=1.0f;//还原为原来
	glutSwapBuffers();//函数促发前后缓冲的切换,就是把后台绘制好的缓冲图像绘制到屏幕.
}

int main (int argc,  char *argv[])
{
	glutInit(&argc, argv);//初始化
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);//指定为RGBA模式，双缓存
	glutInitWindowSize(680,480); //窗口大小                              
	glutCreateWindow("Exercise2");//使用opengl创建一个窗口，窗口显示为Exercise2

	glutDisplayFunc(redraw);//内容改变时调用函数
	glutReshapeFunc(reshape);//窗口改变时调用函数		
	glutIdleFunc(idle);//在闲余的时候，调用注册函数，产生动画效果					

	glutMainLoop();//创建的所有窗口将被显示出来

	return 0;
}


