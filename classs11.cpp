//
// Created by anshk on 23-07-2024.
//
//destructor = same name as class no return type can be defined only once in class
//it works like stack first in last out.
#include <iostream>
using namespace std;

//class a{
//public:
//    int b;
//    a(){
//        cout<<"const class created"<<endl;
//
//        cout<<b<<endl;
//    }
//
//    ~a(){
//        cout<<"class deleted"<<endl;
//
//        cout<<b<<endl;
//    }
//};
//
//int main(){
//    a a1,a2,a3;
//    a1.b = 1;
//    a2.b = 2;
//    a3.b = 3;
//}

class a1{
public:
    int a;
    int *b = new int(40);
    a1(){

    }
    a1(a1 &b1){
        b = new int;
        a = b1.a;
        *b = *(b1.b);
    }
};

int main(){
    a1 s1;
    s1.a = 13;
    *s1.b = 12;
    a1 s2(s1);
    cout<<s2.a<<endl<<s2.b;


}