//
// Created by anshk on 30-08-2024.
//
#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5};
    int k = 2;

    int len =sizeof(a)/sizeof(a[0]);
    int b[len];
    //right rotate
//    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
//        b[(k+i)%len] = a[i];
//    }
//    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
//        cout<<b[i]<<' ';
//    }
    //left rotate
    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
        b[(i-k +len)%len] = a[i];
    }
    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<b[i]<<' ';
    }


}
