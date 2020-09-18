#include<iostream>  // i/o hadling header
#include "color.h"   // including the user defined functions


//Cons defining

Color::Color() {   // Default constructor
	m_r = 0;
	m_g = 0;
	m_b = 0;
}

Color::Color(int red, int green, int blue){
	m_r = red;
	m_g=green;
	m_b=blue;
}

Color::Color (int clr){

    switch (clr) {

      case 4:
        m_r = 0;m_g = 0;m_b = 0;
        break;

      case 3:
        m_r = 1;m_g = 1;m_b = 1;
        break;

      case 0:
        m_r = 1;m_g = 0;m_b = 0;
        break;

      case 1:
        m_r = 0;m_g = 1;m_b = 0;
        break;

      case 2:
        m_r = 0;m_g = 0;m_b = 1;
        break;

    }

}

 Color::Color(color_t clr){
     switch (clr) {

      case black:
        m_r = 0;m_g = 0;m_b = 0;
        break;

      case white:
        m_r = 1;m_g = 1;m_b = 1;
        break;

      case red:
        m_r = 1;m_g = 0;m_b = 0;
        break;

      case green:
        m_r = 0;m_g = 1;m_b = 0;
        break;

      case blue:
        m_r = 0;m_g = 0;m_b = 1;
        break;

    }

 }

 color_t Color::getClr()
 {

    if( m_r == 1 && m_g == 1 && m_b ==1 )
    {
        return white;
    }
    else if( m_r == 0 && m_g == 0 && m_b == 0 )
    {
        return black;
    }
     else if( m_r == 1 && m_g == 0 && m_b == 0 )
    {
        return red;
    }
     else if( m_r == 0 && m_g == 1 && m_b == 0 )
    {
        return green;
    }
     else
    {
        return blue;
    }

 }

  void Color::invert(){
   m_r = ! m_r ;
   m_g = ! m_g ;
   m_b = ! m_b ;

  }


 void Color::display(){

     cout << getClr() << endl;
 }
