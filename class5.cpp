//
// Created by anshk on 08-07-2024.
//
#include <iostream>
using namespace std;
//class rectangle{
//    int lenght;
//    int breadth;
//public:
//    int area(int lenght,int breadth){
//        int area = lenght*breadth;
//        cout<<"area: "<<area<<endl;
//    }
//    int perimeter(int lenght,int breadth){
//        int perimeter = 2*(lenght+breadth);
//        cout<<"perimeter: "<<perimeter<<endl;
//    }
//};
//int main(){
//    rectangle a1;
//    a1.area(4,5);
//    a1.perimeter(4,5);
//}

class car{
    int price;
    string name;
public:
    double discount(double price,double x){
        double y = price - (x/100)*price;
        cout<<y<<endl;

    }
    int set(int a,string b){
        price = a;
        name = b;
    }
    int call(){
        cout<<price<<endl<<name<<endl;
    }
};
int main(){
    car s1;
    double price;
    string name;
    double discount;
//    cin>>price>>discount;
    cin>>price>>name;
//    s1.discount(price,discount);
    s1.set(100000,name);
    s1.call();

}