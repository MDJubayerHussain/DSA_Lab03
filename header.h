#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex
{
    friend Complex operator +(Complex&,Complex&);
    friend Complex operator +(Complex&,int);
    friend Complex operator +(int,Complex&);
    friend Complex operator -(Complex&,Complex&);
    friend Complex operator -(Complex&,int);
    friend Complex operator -(int,Complex&);
    friend Complex operator *(Complex&,Complex&);
    friend Complex operator *(Complex&,int);
    friend Complex operator *(int,Complex&);
    friend bool operator!=(Complex&,Complex&);
    friend bool operator!=(Complex&,int);
    friend bool operator!=(int,Complex&);

private:

    int real, imaginary ;

public:

    Complex();
    Complex(int, int);
    void display();
};
#endif // COMPLEX_H_INCLUDED
