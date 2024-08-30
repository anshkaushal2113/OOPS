//
// Created by anshk on 02-07-2024.
//
//function
#include <iostream>
using namespace std;
//definition+declearation
//void fun(int x,int y){
//    cout<<"sum is: "<<x+y<<endl;
//}
//int main(){
//    fun(3,5);
//}
//we can even use default arguments
//void print(int); //decleration
//int main(){
//    print(5);//calling
//}
////definition
//void print(int x){
//    cout<<"arg is: "<<x<<endl;
//}
//default parameter is used when we dont give any argument
//but if we give argument then tht argument is used not the default one.
//cuz priority of user argument is more than default parameter.

//call by reference,value and address
//call by reference
//int fun(int &a,int&b){
//    a++;
//    b--;
//}
//int main(){
//    int a,b;
//    a=4;
//    b=10;
//    fun(a,b);
//    cout<<"a is: "<<a<<endl;
//    cout<<"a is: "<<b<<endl;
//}
//call by value
//int fun(int a,int b){
//    a++;
//    b--;
//}
//int main(){
//    int a,b;
//    a=4;
//    b=10;
//    fun(a,b);
//    cout<<"a is: "<<a<<endl;
//    cout<<"a is: "<<b<<endl;
//}

//call by address
//int fun(int *a,int *b){
////    *(a)++;
//    *a = *a+1;
//    *b = *b-1;
////    *(b)--;
//}
//int main(){
//    int a,b;
//    a=4;
//    b=10;
//    fun(&a,&b);
//    cout<<"a is: "<<a<<endl;
//    cout<<"a is: "<<b<<endl;
//}
//int fun(int *a){
//    for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
//        cout<<a+i*4<<" ";
//    }
//}
//int main(){
//    int a[] = {1,2,3,4};
//    fun(a);
//}

int main(){
    int a;

    cin>>a;
    int b[a];
    for(int i =0;i<a;i++){
        cin>>b[i];
    }
    for(int i =0;i<a;i++){
        cout<<b[i]<<" ";
    }
}