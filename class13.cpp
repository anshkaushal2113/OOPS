//
// Created by anshk on 30-07-2024.
//

// friend function is used to initialise or modify data memebers in all scopes like private and protected.

#include <iostream>
using namespace std;

class ex{
private:
    int a;
public:
    int b;
protected:
    int c;
private:
    friend void friendfunc(ex &obj);// we can use this even if its private but we can not use other functions outside which are private.
//    int a3(ex &obj);
};

//int ex :: a3(ex &obj){
//    obj.a = 1;
//    obj.b = 5;
//    obj.c = 7;
//    cout<<obj.a<<" "<<obj.b<<" "<<obj.c<<endl;
//}
void friendfunc(ex &obj){
    obj.a = 1;
    obj.b = 5;
    obj.c = 7;
    cout<<obj.a<<" "<<obj.b<<" "<<obj.c<<endl;
}

int main(){
    ex a1;
    friendfunc(a1);
//    cout<<a1.a;
//    a1.a3(a1);
}