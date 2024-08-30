//
// Created by anshk on 02-08-2024.
//
#include <iostream>
using namespace std;



class b;
class a{
private:
    int length;
    public:
    friend int area(a &a1,b &a2);


};

class b{
private:
    int breadth;
public:
    friend int area(a &a1,b &a2);

};

int area(a &a1, b &a2){
    cin>>a1.length>>a2.breadth;
    cout<<"area: "<<a1.length * a2.breadth;
}

int main(){
    a a1;
    b b1;
    area(a1,b1);

}

