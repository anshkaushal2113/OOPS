//
// Created by anshk on 19-07-2024.
//

#include <iostream>
using namespace std;
class gb{
public:
    int a ;
    int *b;
    gb(){
        a =5;
        b = new int(10);
    }
    gb(gb &a1){
        a = a1.a;
        b = a1.b;
    }
};

int main(){
    gb g1;
    gb g2(g1);
    cout<<g2.a<<endl<<*(g2.b)<<endl;
    g1.a = 19;
    *(g1.b) = 10;
    cout<<g2.a<<endl<<*(g2.b)<<endl;
    g1.a = 45;
    *(g1.b) = 32;
    cout<<g2.a<<endl<<*(g2.b)<<endl;

}
