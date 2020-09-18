#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED


#include<string>
using namespace std;

enum color_t
{   red,green,blue,white,black
};


class Color {
    int m_r;
    int m_g;
    int m_b;

public:
    Color();
    Color(int, int, int);
    Color (int);
    Color(color_t);
    color_t getClr();
    void invert();
    void display();

};








#endif // COLOR_H_INCLUDED
