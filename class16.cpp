//
// Created by anshk on 05-08-2024.
//
#include <iostream>
using namespace std;

class complex{
public:
    int real;
    int imag;
    friend complex operator+(complex &a1,complex &a2);


//        cout<<real+a2.real << " + i"<< imag + a2.imag<<endl;


    complex(int a = 1,int b = 2){
        real = a;
        imag = b;
    }
};
complex operator+(complex &a1,complex &a2) {
    complex temp;
    temp.real = a1.real + a2.real;
    temp.imag = a1.imag + a2.imag;
    return temp;

}


int main(){
    complex a1,a2;
//    a1.real  =5;
//    a1.imag = 4;
//    a2.real = 5;
//    a2.imag = 4;
//    a1.add(a2);
    complex a = a1+a2;
    cout<<a.real<<" + i"<<a.imag;

}