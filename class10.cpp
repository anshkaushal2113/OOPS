//
// Created by anshk on 22-07-2024.
//
#include <iostream>
using namespace std;
//class a{
//    int a;
////    double b;
//    char c[33];
//};
//int main(){
//    a a1;
//    cout<<sizeof(a);
//}

//majority element

//int main(){
//    int a =0;
//    int c[5];
//    int b[5] = {1,2,2,2,5};
//    for(int i =0;i<5;i++){
//        for(int j = 0;j<5;j++){
//            if(b[i] == b[j]){
//                a++;
//            }
//        }
//        c[i] = a;
//        a=0;
//    }
//    int d=0;
//    for(int i = 0;i<5;i++){
//        if(c[i] >=(sizeof(b)/sizeof(b[0]))/2){
////            cout<<"majority element is: "<<b[i];
//            d = b[i];
//            break;
//        }
//    }
//    if(d!=NULL){
//        cout<<"majority element is: "<<d;
//    }
//    else
//        cout<<"no majority element";
//}

class gb{
public:
    int a ;
    int *b;
    gb(){
        a = 5;
        b = new int(10);
    }
    gb(gb &a1){
        b = new int;
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
