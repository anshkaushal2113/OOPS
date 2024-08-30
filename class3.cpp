//
// Created by anshk on 04-07-2024.
//
#include <iostream>
using namespace std;
////int max(int b[],int a){
////    int max=0;
////    for(int i = 0;i<a;i++){
////        if(max<b[i]){
////            max = b[i];
////        }
////    }
////
////    cout<<max;
////}
//int maxe(int b[],int a){
//    int maxey=0;
//    for(int i=0;i<a;i++) {
//        maxey= max(maxey,b[i]);
//    }
//    return maxey;
//}
//int main(){
//    int a;
//    cin>>a;
//    int b[a];
//    for(int i = 0;i<a;i++){
//        cin>>b[i];
//    }
//    int maxe=0;
//    cout<<maxe(b,a);
//
//}

//swapping
//int swap(int a[],int b){
//    int temp=0;
//    if(b%2==1){
//        b-=1;
//    }
//    for(int i=0;i<b;i+=2){
//        temp = a[i];
//        a[i] = a[i+1];
//        a[i+1] = temp;
//        }
//        for(int i = 0;i<=b;i++){
//            cout<<a[i]<<" ";
//        }
//
//}
//int main(){
//    int a[]={1,2,3,4,5};
//    swap(a,sizeof(a)/sizeof(a[0]));
//}
// we can even use swap(int a,int b); inbuilt function
//int main(){
//    int n = 20;
//    n=n<<4;//left shifitng
//    cout<<n<<endl;
//}

//int main(){
//    int Xor=0;
//    int a[] = {2,3,3,2,1,5,6,5,10,6,10};
//    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
//        Xor = Xor^a[i];
//    }
//    cout<<Xor<<endl;
//}
int main(){
    char a = 'a';
    a+=1;
    cout<<a;
}
