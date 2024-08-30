//
// Created by anshk on 01-08-2024.
//

#include <iostream>
using namespace std;

class yo{
public:
    static int a;
};
// static variable
int yo::a =0;
//
//int main(){
//    yo a1;
//    a1.a = 3;
//    yo a2;
//    cout<<a2.a;
//}

class test{
    int a;
    int b;
public:
    static int count;
    test(int x,int y){
        a = x;
        b = y;
        count++;
    }
    void print(){
        cout<<a<<" "<<b<<" "<<count<<endl;
    }
    static int getcount(){
        return count;
    }
};

//int test:: getcount();
int test:: count= 0;

int main(){
    test a(1,2);
    a.print();
    test b(2,4);
    b.print();
    a.print();
//    cout<<a.count; ..accessing from object
//    cout<<b.getcount<<endl;
    cout<<test :: count<<endl; // accessing from class
}
