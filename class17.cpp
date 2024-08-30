//
// Created by anshk on 22-08-2024.
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
complex operator-(complex &a1) {
    complex temp;
    temp.real = a1.real *-1;
    temp.imag = a1.imag *-1;
    return temp;

}


int main(){
    complex a1;
    complex a = -a1;
    cout<<a.real<<a.imag<<"i";

}