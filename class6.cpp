//
// Created by anshk on 09-07-2024.
//

//protected is same as private but u can access protected in inherited call but u can not inherit private class;

//access modifier = public private protected.
#include <iostream>
using namespace std;
//class circle{
//private :
//    double radius;
//public:
//    double set(double a){
//        radius = a;
//    }
//    double area(){
//        double area = 3.14*radius*radius;
//        cout<<"area: "<<area;
//    }
//};
//int main(){
//    circle s1;
//    double a;
//    cin>>a;
//    s1.set(a);
//    s1.area();
//}

//class parent{
//protected:
//    int id_protected;
//};
//class child: public parent{
//public:
//    void set_id(int id){
//        id_protected = id;
//    }
//    void set_id(){
//
//    }
//    void display(){
//        cout<< "req value: "<<id_protected;
//    }
//};
//#include<iostream>
//using namespace std;
//
//class car{
//private:
//    int price;
//
//public:
//    int modelid;
//    char name[20];
//
//    void setprice(int p){
//        if (1000<p){
//            price=p;
//        }
//        else{
//            price = 1000;
//        }
//
//    }
//
//    int getprice(){
//        return price;
//    }
//};
//
//int main(){
//    car c1, c2;
//
//    c1.setprice(5000);
//    c2.setprice(700);
//
//    cout<<c1.getprice()<<endl;
//    cout<<c2.getprice();
//
//}
//cosntructor is called 1.sbse pehle in a class, 2.name = classname 3.no return type;
//class car{
//public:
//    int name;
////    car(){
////        cout<<"called"<<endl;
////    }
//};
//car : :car(int meow){
//
//}
//int main(){
//    car c1,c2,c3;
//}
//class student{
//public:
//    string name;
//    int roll_no;
//    student(string a,int b){//constructor
////        cin>>a>>b;
//        name = a;
//        roll_no = b;
//        cout<<"called"<<endl;
//    }
//    void display(){
//        cout<<"name: "<<name<<endl;
//        cout<<"roll no.: "<<roll_no<<endl;
//    }
//
//};
//int main(){
//    string a;
//    int b;
//    cin>>a>>b;
//    student s1(a,b);
//    s1.display();
//}

// :: = scope resolution;
//class car{
//public:
//    string name;
//    car(string a);
//    void display();
//};
//car :: car(string a){
//    name = a;
//
//}
//void car :: display(){
//    cout<<name<<endl;
//}
//int main(){
//    string a;
//    cin>>a;
//    car b(a);
//    b.display();
//}
//#include <cstring>
//int main(){
//    string a;
//    a ="saayra";
////    char a[] = "saayra";
//    int b= sizeof(a);
////    cout<<b;
//    for(int i =0;i<a.length();i++){
//        cout<<a[i];
//    }
//}
// copy constructor:- initializes an object using an another object of same class.
//class ansh{
//public:
//    int a;
//    ansh(int b){
//        a=b;
//    }
//    ansh(ansh &a1){
//        a = a1.a;
//    }
//};
//int main(){
//    ansh a1(7);
//    ansh a2(a1);
//    a1.a = 19;
//    cout<<a2.a;
//    a1.a = 7;
//}
//abstraction:= display only basic information and hiding the details.
//              data abstraction refers to providing necessary information about data to the outside world.
//              hiding background implementation.

int main(){
    double a = 1.345678900875432;
    cout<<a;
}
//long long , short int ,char rangec