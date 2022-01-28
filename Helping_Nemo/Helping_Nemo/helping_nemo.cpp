#include<GL/glut.h>
#include<string.h>
#include<math.h>

double a = 0, aa = -70;
double b, bb = 0;
double fishx = 300;
double fishy = 300;
float pi = 3.142;
float angle = 0, x = 100, y = 0;
double score = 0;
bool collide = false;

void init(void) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
}
void coral() {

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(10 + b, 150 + bb);
	glVertex2f(10 + b, 500 + bb);
	glVertex2f(15 + b, 500 + bb);
	glVertex2f(15 + b, 150 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(10 + b, 50 + bb);
	glVertex2f(10 + b, 0 + bb);
	glVertex2f(15 + b, 0 + bb);
	glVertex2f(15 + b, 50 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(75 + b, 350 + bb);
	glVertex2f(75 + b, 500 + bb);
	glVertex2f(80 + b, 500 + bb);
	glVertex2f(80 + b, 350 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(75 + b, 250 + bb);
	glVertex2f(75 + b, 0 + bb);
	glVertex2f(80 + b, 0 + bb);
	glVertex2f(80 + b, 250 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(140 + b, 250 + bb);
	glVertex2f(140 + b, 500 + bb);
	glVertex2f(145 + b, 500 + bb);
	glVertex2f(145 + b, 250 + bb);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(140 + b, 150 + bb);
	glVertex2f(140 + b, 0 + bb);
	glVertex2f(145 + b, 0 + bb);
	glVertex2f(145 + b, 150 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(205 + b, 400 + bb);
	glVertex2f(205 + b, 500 + bb);
	glVertex2f(210 + b, 500 + bb);
	glVertex2f(210 + b, 400 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(205 + b, 300 + bb);
	glVertex2f(205 + b, 0 + bb);
	glVertex2f(210 + b, 0 + bb);
	glVertex2f(210 + b, 300 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(270 + b, 300 + bb);
	glVertex2f(270 + b, 500 + bb);
	glVertex2f(275 + b, 500 + bb);
	glVertex2f(275 + b, 300 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(270 + b, 200 + bb);
	glVertex2f(270 + b, 0 + bb);
	glVertex2f(275 + b, 0 + bb);
	glVertex2f(275 + b, 200 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(335 + b, 250 + bb);
	glVertex2f(335 + b, 500 + bb);
	glVertex2f(340 + b, 500 + bb);
	glVertex2f(340 + b, 250 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(335 + b, 150 + bb);
	glVertex2f(335 + b, 0 + bb);
	glVertex2f(340 + b, 0 + bb);
	glVertex2f(340 + b, 150 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(400 + b, 400 + bb);
	glVertex2f(400 + b, 500 + bb);
	glVertex2f(405 + b, 500 + bb);
	glVertex2f(405 + b, 400 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(350 + b, 300 + bb);
	glVertex2f(350 + b, 0 + bb);
	glVertex2f(355 + b, 0 + bb);
	glVertex2f(355 + b, 300 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(405 + b, 350 + bb);
	glVertex2f(405 + b, 500 + bb);
	glVertex2f(410 + b, 500 + bb);
	glVertex2f(410 + b, 350 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(405 + b, 250 + bb);
	glVertex2f(405 + b, 0 + bb);
	glVertex2f(410 + b, 0 + bb);
	glVertex2f(410 + b, 250 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(465 + b, 300 + bb);
	glVertex2f(465 + b, 500 + bb);
	glVertex2f(470 + b, 500 + bb);
	glVertex2f(470 + b, 300 + bb);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(465 + b, 200 + bb);
	glVertex2f(465 + b, 0 + bb);
	glVertex2f(470 + b, 0 + bb);
	glVertex2f(470 + b, 200 + bb);
	glEnd();
}
void fish1()
{
	//the body
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(fishx - 32.5 + a, fishy + 12.5 + aa);
	glVertex2d(fishx - 25 + a, fishy + 6.25 + aa);
	glVertex2d(fishx - 7.5 + a, fishy + 12.5 + aa);
	glVertex2d(fishx - 25 + a, fishy + 17.75 + aa);
	glEnd();

	//the tail
	glBegin(GL_POLYGON);
	glVertex2d(fishx - 10 + a, fishy + 12.5 + aa);
	glColor3ub(rand() % 1, rand() % 1000, rand() % 1000);
	glVertex2d(fishx + 1.25 + a, fishy + 17.5 + aa);
	glVertex2d(fishx - 1.25 + a, fishy + 12.5 + aa);
	glVertex2d(fishx + 1.25 + a, fishy + 6.75 + aa);
	glEnd();

	//the upper fin
	glBegin(GL_TRIANGLES);
	glColor3ub(rand() % 1, rand() % 1000, rand() % 1000);
	glVertex2d(fishx - 24.5 + a, fishy + 18.25 + aa);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(fishx - 15 + a, fishy + 27.25 + aa);
	glVertex2d(fishx - 20 + a, fishy + 15 + aa);
	glEnd();

	//the lower fin
	glBegin(GL_TRIANGLES);
	glColor3ub(rand() % 1, rand() % 1000, 0);
	glVertex2d(fishx - 24.5 + a, fishy + 7 + aa);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(fishx - 15 + a, fishy + aa);
	glVertex2d(fishx - 20 + a, fishy + 10 + aa);
	glEnd();

	//the eye
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(2.0);
	glBegin(GL_POINTS);
	glVertex2d(fishx - 30 + a, fishy + 13.75 + aa);
	glEnd();
}

void pbSmall() {

	glBegin(GL_TRIANGLE_FAN);
	for (angle = 0; angle < 360.0; angle += .1) {
		glColor3ub(46, 47, 47);
		y = (sin(angle * pi / 180) * 30);
		x = (cos(angle * pi / 180) * 50);
		glVertex2f(x + 150, y - 5);
	}
	glEnd();
}

void pb() {

	pbSmall();
	glBegin(GL_TRIANGLE_FAN);
	for (angle = 0; angle < 360.0; angle += .1) {
		glColor3ub(142, 20, 30);
		y = (sin(angle * pi / 180) * 45);
		x = (cos(angle * pi / 180) * 75);
		glVertex2f(x + 250, y - 10);
	}
	glEnd();
}

void pb1() {

	glBegin(GL_TRIANGLE_FAN);
	for (angle = 0; angle < 360.0; angle += .1) {
		glColor3ub(20, 20, 20);
		y = (sin(angle * pi / 180) * 35);
		x = (cos(angle * pi / 180) * 65);
		glVertex2f(x + 370, y - 5);
	}
	glEnd();
}
void pb2() {

	glBegin(GL_TRIANGLE_FAN);
	for (angle = 0; angle < 360.0; angle += .1) {
		glColor3ub(36, 60, 2);
		y = (sin(angle * pi / 180) * 40);
		x = (cos(angle * pi / 180) * 75);
		glVertex2f(x + 610, y + 10);
	}
	glEnd();
}

void plant3L(int x1, int x2, int m) {
	int dis = x2 - x1;
	dis = dis / 3;
	glColor3ub(40, 170, 5);
	glBegin(GL_POLYGON);
	glVertex2f(x1, 0);
	glVertex2f(x1 - 10, m - 10);
	glColor3f(0.0, 0.5, 0.0);
	glVertex2f(x1 + dis, 15);
	glVertex2f(x1 + ((x2 - x1) / 2), m);
	glVertex2f(x2 - dis, 15);
	glVertex2f(x2 + 12, m + 10);
	glVertex2f(x2, 0);
	glEnd();
}

void plant2L(int x1, int x2, int h1, int h2) {

	glColor3ub(60, 170, 15);
	glBegin(GL_POLYGON);
	glVertex2f(x1, 0);
	glVertex2f(x1 - 20, h1);
	glColor3f(0.0, 0.3, 0.0);
	glVertex2f(x2, 0);
	glVertex2f(x1 + 15, h2);
	glEnd();
}
void plant()
{
	plant2L(50, 40, 40, 60);
	plant2L(95, 85, 50, 60);
	plant2L(120, 110, 45, 65);
	plant2L(70, 60, 60, 40);
	plant2L(140, 130, 43, 60);
	plant2L(950, 940, 40, 50);
	plant2L(870, 860, 50, 60);
	plant2L(470, 460, 40, 50);
	plant2L(490, 480, 55, 65);
	plant2L(520, 510, 40, 50);
	plant2L(540, 530, 50, 60);
	plant2L(700, 690, 40, 50);
	plant2L(730, 720, 55, 65);
	plant2L(795, 785, 40, 50);

	plant3L(10, 20, 60);
	plant3L(160, 170, 50);
	plant3L(310, 320, 70);
	plant3L(435, 445, 60);
	plant3L(750, 760, 55);
	plant3L(820, 830, 80);
	plant3L(900, 910, 55);
}

void welcomeDisplay(void) {
	glClearColor(0.0, 0.6, 0.9, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0, 0);

	glRasterPos3f(250, 450, 0);
	char msg1[] = "Helping Nemo";
	for (int i = 0; i < strlen(msg1); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

	glRasterPos3f(280, 430, 0);
	char msg2[] = "Version 1.0";
	for (int i = 0; i < strlen(msg2); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, msg2[i]);

	glRasterPos3f(200, 50, 0);
	char msg3[] = "Developed by Natalie, Joy, Terrence and Boaz";
	for (int i = 0; i < strlen(msg3); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg3[i]);

	glColor3f(0, 0, 1);
	glRasterPos3f(230, 250, 0);
	char msg4[] = "Press X to start the game";
	for (int i = 0; i < strlen(msg4); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);

	glRasterPos3f(230, 210, 0);
	char msg5[] = "Press u to move the fish up";
	for (int i = 0; i < strlen(msg5); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg5[i]);

	glRasterPos3f(230, 230, 0);
	char msg6[] = "Press d to move the fish down";
	for (int i = 0; i < strlen(msg6); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg6[i]);

	glRasterPos3f(230, 190, 0);
	char msg7[] = "Press q to exit the game";
	for (int i = 0; i < strlen(msg7); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg7[i]);

	glutSwapBuffers();

}
char* convertIntegerToChar(int N)
{

	// Count digits in number N
	int m = N;
	int digit = 0;
	while (m > 0) {

		// Increment number of digits
		digit++;

		// Truncate the last
		// digit from the number
		m /= 10;
	}

	// Declare char array for result
	char* arr;

	// Declare duplicate char array
	char arr1[10];

	// Memory allocation of array
	arr = (char*)malloc(digit);

	// Separating integer into digits and
	// accommodate it to character array
	int index = 0;
	while (N) {

		// Separate last digit from
		// the number and add ASCII
		// value of character '0' is 48
		arr1[++index] = N % 10 + '0';

		// Truncate the last
		// digit from the number
		N /= 10;
	}

	// Reverse the array for result
	int i;
	for (i = 0; i < index; i++) {
		arr[i] = arr1[index - i];
	}

	// Char array truncate by null
	arr[i] = '\0';

	// Return char array
	return (char*)arr;
}
void gameOver() {
	glColor3f(0, 0, 0);
	glRasterPos3f(250, 250, 0);
	char msg1[] = "Game Over";
	for (int i = 0; i < strlen(msg1); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

}
void display() {
	glClearColor(0.0, 0.6, 0.9, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	fish1();
	coral();
	pb1();
	pb2();
	pb();
	plant();

	glColor3f(0, 0, 0);
	glRasterPos3f(250, 450, 0);
	char msg1[] = "Score:";
	for (int i = 0; i < strlen(msg1); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

	char* msg2 = convertIntegerToChar(score);
	for (int i = 0; i < strlen(msg2); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg2[i]);

	if (collide == true) {
		glutDisplayFunc(gameOver);
	}
	glutSwapBuffers();
}

void movUp(void) {
	aa = aa + 20;
}
void movDown(void) {
	aa = aa - 20;
}
void movCoral(void) {
	if (b < 500) {
		b = b + 0.05;
		score += 0.005;
	}
	else {
		b = 0;
	}
	glutPostRedisplay();
}
void pause(void) {
	b = 0;
	glutPostRedisplay();
}
void keys(unsigned char key, int x, int y) {
	if (key == 'x') {
		glutDisplayFunc(display);
	}

	if (key == 'u') {
		movUp();
	}
	if (key == 'd') {
		movDown();
	}
	if (key == 'p') {
		pause();
	}
	if (key == 'q') {
		exit(0);
	}
	glutPostRedisplay();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 50);
	glutCreateWindow("Helping_Nemo");
	glutDisplayFunc(welcomeDisplay);
	glutKeyboardFunc(keys);
	init();
	glutIdleFunc(movCoral);
	glutMainLoop();
	glEnable(GL_DEPTH_TEST);
	return 0;
}