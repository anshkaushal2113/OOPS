//
// Created by anshk on 16-07-2024.
//

#include <iostream>
using namespace std;
//class ansh{
//public:
//    string *name;
//    int height;
//    ansh(){
//        cout<<"HI! I am Ansh."<<endl;
//    }
//    ansh(ansh &a1){
//        *name = *(a1.name);
//        height = a1.height;
//
//    }
//};
//
//int main(){
//    ansh a1;
//    *a1.name = "Ansh";
//    a1.height = 5;
////    ansh a2;
//    ansh a2(a1);
//    cout<<a2.name<<endl;
//    *a1.name = "vansh";
//    cout<<a2.name<<endl;
//
//}

class star{


public:
    int a;
    string b;

    star(int c,string d){
        a = c;
        b = d;
    }
};

int main(){
    star s1(20,"ansh");
    cout<<s1.a<<endl<<s1.b;
}