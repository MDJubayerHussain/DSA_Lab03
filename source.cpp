#include"header.h"
#include<iostream>
#include<cmath>
using namespace std;

Complex::Complex()
{
    real=0;
    imaginary=0;
}
Complex::Complex(int r,int c)
{
    real=r;
    imaginary=c;
}
Complex operator+(Complex& a,Complex& b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
Complex operator+(Complex& a,int x)
{
    Complex sum;
    sum.real=a.real+x;
    sum.imaginary=a.imaginary+0;
    return sum;
}
Complex operator+(int x,Complex& a)
{
    Complex sum;
    sum.real=x+a.real;
    sum.imaginary=0+a.imaginary;
    return sum;
}






Complex operator-(Complex& a,Complex& b)
{
    Complex sub;
    sub.real=a.real-b.real;
    sub.imaginary=a.imaginary-b.imaginary;
    return sub;
}
Complex operator-(Complex& a,int x)
{
    Complex sub;
    sub.real=a.real-x;
    sub.imaginary=a.imaginary-0;
    return sub;
}
Complex operator-(int x,Complex& a)
{
    Complex sub;
    sub.real=x-a.real;
    sub.imaginary=0-a.imaginary;
    return sub;
}






Complex operator*(Complex& a,Complex& b)
{
    Complex mul;
    mul.real=a.real*b.real-a.imaginary*b.imaginary;
    mul.imaginary=a.real*b.imaginary+a.imaginary*b.real;
    return mul;
}
Complex operator*(Complex& a,int x)
{
    Complex mul;
    mul.real=a.real*x;
    mul.imaginary=x*a.imaginary;
    return mul;
}
Complex operator*(int x,Complex& a)
{
    Complex mul;
    mul.real=a.real* x;
    mul.imaginary=a.real*0;
    return mul;
}
bool operator!=(Complex& a, Complex& b)
{
    if(a.real==b.real&&a.imaginary==b.imaginary)
        return false;
    else
        return true;

}



void Complex::display()
{
    char op;
    if(op>=0)
        op='+';
    else
        op='-';
    cout<<real<<op<<abs(imaginary)<<"i"<<endl;
}
