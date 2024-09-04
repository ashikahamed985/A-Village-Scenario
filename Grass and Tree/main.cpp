#include<cstdio>
#include <windows.h>
#include<math.h>
#include <vector>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>
#include <cmath>
#include<vector>

float sun_move = 0.0f;
float cloud_move = 0.0f;
float cloud_move1 = 0.0f;
float cloud_move2 = 0.0f;
float main_Bird = 0.0f;
float boat1_move = 0.0f;
float boat2_move = 0.0f;
float STAND_BOAT_move = 0.0f;
float STAND_BOAT_move2 = 0.0f;

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
void Bird(int value)
{
    if(position22 > 1.0)
        position22 =-1.0f;
    position22 += speed22;
    glutPostRedisplay();
    glutTimerFunc(100, Bird, 0);
}

void mainBird()
{
//----------1st Bird------------
    glBegin(GL_POLYGON);
    glColor3ub(76, 187, 23);
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();

    int i;
    GLfloat m1=0.182f;//radiusmm=1,nn,mm=1
    GLfloat n1=0.801f;
    GLfloat radius1 =0.01f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(140, 71, 54);
    glVertex2f(m1, n1);//Center of Circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            m1 + (radius1 * cos(i *  twicePi / triangleAmount)),
            n1 + (radius1 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

//-----------2nd Bird------------
    glBegin(GL_POLYGON);
    glColor3ub(18, 173, 43);
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

    GLfloat m2=0.062f;//mmm,nnn,radiusmmm=2
    GLfloat n2=0.801f;
    GLfloat radius2 =0.01f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(140, 71, 54);
    glVertex2f(m2, n2);//Center of Circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            m2 + (radius2 * cos(i *  twicePi / triangleAmount)),
            n2 + (radius2 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

//-----------3rd Bird---------------
    glBegin(GL_POLYGON);
    glColor3ub(79, 179, 59);
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

    GLfloat m3=-0.638f;//mmmm,nnnn=3,radiusmmm=2
    GLfloat n3=0.801f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(140, 71, 54);
    glVertex2f(m3,n3);//Center of Circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            m3 + (radius2 * cos(i *  twicePi / triangleAmount)),
            n3 + (radius2 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

//--------------4th bird-------------
    glBegin(GL_POLYGON);
    glColor3ub(79, 179, 59);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(18, 53, 36);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();

    GLfloat m4=-0.518f;//mmmmm,nnnnn=4, radiusmm=1
    GLfloat n4=0.801f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(140, 71, 54);
    glVertex2f(m4, n4);//Center of Circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            m4 + (radius1 * cos(i *  twicePi / triangleAmount)),
            n4 + (radius1 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
//------------------------------------------------------
//------------------ Sun ---------------------
GLfloat position4 = 0.0f;
GLfloat speed4 =-0.01f;


void mainSun(){

    float radius = 0.1;
    float center[] = { -0.2, 0.88 };

    glColor3ub(253, 184, 19);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float degInRad = i * M_PI / 180;
        glVertex2f(cos(degInRad) * radius + center[0], sin(degInRad) * radius + center[1]);
    }
    glEnd();
    glFlush();
}

void moon(){

    float radius = 0.1;
    float center[] = { 0.8, 0.88 };

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float degInRad = i * M_PI / 180;
        glVertex2f(cos(degInRad) * radius + center[0], sin(degInRad) * radius + center[1]);
    }
    glEnd();
    glFlush();
}
//----------------------------------------
//-------------- Sky -------------------
void sky(){
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glColor3ub(205, 240, 255);
    glVertex2f(1.0f, -0.15f);
    glVertex2f(-1.0f, -0.15f);
    glEnd();
}
void sky2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}
//-------------------------------------------
//------------ Cloud ---------------
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;
void Cloud(int value)//cloud=Cloud
{
    if(position2 > 1.0)
        position2 =-1.0f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, Cloud, 0);
}
GLfloat position1 = 1.0f;
GLfloat speed1 = - 0.005f;
//--------- Cloud1 ----------
void cloud1()
{
    int i;

    GLfloat x=0.5f;
    GLfloat y=0.86f;
    GLfloat radius =0.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=0.55f;
    GLfloat b=0.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=0.45f;
    GLfloat d=0.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=0.52f;
    GLfloat f=0.8f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=0.6f;
    GLfloat h=0.82f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
//--------- Cloud2 ----------
void cloud2()
{
    int i;

    GLfloat x=-0.5f;
    GLfloat y=0.86f;
    GLfloat radius =0.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=-0.55f;
    GLfloat b=0.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-.45f;
    GLfloat d=.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=-0.52f;
    GLfloat f=0.8f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=-0.6f;
    GLfloat h=0.82f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
//--------- Cloud3 ----------
void cloud3()
{
    // glLoadIdentity();
    int i;

    GLfloat x=0.0f;
    GLfloat y=0.86f;
    GLfloat radius =0.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=0.05f;
    GLfloat b=0.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-0.05f;
    GLfloat d=0.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=0.02f;
    GLfloat f=0.8f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=0.1f;
    GLfloat h=0.82f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g+ (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void hill_1() {
    float radius = 0.5;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.7f, 0.9f, 0.3f);
    float cx = -0.15;  // x-coordinate of circle center
    float cy = -0.5; // y-coordinate of circle center
    glVertex2f(cx, cy);
    for(int i = 0; i <= 180; i++) {
        float angle = i * 3.14159f / 180.0f;
        float x = cx + radius * cosf(angle); // add cx offset to x coordinate
        float y = cy + radius * sinf(angle); // add cy offset to y coordinate
        glVertex2f(x, y);
    }
    glEnd();
}

void hill_2() {
    float radius = 0.5;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.4f, 0.6f, 0.1f);
    float cx = -0.6;  // x-coordinate of circle center
    float cy = -0.3; // y-coordinate of circle center
    glVertex2f(cx, cy);
    for(int i = 0; i <= 180; i++) {
        float angle = i * 3.14159f / 180.0f;
        float x = cx + radius * cosf(angle); // add cx offset to x coordinate
        float y = cy + radius * sinf(angle); // add cy offset to y coordinate
        glVertex2f(x, y);
    }
    glEnd();
}

void hill_3() {
    float radius = 0.5;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.6f, 0.8f, 0.4f);
    float cx = 0.4;  // x-coordinate of circle center
    float cy = -0.4; // y-coordinate of circle center
    glVertex2f(cx, cy);
    for(int i = 0; i <= 180; i++) {
        float angle = i * 3.14159f / 180.0f;
        float x = cx + radius * cosf(angle); // add cx offset to x coordinate
        float y = cy + radius * sinf(angle); // add cy offset to y coordinate
        glVertex2f(x, y);
    }
    glEnd();
}

void Water(){
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.75f, 1.0f);
    glVertex2f(1.0f, -0.6f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.66f, 1.0f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 1.0f);
    glVertex2f(1.0f, -0.8f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -0.8f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.66f, 1.0f);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -0.9f);
    glEnd();
}

void Water_Side_Ground(){
    glBegin(GL_POLYGON);
    glColor3f(0.65f, 0.53f, 0.41f);
    glVertex2f(1.0f, -0.54f);
    glVertex2f(1.0f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(-1.0f, -0.54f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.54f, 0.41f, 0.35f);
    glVertex2f(1.0f, -0.58f);
    glVertex2f(1.0f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(-1.0f, -0.58f);
    glEnd();
}

void Water_Side_Field(){
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.8f, 0.2f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(1.0f, -0.58f);
    glVertex2f(-1.0f, -0.58f);
    glVertex2f(-1.0f, -0.35f);
    glEnd();
}

void road(){
    glBegin(GL_QUADS);
    glColor3f(0.76f, 0.7f, 0.50f);
    glVertex2f(-1.0f, -0.18f);
    glVertex2f(1.0f, -0.18f);
    glColor3f(1.0f, 1.0f, 0.6f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(-1.0f, -0.35f);
    glEnd();

}

void ground_2(){
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.8f, 0.2f);
    glVertex2f(1.0f, -0.15f);
    glVertex2f(1.0f, -0.18f);
    glVertex2f(-1.0f, -0.18f);
    glVertex2f(-1.0f, -0.15f);
    glEnd();
}

void home(){
    glBegin(GL_POLYGON);
    glColor3f(0.76f, 0.7f, 0.50f);
    glVertex2f(0.5f, -0.17f);
    glVertex2f(0.3f, -0.17f);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.4f, 0.25f);
    glVertex2f(0.5f, 0.15f);
    glEnd();

    //glBegin(GL_POLYGON);
    //glColor3f(0.65f, 0.53f, 0.41f);
    //glEnd():
}

void chorki(){
    glLineWidth(5);

    glBegin(GL_LINES); // left line
    glColor3ub(0, 0, 0);
    glVertex2f(0.55f, -0.17f);
    glVertex2f(0.6f, 0.15f);
    glEnd();

    glBegin(GL_LINES); // left to right line 1
    glColor3ub(0, 0, 0);
    glVertex2f(0.55f, -0.17f);
    glVertex2f(0.64f, -0.12f);
    glEnd();

    glBegin(GL_LINES); // left to right line 2
    glColor3ub(0, 0, 0);
    glVertex2f(0.56f, -0.12f);
    glVertex2f(0.635f, -0.07f);
    glEnd();

//////////////////////////////////////////////

    glBegin(GL_LINES); // right line
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, -0.17);
    glVertex2f(0.6f, 0.15f);
    glEnd();

    glBegin(GL_LINES); // right to left line 1
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, -0.17);
    glVertex2f(0.56f, -0.12f);
    glEnd();

    glBegin(GL_LINES); // right to left line 2
    glColor3ub(0, 0, 0);
    glVertex2f(0.64f, -0.12f);
    glVertex2f(0.565f, -0.07f);
    glEnd();


}

void chorki_fan(){
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.59f, 0.14f);
    glVertex2f(0.69f, 0.11f);
    glVertex2f(0.69f, 0.17f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.61f, 0.14f);
    glVertex2f(0.5f, 0.11f);
    glVertex2f(0.5f, 0.17f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.6f, 0.14f);
    glVertex2f(0.615f, -0.04f);
    glVertex2f(0.585f, -0.04f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.6f, 0.13f);
    glVertex2f(0.615f, 0.32f);
    glVertex2f(0.585f, 0.32f);
    glEnd();
}

void update(int value)
{
    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

void BOAT2()
{
    glBegin(GL_POLYGON); // 2nd
	glColor3ub(0, 0, 0);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.6f);
	glVertex2f(0.78f, -0.6f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.88f, -0.5f);////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.88f, -0.5f);////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
    glEnd();

     glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0,0, 0);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.535f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.535f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.535f);
	glVertex2f(0.81f, -0.48f);
	glVertex2f(0.81f, -0.535f);
    glEnd();
}

void STAND_BOAT()
{
    glBegin(GL_POLYGON); // 1st boat starting
    glColor3ub(0,0,0);
    glVertex2f(-0.2f, -0.8f);
    glVertex2f(-0.15f, -0.85f);
    glVertex2f(0.15f, -0.85f);
    glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2f(-0.13f, -0.8f);
    glVertex2f(-0.11f,-0.72f);
    glVertex2f(-0.088f, -0.68f);
    glVertex2f(0.13f, -0.68f);
    glVertex2f(0.14f, -0.71f);
    glVertex2f(0.15f, -0.8f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,25,25);
    glVertex2f(-0.038f, -0.63f);
    glVertex2f(-0.038f, -0.47f);
    glVertex2f(-0.035f, -0.45f);
    glVertex2f(0.064f, -0.47f);
    glVertex2f(0.065f, -0.49f);
    glVertex2f(0.065f, -0.65f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.0f, -0.68f);
    glVertex2f(0.0f, -0.45f);
    glVertex2f(0.01f, -0.45f);
    glVertex2f(0.01f, -0.68f);
    glEnd();
}

void STAND_BOAT2()
{
    glBegin(GL_POLYGON); // 2nd
	glColor3ub(0, 0, 0);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.6f);
	glVertex2f(0.78f, -0.6f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.88f, -0.5f);////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.88f, -0.5f);////
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0,0, 0);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.535f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.535f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.535f);
	glVertex2f(0.81f, -0.48f);
	glVertex2f(0.81f, -0.535f);
    glEnd();
}

void scale(float scale_factor) // scaling boat 1
{
    glScalef(scale_factor, scale_factor, 1.0f);
}

void move_sBoat2(float xU, float yU) // boat stand 2 translation
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    scale(0.81f);
    glTranslatef(xU, yU, 0);
    STAND_BOAT2();
    glPopMatrix();
}

void moveBoat2(float xUnits, float yUnits) // boat 2 translation
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(xUnits, yUnits, 0);
    BOAT2();
    glPopMatrix();
}
void grass1()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(-0.8f, -0.58f);
    glVertex2f(-0.82f, -0.5f);
    glVertex2f(-0.78f, -0.56f);
    glVertex2f(-0.76f, -0.46f);
    glVertex2f(-0.72f, -0.56f);
    glVertex2f(-0.68f, -0.5f);
    glVertex2f(-0.7f, -0.58f);
    glEnd();

}

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    sky();
    grass1();
    mainSun();
    moon();

    glPushMatrix();
    glTranslatef(cloud_move, 0.0,0.0);
    cloud1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud_move1, 0.0,0.0);
    cloud2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud_move2, 0.0,0.0);
    cloud3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud_move2, 0.0,0.0);
    cloud3();
    glPopMatrix();

    cloud_move += 0.003;
    {
        if(cloud_move > 1.9)
        {
            cloud_move = -2.3;
        }
    }

    cloud_move1 += 0.003;
    {
        if(cloud_move1 > 1.0)
        {
            cloud_move1 = -1.7;
        }
    }

    cloud_move2 += 0.003;
    {
        if(cloud_move2 > 1.5)
        {
            cloud_move2 = -1.2;
        }
    }

    //----Bird----
    glPushMatrix();
    glTranslatef(main_Bird, 0.0,0.0);
    mainBird();
    glPopMatrix();

    main_Bird += 0.009;
    {
        if(main_Bird > 1.5)
        {
            main_Bird = -1.2;
        }
    }

    glLoadIdentity();
    gluOrtho2D(-1.0, 0.7, -1.0, 0.7);
    hill_2();

    //hill_3();

    hill_1();
    glutSwapBuffers();

    ground_2();
    home();
    chorki();
    chorki_fan();

    Water();
    grass1();
    Water_Side_Ground();
    Water_Side_Field();
    road();

    moveBoat2(-0.2f, -0.10f);

    glPushMatrix();
    glTranslatef(STAND_BOAT_move, 0.0,0.0);
    STAND_BOAT();
    glPopMatrix();


    STAND_BOAT_move -= 0.003;
    {
        if(STAND_BOAT_move <- 2.0)
        {
            STAND_BOAT_move = 2.3;
        }
    }


    /*glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 1.0f);
    glEnd();*/

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200,600);
    glutInitWindowPosition(100,10);
    glutCreateWindow("Back to country side");
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);
    glutMainLoop();
    return 0;
}
