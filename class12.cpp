//
// Created by anshk on 25-07-2024.
//
#include <iostream>
using namespace std;

class rectangle{
    int l, b;
public:
//    rectangle(){
//        l =1;
//        b=1;
//    }
    rectangle();
    ~rectangle(){
        cout<<"destructor"<<endl;
    }
    rectangle(int len,int bre){
        l = len;
        b = bre;
    }
    rectangle(rectangle &r1){
        l = r1.l;
        b = r1.b;
    }
    void print(){
        cout<<l<<" "<<b<<endl;
    }
//    int area(){
//        return l*b;
//    }
    int area();
};
//
rectangle :: rectangle(){
    l =1;
    b=1;
}

int rectangle ::area( ){
    return l*b;
}

int main(){
    rectangle r1,r2(10,15),r3(r2);
    r1.print();
    r2.print();
    r3.print();
    cout<<r3.area()<<endl;

}