#include "glut.h"
#include <GL/gl.h>
#include <math.h>

void KeyboardHandler(unsigned char key, int x, int y);

void KeyboardHandler(unsigned char key, int x, int y)//スペースで画面を閉じる
{
	if (key == ' ')
		exit(0);
}

#define T 5
double RotAngle = 0.0;
double p = 0.20;
double q = 16;

void IncAngle(int timer) //回転のタイマー
{
	if (timer != 1) return;
	RotAngle = RotAngle + 0.26;
	if (RotAngle > 360.0)
		RotAngle = RotAngle - 360.0;
	glutTimerFunc(T, IncAngle, 1);
	glutPostRedisplay();
}

double size = 0.0;
void IncAngle2(int timer) //拡大のタイマー
{
	if (timer != 2) return;
	size = size + 0.03;
	if (size >= 1.0)
		size = 1.0;
	glutTimerFunc(T, IncAngle2, 2);
	glutPostRedisplay();
}

double td10 = 0.0;
void IncAngle12(int timer) //魔方陣の時差のタイマー(IncAngle3～12)
{
	if (timer != 12) return;
	td10 = td10 - p;
	if (td10 <= -q)
		td10 = -q;
	glutTimerFunc(T, IncAngle12, 12);
	glutPostRedisplay();
}

double td9 = 0.0;
void IncAngle11(int timer) 
{
	if (timer != 11) return;
	td9 = td9 - p;
	if (td9 <= -q-1.0)
		td9 = -q-1.0;
	glutTimerFunc(T, IncAngle11, 11);
	glutPostRedisplay();
}

double td = 0.0;
void IncAngle3(int timer) 
{
	if (timer != 3) return;
	td = td - p;
	if (td <= -q-2.0)
		td = -q-2.0;
	glutTimerFunc(T, IncAngle3, 3);
	glutPostRedisplay();
}

double td2 = 0.0;
void IncAngle4(int timer) 
{
	if (timer != 4) return;
	td2 = td2 - p;
	if (td2 <= -q-3.0)
		td2 = -q-3.0;
	glutTimerFunc(T, IncAngle4, 4);
	glutPostRedisplay();
}

double td3 = 0.0;
void IncAngle5(int timer) 
{
	if (timer != 5) return;
	td3 = td3 - p;
	if (td3 <= -q-4.0)
		td3 = -q-4.0;
	glutTimerFunc(T, IncAngle5, 5);
	glutPostRedisplay();
}

double td4 = 0.0;
void IncAngle6(int timer) 
{
	if (timer != 6) return;
	td4 = td4 - p;
	if (td4 <= -q-5.0)
		td4 = -q-5.0;
	glutTimerFunc(T, IncAngle6, 6);
	glutPostRedisplay();
}

double td5 = 0.0;
void IncAngle7(int timer) 
{
	if (timer != 7) return;
	td5 = td5 - p;
	if (td5 <= -q-6.0)
		td5 = -q-6.0;
	glutTimerFunc(T, IncAngle7, 7);
	glutPostRedisplay();
}

double td6 = 0.0;
void IncAngle8(int timer) 
{
	if (timer != 8) return;
	td6 = td6 - p;
	if (td6 <= -q-7.0)
		td6 = -q-7.0;
	glutTimerFunc(T, IncAngle8, 8);
	glutPostRedisplay();
}

double td7 = 0.0;
void IncAngle9(int timer) 
{
	if (timer != 9) return;
	td7 = td7 - p;
	if (td7 <= -q-8.0)
		td7 = -q-8.0;
	glutTimerFunc(T, IncAngle9, 9);
	glutPostRedisplay();
}

double td8 = 0.0;
void IncAngle10(int timer) 
{
	if (timer != 10) return;
	td8 = td8 - p;
	if (td8 <= -q-9.0)
		td8 = -q-9.0;
	glutTimerFunc(T, IncAngle10, 10);
	glutPostRedisplay();
}

double td11 = 0.0;
double r1;
void IncAngle13(int timer) //Magiclightのタイマー 13と14をペアで使用
{
	if (timer != 13) return;
	td11 = td11 - p;
	r1 = td11;
	if (td11 <= -q - 24.0)
		r1 = -q - 24.0;
	glutTimerFunc(T, IncAngle13, 13);
	glutPostRedisplay();
}
double td12 = 0.0;
double r2;
void IncAngle14(int timer) 
{
	if (timer != 14) return;
	td12 = td12 - p;
	r2 = td12;
	if (td12 <= -q - 25.0)
		r2 = -q - 24.0;
	glutTimerFunc(T, IncAngle14, 14);
	glutPostRedisplay();
}

double td13 = 0.0;
double r3;
void IncAngle15(int timer) //15と16をペアで使用
{
	if (timer != 15) return;
	td13 = td13 - p;
	r3 = td13;
	if (td13 <= -q - 24.5)
		r3 = -q - 24.5;
	glutTimerFunc(T, IncAngle15, 15);
	glutPostRedisplay();
}
double td14 = 0.0;
double r4;
void IncAngle16(int timer)
{
	if (timer != 16) return;
	td14 = td14 - p;
	r4 = td14;
	if (td14 <= -q - 25.5)
		r4 = -q - 24.5;
	glutTimerFunc(T, IncAngle16, 16);
	glutPostRedisplay();
}

double td15 = 0.0;
double r5;
void IncAngle17(int timer) //17と18をペアで使用
{
	if (timer != 17) return;
	td15 = td15 - p;
	r5 = td15;
	if (td15 <= -q - 25.0)
		r5 = -q - 25.0;
	glutTimerFunc(T, IncAngle17, 17);
	glutPostRedisplay();
}
double td16 = 0.0;
double r6;
void IncAngle18(int timer)
{
	if (timer != 18) return;
	td16 = td16 - p;
	r6 = td16;
	if (td16 <= -q - 26.0)
		r6 = -q - 25.0;
	glutTimerFunc(T, IncAngle18, 18);
	glutPostRedisplay();
}

double td17 = 0.0;
double r7;
void IncAngle19(int timer) //19と20をペアで使用
{
	if (timer != 19) return;
	td17 = td17 - p;
	r7 = td17;
	if (td17 <= -q - 25.5)
		r7 = -q - 25.5;
	glutTimerFunc(T, IncAngle19, 19);
	glutPostRedisplay();
}
double td18 = 0.0;
double r8;
void IncAngle20(int timer)
{
	if (timer != 20) return;
	td18 = td18 - p;
	r8 = td18;
	if (td18 <= -q - 26.5)
		r8 = -q - 25.5;
	glutTimerFunc(T, IncAngle20, 20);
	glutPostRedisplay();
}

double td19 = 0.0;
double r9;
void IncAngle21(int timer) //21と22をペアで使用
{
	if (timer != 21) return;
	td19 = td19 - p;
	r9 = td19;
	if (td19 <= -q - 26.0)
		r9 = -q - 26.0;
	glutTimerFunc(T, IncAngle21, 21);
	glutPostRedisplay();
}
double td20 = 0.0;
double r10;
void IncAngle22(int timer)
{
	if (timer != 22) return;
	td20 = td20 - p;
	r10 = td20;
	if (td20 <= -q - 27.0)
		r10 = -q - 26.0;
	glutTimerFunc(T, IncAngle22, 22);
	glutPostRedisplay();
}

double td21 = 0.0;
double r11;
void IncAngle23(int timer) //23と24をペアで使用
{
	if (timer != 23) return;
	td21 = td21 - p;
	r11 = td21;
	if (td21 <= -q - 26.5)
		r11 = -q - 26.5;
	glutTimerFunc(T, IncAngle23, 23);
	glutPostRedisplay();
}
double td22 = 0.0;
double r12;
void IncAngle24(int timer)
{
	if (timer != 24) return;
	td22 = td22 - p;
	r12 = td22;
	if (td22 <= -q - 27.5)
		r12 = -q - 26.5;
	glutTimerFunc(T, IncAngle24, 24);
	glutPostRedisplay();
}

double td23 = 0.0;
double r13;
void IncAngle25(int timer) //カットイン1のタイマー
{
	if (timer != 25) return;
	td23 = td23 - p;
	if (td23 >= -q - 30.0)
		r13 = 0;
	if (td23 < -q - 30.0 &&td23 >= -q - 30.2)
		r13 = 1;
	if (td23 < -q - 30.2)
		r13 = 0;
	glutTimerFunc(T, IncAngle25, 25);
	glutPostRedisplay();
}

double td24 = 0.0;
double r14;
void IncAngle26(int timer) //カットイン2のタイマー
{
	if (timer != 26) return;
	td24 = td24 - p;
	if (td24 >= -q - 30.2)
		r14 = 0;
	if (td24 < -q - 30.2 &&td24 >= -q - 30.4)
		r14 = 1;
	if (td24 < -q - 30.4)
		r14 = 0;
	glutTimerFunc(T, IncAngle26, 26);
	glutPostRedisplay();
}

double td25 = 0.0;
double r15;
void IncAngle27(int timer) //炎柱のタイマー
{
	if (timer != 27) return;
	td25 = td25 - p;
	if (td25 >= -q - 30.2)
		r15 = 0;
	if (td25 < -q - 30.2)
		r15 = 1;
	glutTimerFunc(T, IncAngle27, 27);
	glutPostRedisplay();
}

double td26 = 0.0;
void IncAngle28(int timer) //衝撃波のタイマー
{
	if (timer != 28) return;
	td26 = td26 - p;
	if (td26 <= -q - 30.2)
		td26 = -q - 30.2;
	glutTimerFunc(T, IncAngle28, 28);
	glutPostRedisplay();
}
double td27 = 0.0;
void IncAngle29(int timer)
{
	if (timer != 29) return;
	td27 = td27 - p;
	if (td27 <= -q - 31.45)
		td27 = -q - 31.45;
	glutTimerFunc(T, IncAngle29, 29);
	glutPostRedisplay();
}

double td28 = 0.0;
void IncAngle30(int timer) //爆発のタイマー
{
	if (timer != 30) return;
	td28 = td28 - p;
	if (td28 <= -q - 33.0)
		td28 = -q - 33.0;
	glutTimerFunc(T, IncAngle30, 30);
	glutPostRedisplay();
}
double td29 = 0.0;
void IncAngle31(int timer)
{
	if (timer != 31) return;
	td29 = td29 - p;
	if (td29 <= -q - 34.25)
		td29 = -q - 34.25;
	glutTimerFunc(T, IncAngle31, 31);
	glutPostRedisplay();
}

double td30 = 0.0;
double r30;
void IncAngle32(int timer) //爆発直後のタイマー
{
	if (timer != 32) return;
	td30 = td30 - p;
	if (td30 >= -q - 34.22)
		r30 = 0;
	if (td30 < -q - 34.22)
		r30 = 1;
	glutTimerFunc(T, IncAngle32, 32);
	glutPostRedisplay();
}

// パラメータの値を等倍する関数
float new_params[4];    //等倍された結果を入れる配列
float* Multiply(float params[], float val)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		new_params[i] = params[i] * val;
	}
	return new_params;
}

// 光源の設定を簡単化する関数
void Lighting(GLenum light, float color[], float diffuse, float specular, float ambient)
{
	glLightfv(light, GL_DIFFUSE, Multiply(color, diffuse));
	glLightfv(light, GL_SPECULAR, Multiply(color, specular));
	glLightfv(light, GL_AMBIENT, Multiply(color, ambient));
}

// 表面属性の設定を簡単化する関数
void Material(float color[], float diffuse, float specular, float ambient,float emission ,float shininess)
{
	glMaterialfv(GL_FRONT, GL_DIFFUSE, Multiply(color, diffuse));
	glMaterialfv(GL_FRONT, GL_SPECULAR, Multiply(color, specular));
	glMaterialfv(GL_FRONT, GL_AMBIENT, Multiply(color, ambient));
	glMaterialfv(GL_FRONT, GL_EMISSION, Multiply(color, emission));
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);
}

float black[] = { 0.0, 0.0, 0.0, 1.0 }; //黒
float darkblue[] = { 0.0, 0.56, 0.7, 1.0 }; //暗い青
float blue[] = { 0.0, 0.0, 1.0, 1.0 };    //青
float amber[] = { 1.0, 0.5, 0.0, 1.0 };   //アンバー
float lightamber[] = { 0.988, 0.878, 0.027, 1.0 };   //明るいアンバー
float orange[] = { 0.886,0.184,0.024,1.0 }; //オレンジ
float orangered[] = { 0.969,0.227,0.063,1.0 }; //オレンジレッド
float white[] = { 1.0, 1.0, 1.0, 1.0 };   //白
float red[] = { 1.0,0.0,0.0,1.0 }; //赤
float darkred[] = { 0.322,0.031,0.008,1.0 }; //暗い赤
float green[] = { 0.0,1.0,0.0,1.0 }; //緑
float yellow[] = { 1.0,1.0,0.0,1.0 }; //黄
float lightyellow[] = { 0.98,1.0,0.255,1.0 }; //明るい黄
float lightyellow2[] = { 0.969,0.957,0.550,1.0 }; //明るい黄2
float biege[] = { 0.969,0.925,0.463,1.0 }; //ベージュ
float dir_posL[] = { -1.0, 1.0, 0.0, 0.0 };   //平行光源左位置
float dir_posR[] = { +1.0, 1.0, 0.0, 0.0 };   //平行光源右位置
float dir_posF[] = { 0.0, 0.0, 1.0, 0.0 };   //平行光源正面位置


void Column() //直径2高さ2の円柱
{
	glShadeModel(GL_SMOOTH);
	double angle = 2 * 3.1415 / 20;
	int i;

	glBegin(GL_POLYGON); //上面
	glNormal3f(0, +1, 0);
	for (i = 0; i < 20; i++)
	{
		glVertex3f(cos(i*angle), +1.0, sin(i*angle));
	}
	glEnd();

	glBegin(GL_POLYGON); //下面
	glNormal3f(0, -1, 0);
	for (i = 0; i < 20; i++)
	{
		glVertex3f(cos(i*angle), -1.0, sin(i*angle));
	}
	glEnd();

	glBegin(GL_QUAD_STRIP); //側面
	for (i = 0; i <= 20; i++)
	{
		glNormal3f(cos((i - 0.5)*angle), 0, sin((i - 0.5)*angle));
		glVertex3f(cos(i*angle), +1.0, sin(i*angle));
		glVertex3f(cos(i*angle), -1.0, sin(i*angle));
	}
	glEnd();
}

void ColumnParts() //円柱側面60度分
{
	glShadeModel(GL_SMOOTH);
	double angle = 2 * 3.1415 / 36;
	int i;
	glPushMatrix();
	glRotatef(-60, 0, 1, 0);
	glBegin(GL_QUAD_STRIP); //側面
	for (i = 0; i <= 6; i++)
	{
		glNormal3f(cos((i - 0.5)*angle), 0, sin((i - 0.5)*angle));
		glVertex3f(cos(i*angle), +1.0, sin(i*angle));
		glVertex3f(cos(i*angle), -1.0, sin(i*angle));
	}
	glEnd();
	glPopMatrix();
}

void Circle() //直径2の円
{
	glShadeModel(GL_SMOOTH);
	double angle = 2 * 3.1415 / 100;
	int i;

	glBegin(GL_POLYGON); //上向き
	glNormal3f(0, +1, 0);
	for (i = 0; i < 100; i++)
	{
		glVertex3f(cos(i*angle), 0, sin(i*angle));
	}
	glEnd();
}

void WireCircle() //直径2の円(線)
{
	glShadeModel(GL_SMOOTH);
	double angle = 2 * 3.1415 / 100;
	int i;

	glBegin(GL_LINES);
	for (i = 0; i < 100; i++)
	{
		glVertex3f(cos(i*angle), 0, sin(i*angle));
		glVertex3f(cos((i + 1)*angle), 0, sin((i + 1)*angle));
	}
	glEnd();

}

void WireHalfCircle() //直径2の半円(弧のみ・線)
{
	glShadeModel(GL_SMOOTH);
	double angle = 2 * 3.1415 / 100;
	int i;

	glBegin(GL_LINES);
	for (i = 0; i < 50; i++)
	{
		glVertex3f(cos(i*angle), 0, -sin(i*angle));
		glVertex3f(cos((i+1)*angle), 0, -sin((i+1)*angle));
	}
	glEnd();

}

void Pyramid(float x) //底面の対角線が2、高さが対角線のｘ倍の四角錐
{
	double angle = 2 * 3.1415 / 4;
	int i;

	glBegin(GL_POLYGON); //底面
	glNormal3f(0, -1, 0);
	for (i = 0; i < 4; i++)
	{
		glVertex3f(cos(i*angle), 0, sin(i*angle));
	}
	glEnd();

	glBegin(GL_TRIANGLES); //側面
	for(i=0;i<=4;i++)
	{
		glNormal3f(cos((i - 0.5)*angle), 0, sin((i - 0.5)*angle));
		glVertex3f(0, 2*x, 0);
		glVertex3f(cos(i*angle), 0, sin(i*angle));
		glVertex3f(cos((i + 1)*angle), 0, sin((i + 1)*angle));
	}
	glEnd();
}

void Magiclight(float color[], float x, float y, float z, float n) 
{   //座標(x,y,z)に縦8のn倍の大きさの魔法の煌めきの表示
	Material(color, 1.0, 0.0, 0.1, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(x, y, z);
	glScalef(n, n, n);
	Pyramid(4);
	glRotatef(90, 0, 0, 1);
	Pyramid(1.5);
	glRotatef(180, 0, 0, 1);
	Pyramid(1.5);
	glRotatef(270, 0, 0, 1);
	Pyramid(4);
	glPopMatrix();
}

void BlackFloor() //黒い床
{
	Material(black, 1.0, 0.0, 0.1, 1.0, 0.0);
	glTranslatef(0, -0.01, 0);
	glBegin(GL_POLYGON);
	glNormal3f(0, 1, 0);
	glVertex3f(-35, 0, 5);
	glVertex3f(35, 0, 5);
	glVertex3f(35, 0, -170);
	glVertex3f(-35, 0, -170);
	glEnd();
}

void WireFllor(float color[]) //線で構成された床
{
	Material(color, 1.0, 0.0, 0.1, 1.0, 0.0);
	int i;
	glBegin(GL_LINES);
	glNormal3f(0, 1, 0);
	for (i = -35; i < 35; i++)
	{
		glVertex3f(i, 0, -170);
		glVertex3f(i, 0, 5);
	}
	for (i = -170; i < 5; i++)
	{
		glVertex3f(-35, 0, i);
		glVertex3f(35, 0, i);
	}
	glEnd();
}

void Blackbuilding(float a, float b, float c) //Buildingのパーツ(黒い下地)　軽量のため一部省略
{
	Material(black, 1.0, 0.0, 0.1, 1.0, 0.0);
	glScalef(a/2 , b/2 , c/2 );
	
	glBegin(GL_POLYGON); //上面
	glNormal3f(0, +1, 0);
	glVertex3f(1, 2, 1); glVertex3f(1, 2, -1);
	glVertex3f(-1, 2, -1); glVertex3f(-1, 2, 1);
	glEnd();

	glBegin(GL_POLYGON); //側面(正面)
	glNormal3f(0, 0, +1);
	glVertex3f(-1, 0, 1); glVertex3f(1, 0, 1);
	glVertex3f(1, 2, 1); glVertex3f(-1, 2, 1);
	glEnd();

	glBegin(GL_POLYGON); //側面(ｘ正方向)
	glNormal3f(+1, 0, 0);
	glVertex3f(1, 0, -1); glVertex3f(1, 0, 1);
	glVertex3f(1, 2, 1); glVertex3f(1, 2, -1);
	glEnd();

	glBegin(GL_POLYGON); //側面(ｘ負方向)
	glNormal3f(-1, 0, 0);
	glVertex3f(-1, 0, -1); glVertex3f(-1, 0, 1);
	glVertex3f(-1, 2, 1); glVertex3f(-1, 2, -1);
	glEnd();
}

void Wirebuilding(float color[], int a, int b, int c) //Buildingのパーツ(構造線)　軽量のため一部省略
{
	Material(color, 1.0, 0.0, 0.1, 1.0, 0.0);
	int i;
	glBegin(GL_LINES); //上面
	glNormal3f(0, 1, 0);
	for (i = -c/2; i <= c/2; i++)
	{
		glVertex3f(-a/2, b, i);
		glVertex3f(a/2, b, i);
	}
	for (i = -a/2; i <= a/2; i++)
	{
		glVertex3f(i, b, -c/2);
		glVertex3f(i, b, c/2);
	}
	glEnd();

	glBegin(GL_LINES); //側面(正面)
	glNormal3f(0, 0, 1);
	for (i = 0; i <= b ; i++)
	{
		glVertex3f(-a / 2, i, c / 2);
		glVertex3f(a / 2, i, c / 2);
	}
	for (i = -a / 2; i <= a / 2; i++)
	{
		glVertex3f(i, 0, c / 2);
		glVertex3f(i, b, c / 2);
	}
	glEnd();

	glBegin(GL_LINES); //側面(x正方向)
	glNormal3f(1, 0, 0);
	for (i = 0; i <= b ; i++)
	{
		glVertex3f(a / 2, i, -c / 2);
		glVertex3f(a / 2, i, c / 2);
	}
	for (i = -c / 2; i <= c / 2; i++)
	{
		glVertex3f(a / 2, 0, i);
		glVertex3f(a / 2, b, i);
	}
	glEnd();

	glBegin(GL_LINES); //側面(x負方向)
	glNormal3f(-1, 0, 0);
	for (i = 0; i <= b ; i++)
	{
		glVertex3f(-a / 2, i, -c / 2);
		glVertex3f(-a / 2, i, c / 2);
	}
	for (i = -c / 2; i <= c / 2; i++)
	{
		glVertex3f(-a / 2, 0, i);
		glVertex3f(-a / 2, b, i);
	}
	glEnd();
}

void Building(float color[], int a, int b, int c, int x,int y,int z)
{   //color色でa*b*c(各偶数)の大きさの建造物を(x,z)中心、底面がyに作成
	glPushMatrix();
	glTranslatef(x, y, z);
	Wirebuilding(color, a, b, c);
	Blackbuilding(a*0.999, b*0.999, c*0.999);
	glPopMatrix();
}

void MagicCircle(float n) //直径10*ｎの魔方陣を描画
{
	float i;
	glRotatef(RotAngle, 0, 1, 0);
	glScalef(n, n, n);
	glPushMatrix();
	Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
	Circle();
	Material(orange, 1.0, 0.0, 0.1, 0.8, 1.0);
	for (i = 1; i < 1.013; i = i + 0.001)
	{
		glScalef(i, 0, i);
		WireCircle();
	}
	Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
	for (i = 1; i < 1.015; i = i + 0.001)
	{
		glScalef(i, 0, i);
		WireCircle();
	}
	Material(orange, 1.0, 1.0, 0.1, 0.8, 1.0);
	for (i = 1; i < 1.010; i = i + 0.001)
	{
		glScalef(i, 0, i);
		WireCircle();
	}
	glPopMatrix();

	
	glPushMatrix();
	glTranslatef(0, 0.002, 0);
	Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
	for (i = 0.4; i < 0.6; i = i + 0.001)
	{
		glScalef(i, 0, i);
		WireCircle();
	}
	glPopMatrix();

	for (i = 0; i < 0.1; i = i + 0.01) {
		glPushMatrix();
		glScalef(2.5, 2.5, 2.5);
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glTranslatef(cos((0+i) * 2 * 3.1415 / 12), 0, -sin((0+i) * 2 * 3.1415 / 12));
		glRotatef(0, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((1+i) * 2 * 3.1415 / 12), 0, -sin((1+i) * 2 * 3.1415 / 12));
		glRotatef(30, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((2+i) * 2 * 3.1415 / 12), 0, -sin((2+i) * 2 * 3.1415 / 12));
		glRotatef(60, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((3+i) * 2 * 3.1415 / 12), 0, -sin((3+i) * 2 * 3.1415 / 12));
		glRotatef(90, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((4+i) * 2 * 3.1415 / 12), 0, -sin((4+i) * 2 * 3.1415 / 12));
		glRotatef(120, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((5+i) * 2 * 3.1415 / 12), 0, -sin((5+i) * 2 * 3.1415 / 12));
		glRotatef(150, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((6+i) * 2 * 3.1415 / 12), 0, -sin((6+i) * 2 * 3.1415 / 12));
		glRotatef(180, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((7+i) * 2 * 3.1415 / 12), 0, -sin((7+i) * 2 * 3.1415 / 12));
		glRotatef(210, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((8+i) * 2 * 3.1415 / 12), 0, -sin((8+i) * 2 * 3.1415 / 12));
		glRotatef(240, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((9+i) * 2 * 3.1415 / 12), 0, -sin((9+i) * 2 * 3.1415 / 12));
		glRotatef(270, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((10+i) * 2 * 3.1415 / 12), 0, -sin((10+i) * 2 * 3.1415 / 12));
		glRotatef(300, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((11+i) * 2 * 3.1415 / 12), 0, -sin((11+i) * 2 * 3.1415 / 12));
		glRotatef(330, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();
	}

	for (i = 0.1; i < 0.2; i = i + 0.01) {
		glPushMatrix();
		glScalef(2.5, 2.5, 2.5);
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glTranslatef(cos((0 + i) * 2 * 3.1415 / 12), 0, -sin((0 + i) * 2 * 3.1415 / 12));
		glRotatef(0, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((1 + i) * 2 * 3.1415 / 12), 0, -sin((1 + i) * 2 * 3.1415 / 12));
		glRotatef(30, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((2 + i) * 2 * 3.1415 / 12), 0, -sin((2 + i) * 2 * 3.1415 / 12));
		glRotatef(60, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((3 + i) * 2 * 3.1415 / 12), 0, -sin((3 + i) * 2 * 3.1415 / 12));
		glRotatef(90, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((4 + i) * 2 * 3.1415 / 12), 0, -sin((4 + i) * 2 * 3.1415 / 12));
		glRotatef(120, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((5 + i) * 2 * 3.1415 / 12), 0, -sin((5 + i) * 2 * 3.1415 / 12));
		glRotatef(150, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((6 + i) * 2 * 3.1415 / 12), 0, -sin((6 + i) * 2 * 3.1415 / 12));
		glRotatef(180, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((7 + i) * 2 * 3.1415 / 12), 0, -sin((7 + i) * 2 * 3.1415 / 12));
		glRotatef(210, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((8 + i) * 2 * 3.1415 / 12), 0, -sin((8 + i) * 2 * 3.1415 / 12));
		glRotatef(240, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((9 + i) * 2 * 3.1415 / 12), 0, -sin((9 + i) * 2 * 3.1415 / 12));
		glRotatef(270, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((10 + i) * 2 * 3.1415 / 12), 0, -sin((10 + i) * 2 * 3.1415 / 12));
		glRotatef(300, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((11 + i) * 2 * 3.1415 / 12), 0, -sin((11 + i) * 2 * 3.1415 / 12));
		glRotatef(330, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();
	}

	for (i = -0.1; i < 0; i = i + 0.01) {
		glPushMatrix();
		glScalef(2.5, 2.5, 2.5);
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glTranslatef(cos((0 + i) * 2 * 3.1415 / 12), 0, -sin((0 + i) * 2 * 3.1415 / 12));
		glRotatef(0, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((1 + i) * 2 * 3.1415 / 12), 0, -sin((1 + i) * 2 * 3.1415 / 12));
		glRotatef(30, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((2 + i) * 2 * 3.1415 / 12), 0, -sin((2 + i) * 2 * 3.1415 / 12));
		glRotatef(60, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((3 + i) * 2 * 3.1415 / 12), 0, -sin((3 + i) * 2 * 3.1415 / 12));
		glRotatef(90, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((4 + i) * 2 * 3.1415 / 12), 0, -sin((4 + i) * 2 * 3.1415 / 12));
		glRotatef(120, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((5 + i) * 2 * 3.1415 / 12), 0, -sin((5 + i) * 2 * 3.1415 / 12));
		glRotatef(150, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((6 + i) * 2 * 3.1415 / 12), 0, -sin((6 + i) * 2 * 3.1415 / 12));
		glRotatef(180, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((7 + i) * 2 * 3.1415 / 12), 0, -sin((7 + i) * 2 * 3.1415 / 12));
		glRotatef(210, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((8 + i) * 2 * 3.1415 / 12), 0, -sin((8 + i) * 2 * 3.1415 / 12));
		glRotatef(240, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((9 + i) * 2 * 3.1415 / 12), 0, -sin((9 + i) * 2 * 3.1415 / 12));
		glRotatef(270, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((10 + i) * 2 * 3.1415 / 12), 0, -sin((10 + i) * 2 * 3.1415 / 12));
		glRotatef(300, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();

		glPushMatrix();
		Material(red, 1.0, 0.0, 0.1, 1.0, 1.0);
		glScalef(2.5, 2.5, 2.5);
		glTranslatef(cos((11 + i) * 2 * 3.1415 / 12), 0, -sin((11 + i) * 2 * 3.1415 / 12));
		glRotatef(330, 0, 1, 0);
		WireHalfCircle();
		glPopMatrix();
	}

	glPushMatrix();
	glTranslatef(0, -0.003, 0);
	glScalef(5, 5, 5);
	Material(darkred, 1.0, 0.0, 0.1, 0.3, 0);
	Circle();
	Material(red, 1.0, 0.0, 0.1, 0.8, 1.0);
	for (i = 1; i < 1.013; i = i + 0.001)
	{
		glScalef(i, 0, i);
		WireCircle();
	}
	Material(lightamber, 1.0, 0.0, 0.1, 1.0, 1.0);
	for (i = 1; i < 1.015; i = i + 0.001)
	{
		glScalef(i, 0, i);
		WireCircle();
	}
	Material(red, 1.0, 1.0, 0.1, 0.8, 1.0);
	for (i = 1; i < 1.010; i = i + 0.001)
	{
		glScalef(i, 0, i);
		WireCircle();
	}
	glPopMatrix();
}

void Cutin1(float n) //爆発直前のカットイン1
{
	glScalef(n, n, n);
	glPushMatrix();
	Material(black, 1.0, 1.0, 0.1, 0.8, 1.0);
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glVertex3f(-1, 0, 0);glVertex3f(-1, 2, 0);
	glVertex3f(1, 2, 0);glVertex3f(1, 0, 0);
	glEnd();
	
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glVertex3f(-1, 0.515, 0.001); glVertex3f(-1, 0.485, 0.001);
	glVertex3f(1, 0.485, 0.001); glVertex3f(1, 0.515, 0.001);
	glEnd();
	
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glVertex3f(-0.015, 0, 0.01); glVertex3f(0.015, 0, 0.01);
	glVertex3f(0.015, 2, 0.01); glVertex3f(-0.015, 2, 0.01);
	glEnd();
	
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glVertex3f(-0.514, 0, 0.01); glVertex3f(-0.486, 0, 0.01);
	glVertex3f(1, 1.486, 0.01); glVertex3f(1, 1.514, 0.01);
	glEnd();
	
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glVertex3f(0.514, 0, 0.01); glVertex3f(0.486, 0, 0.01);
	glVertex3f(-1, 1.486, 0.01); glVertex3f(-1, 1.514, 0.01);
	glEnd();
	glPopMatrix();
}

void Cutin2(float n) //爆発直前のカットイン2
{
	glScalef(n, n, n);
	Cutin1(1);
	glPushMatrix();
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	
	glTranslatef(0, 0.5, 0.01);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90, 1, 0, 0);
	Circle();
	glPopMatrix();

	float i;
	glPushMatrix();
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glTranslatef(0, 0.5, 0.01);
	glRotatef(90, 1, 0, 0);
	glScalef(0.1, 0.1, 0.1);
	for (i = 1.0; i < 1.016; i = i + 0.001)
	{
		glScalef(i, i, i);
		WireCircle();
	}
	glPopMatrix();

	glPushMatrix();
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glTranslatef(0, 0.5, 0.01);
	glRotatef(90, 1, 0, 0);
	glScalef(0.3, 0.3, 0.3);
	for (i = 1.0; i < 1.010; i = i + 0.0008)
	{
		glScalef(i, i, i);
		WireCircle();
	}
	glPopMatrix();

	glPushMatrix();
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glTranslatef(0, 0.5, 0.01);
	glRotatef(90, 1, 0, 0);
	glScalef(0.8, 0.8, 0.8);
	for (i = 1.0; i < 1.004; i = i + 0.0002)
	{
		glScalef(i, i, i);
		WireCircle();
	}
	glPopMatrix();

	glPushMatrix();
	Material(white, 1.0, 1.0, 0.1, 1.0, 1.0);
	glTranslatef(0, 0.5, 0.01);
	glRotatef(90, 1, 0, 0);
	glScalef(1.5, 1.5, 1.5);
	for (i = 1.0; i < 1.002; i = i + 0.0001)
	{
		glScalef(i, i, i);
		WireCircle();
	}
	glPopMatrix();
}

void RedCurtain(float n) //爆発直後の赤い背景
{
	glScalef(n, n, n);
	glPushMatrix();
	Material(red, 1.0, 1.0, 0.1, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glNormal3f(0, 0, 1);
	glVertex3f(-130, -5, -200);
	glVertex3f(130, -5, -200);
	glVertex3f(130, 100, -200);
	glVertex3f(-130, 100, -200);
	glEnd();
	glPopMatrix();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -4.0);

	glEnable(GL_LIGHTING);
	
	glLightfv(GL_LIGHT0, GL_POSITION, dir_posL);    //平行光源左位置
	glLightfv(GL_LIGHT1, GL_POSITION, dir_posR);    //平行光源右位置
	glLightfv(GL_LIGHT2, GL_POSITION, dir_posF);    //平行光源正面位置
	glLightfv(GL_LIGHT3, GL_POSITION, dir_posF);    //平行光源正面位置
	Lighting(GL_LIGHT0, blue, 1.0, 1.0, 1.0);       //青いライト
	Lighting(GL_LIGHT1, amber, 1.0, 1.0, 1.0);      //アンバーのライト
	Lighting(GL_LIGHT2, white, 1.0, 1.0, 1.0);      //白のライト
	Lighting(GL_LIGHT3, red, 1.0, 1.0, 1.0);      //赤のライト
	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHT1);
	glDisable(GL_LIGHT2);
	glDisable(GL_LIGHT3);

	//以下描画部分

	WireFllor(darkblue);//青い線の床
	BlackFloor();//黒い床

	Building(darkblue,8, 14, 10, -20, 0, -20);   Building(darkblue,8, 20, 10, -20, 0, -32); //左側の建物
	Building(darkblue,8, 10, 10, -20, 0, -44);	Building(darkblue,8, 12, 10, -20, 0, -56);
	Building(darkblue,8, 20, 10, -20, 0, -68);	Building(darkblue,8, 18, 10, -20, 0, -80);
	Building(darkblue,8, 16, 10, -20, 0, -92);	Building(darkblue,8, 14, 10, -20, 0, -104);
	Building(darkblue,8, 16, 10, -20, 0, -116);	Building(darkblue,8, 12, 10, -20, 0, -128);
	Building(darkblue,8, 18, 10, -20, 0, -140);

	Building(darkblue,8, 16, 10, 20, 0, -20);   Building(darkblue,8, 12, 10, 20, 0, -32); //右側の建物
	Building(darkblue,8, 14, 10, 20, 0, -44);	Building(darkblue,8, 12, 10, 20, 0, -56);
	Building(darkblue,8, 10, 10, 20, 0, -68);	Building(darkblue,8, 18, 10, 20, 0, -80);
	Building(darkblue,8, 14, 10, 20, 0, -92);	Building(darkblue,8, 18, 10, 20, 0, -104);
	Building(darkblue,8, 12, 10, 20, 0, -116);	Building(darkblue,8, 20, 10, 20, 0, -128);
	Building(darkblue,8, 14, 10, 20, 0, -140);

	glPushMatrix();//足下の魔方陣
	glTranslatef(0, 3, -2); glRotatef(180, 1, 0, 0); MagicCircle(0.3 * size);
	glPopMatrix();

	glPushMatrix();//上から1番目の魔方陣
	glTranslatef(0, 70, -130);glRotatef(180, 1, 0, 0);MagicCircle(10 * (-(-td7 + td8)));
	glPopMatrix();

	glPushMatrix();//上から2番目の魔方陣
	glTranslatef(0, 65, -130);glRotatef(180, 1, 0, 0);MagicCircle(1 * (-(-td10 + td9)));
	glPopMatrix();
	
	glPushMatrix();//上から3番目の魔方陣
	glTranslatef(0, 60, -130);glRotatef(180, 1, 0, 0);MagicCircle(2 * (-(-td9 + td)));
	glPopMatrix();

	glPushMatrix();//上から4番目の魔方陣
	glTranslatef(0, 55, -130);glRotatef(180, 1, 0, 0);MagicCircle(3* (-(-td + td2)));
	glPopMatrix();

	glPushMatrix();//上から5番目の魔方陣
	glTranslatef(0, 50, -130);glRotatef(180, 1, 0, 0);MagicCircle(4 * (-(-td2 + td3)));
	glPopMatrix();
	
	glPushMatrix();//上から6番目の魔方陣
	glTranslatef(0, 45, -130); glRotatef(180, 1, 0, 0);	MagicCircle(5 * (-(-td3 + td4)));
	glPopMatrix();

	glPushMatrix();//上から7番目の魔方陣
	glTranslatef(0, 40, -130);glRotatef(180, 1, 0, 0);MagicCircle(1 * (-(-td4 + td5)));
	glPopMatrix();

	glPushMatrix();//上から8番目の魔方陣
	glTranslatef(0, 35, -130);glRotatef(180, 1, 0, 0);MagicCircle(3 * (-(-td5 + td6)));
	glPopMatrix();
	
	glPushMatrix();//上から9番目の魔方陣
	glTranslatef(0, 30, -130);glRotatef(180, 1, 0, 0);MagicCircle(1 * (-(-td6 + td7)));
	glPopMatrix();

	glPushMatrix();//以下魔法の煌めき
	Magiclight(green, 2.1, 20, -130, (0.3 * (-(-r1 + r2))));
	glPopMatrix();

	glPushMatrix();
	Magiclight(blue, -1.4, 10, -130, (0.3 * (-(-r3 + r4))));
	glPopMatrix();

	glPushMatrix();
	Magiclight(yellow, -0.7, 25, -130, (0.3 * (-(-r5 + r6))));
	glPopMatrix();

	glPushMatrix();
	Magiclight(yellow, 0, 15, -130, (0.3 * (-(-r7 + r8))));
	Magiclight(red, 1.4, 5, -130, (0.3 * (-(-r7 + r8))));
	glPopMatrix();

	glPushMatrix();
	Magiclight(blue, -1.75, 18, -130, (0.3 * (-(-r9 + r10))));
	Magiclight(yellow, 0, 5, -130, (0.3 * (-(-r9 + r10))));
	glPopMatrix();

	glPushMatrix();
	Magiclight(red, 1.75, 25, -130, (0.3 * (-(-r11 + r12))));
	Magiclight(green, -0.5, 12, -130, (0.3 * (-(-r11 + r12))));
	glPopMatrix();//ここまで

	glEnable(GL_LIGHT0);//爆発直前のカットイン1
	glPushMatrix();
	glTranslatef(0, 2.83, -2);
	Cutin1(4*r13);
	glPopMatrix();
	glDisable(GL_LIGHT0);


	glEnable(GL_LIGHT0);//爆発直前のカットイン2
	glPushMatrix();
	glTranslatef(0, 2.83, -2);
	Cutin2(4*r14);
	glPopMatrix();
	glDisable(GL_LIGHT0);

	glEnable(GL_LIGHT2);//炎柱の外側部分
	glPushMatrix();
	Material(lightyellow, 1.0, 0, 0.1, 1.0, 0);
	glTranslatef(0, 25, -130);
	glScalef(4*r15, 50*r15, 4*r15);
	Column();
	glPopMatrix();
	glDisable(GL_LIGHT2);

	glEnable(GL_LIGHT2);//炎柱の内側部分
	glPushMatrix();
	Material(red, 1.0, 1.0, 0.5, 1.0, 0);
	glTranslatef(0, 25, -129.5);
	glScalef(4 * r15, 50 * r15, 4 * r15);
	ColumnParts();
	glPopMatrix();
	glDisable(GL_LIGHT2);

	glEnable(GL_LIGHT2);//衝撃波
	glPushMatrix();
	Material(white, 1.0, 1.0, 0.5, 0.5,1.0);
	glShadeModel(GL_SMOOTH);
	glTranslatef(0, 10, -130);
	glRotatef(90, 1, 0, 0);
	glScalef(27 * (-(-td26 + td27)), 27 * (-(-td26 + td27)), 1 * (-(-td26 + td27)));
	glTranslatef(0, 2.5, 0);
	glutSolidTorus(0.2,5,20,20);
	glPopMatrix();
	glDisable(GL_LIGHT2);

	glEnable(GL_LIGHT3);//爆発
	glPushMatrix();
	glShadeModel(GL_SMOOTH);
	Material(lightyellow2, 1.0, 1.0, 0.5, 1.0, 1.0);
	glTranslatef(0, 0, -130);
	glScalef(1 * (-(-td26 + td27)), 1 * (-(-td28 + td29)), 1 * (-(-td28 + td29)));
	glutSolidSphere(110,100,100);
	glPopMatrix();
	glDisable(GL_LIGHT3);

	glEnable(GL_LIGHT3);//爆発直後の赤い背景
	glPushMatrix();
	RedCurtain(r30);
	glPopMatrix();
	glDisable(GL_LIGHT3);
	
	glPushMatrix();//線の床をオレンジ色に塗り替え
	glScalef(r30, r30, r30);
	glTranslatef(0, 0.1, 0);
	WireFllor(orange);
	glPopMatrix();

	glPushMatrix();//黒い床
	glScalef(r30, r30, r30);
	glTranslatef(0, 0.1, 0);
	BlackFloor();
	glPopMatrix();

	glPushMatrix();glScalef(r30, r30, r30);glTranslatef(0.1, 0, 0.1); //左側の建物をオレンジ色に塗り替え
	Building(orange, 8, 14, 10, -20, 0, -20); glPopMatrix(); 
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 20, 10, -20, 0, -32);  glPopMatrix();         
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 10, 10, -20, 0, -44); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 12, 10, -20, 0, -56); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.05, 0, 0.2); 
	Building(orange, 8, 20, 10, -20, 0, -68); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 18, 10, -20, 0, -80); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 16, 10, -20, 0, -92); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 14, 10, -20, 0, -104); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 16, 10, -20, 0, -116); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 12, 10, -20, 0, -128); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(0.1, 0, 0.1); 
	Building(orange, 8, 18, 10, -20, 0, -140); glPopMatrix();

	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1);//右側の建物をオレンジ色に塗り替え
	Building(orange, 8, 16, 10, 20, 0, -20);  glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1);
	Building(orange, 8, 12, 10, 20, 0, -32); glPopMatrix(); 
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1); 
	Building(orange, 8, 14, 10, 20, 0, -44); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1);
	Building(orange, 8, 12, 10, 20, 0, -56); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1); 
	Building(orange, 8, 10, 10, 20, 0, -68); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1); 
	Building(orange, 8, 18, 10, 20, 0, -80); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1); 
	Building(orange, 8, 14, 10, 20, 0, -92); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1);
	Building(orange, 8, 18, 10, 20, 0, -104); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1); 
	Building(orange, 8, 12, 10, 20, 0, -116); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1); 
	Building(orange, 8, 20, 10, 20, 0, -128); glPopMatrix();
	glPushMatrix(); glScalef(r30, r30, r30); glTranslatef(-0.1, 0, 0.1); 
	Building(orange, 8, 14, 10, 20, 0, -140); glPopMatrix();

	glEnable(GL_LIGHT3);//爆発後中心
	glPushMatrix(); 
	glShadeModel(GL_SMOOTH);
	Material(biege, 1.0, 1.0, 0.5, 1.0, 1.0);
	glScalef(r30, r30, r30); 
	glTranslatef(0, 0, -130);
	glutSolidSphere(20, 100, 100);
	glPopMatrix();
	glDisable(GL_LIGHT3);

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitWindowPosition(0, 0);
	glutInitWindowSize(800, 800);
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow("爆裂魔法");
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, 1.0, 1.0, 300.0); //透視投影
	gluLookAt(0, 5, 0, 0, 50, -200, 0, 1, 0);

	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(display);
	glutKeyboardFunc(KeyboardHandler);
	glutTimerFunc(T, IncAngle, 1); //回転
	glutTimerFunc(T, IncAngle2, 2); //拡大
	glutTimerFunc(T, IncAngle3, 3); //三番目
	glutTimerFunc(T, IncAngle4, 4);
	glutTimerFunc(T, IncAngle5, 5);
	glutTimerFunc(T, IncAngle6, 6);
	glutTimerFunc(T, IncAngle7, 7);
	glutTimerFunc(T, IncAngle8, 8);
	glutTimerFunc(T, IncAngle9, 9);
	glutTimerFunc(T, IncAngle10, 10);
	glutTimerFunc(T, IncAngle11, 11);//二番目の時差
	glutTimerFunc(T, IncAngle12, 12);//初めの時差
	glutTimerFunc(T, IncAngle13, 13);//Magiclight 13と14ペア
	glutTimerFunc(T, IncAngle14, 14);
	glutTimerFunc(T, IncAngle15, 15);//15と16ペア
	glutTimerFunc(T, IncAngle16, 16);
	glutTimerFunc(T, IncAngle17, 17);//17と18ペア
	glutTimerFunc(T, IncAngle18, 18);
	glutTimerFunc(T, IncAngle19, 19);//19と20ペア
	glutTimerFunc(T, IncAngle20, 20);
	glutTimerFunc(T, IncAngle21, 21);//21と22ペア
	glutTimerFunc(T, IncAngle22, 22);
	glutTimerFunc(T, IncAngle23, 23);//23と24ペア
	glutTimerFunc(T, IncAngle24, 24);
	glutTimerFunc(T, IncAngle25, 25);//カットイン1のタイマー
	glutTimerFunc(T, IncAngle26, 26);//カットイン2のタイマー
	glutTimerFunc(T, IncAngle27, 27);//炎柱のタイマー
	glutTimerFunc(T, IncAngle28, 28);//28と29ペア 衝撃波のタイマー
	glutTimerFunc(T, IncAngle29, 29);
	glutTimerFunc(T, IncAngle30, 30);//28と29ペア 爆発のタイマー
	glutTimerFunc(T, IncAngle31, 31);
	glutTimerFunc(T, IncAngle32, 32);//爆発直後のタイマー

	glutMainLoop();
}


