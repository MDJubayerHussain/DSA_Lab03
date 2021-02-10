// Md. Jubayer Hussain NSU
//Hackerrank id : @jubayer_1996Hus1

/*Recall the complex number class we discussed in our lectures. Modify the class and overload the –
(subtraction), * (multiplication) and the != (not equal) operators for the class given below.*/

#include <iostream>
#include"header.h"


using namespace std;

int main()
{
    int a,b,x,y;
    cout<<"Enter the real number for object 1 :";
    cin>>a;
    cout<<"\nEnter the imaginary number for object 1 :";
    cin>>b;
    cout<<"\nEnter the real number for object 2 :";
    cin>>x;
    cout<<"\nEnter the imaginary number for object 2 :";
    cin>>y;
    cout<<endl;

    Complex obj1 (a,b);
    Complex obj2 (x,y);

    Complex multiplication;
    Complex sum;
    Complex substraction;

    sum= obj1+obj2;
    substraction=obj1-obj2;
    multiplication=obj1*obj2;

    cout<<"Summation of 2 complex number is :";
    sum.display();
    cout<<"\nSubtraction of 2 complex number is :";
    substraction.display();
    cout<<"\nMultiplication of 2 complex number is :";
    multiplication.display();

    if (obj1!=obj2)
    {
        cout<<"Ami pagol !!";
    }
    else
        cout<<"Ami pagol na !!";


    return 0;
}
