//
// Created by anshk on 05-07-2024.
//
#include <iostream>
#include <string.h>
using namespace std;
//int rev(char a[],int size){
//    int i=0,j=strlen(a)-1;
//    while(i<j/2){
//        swap(a[i],a[j]);
//        i++;
//        j--;
//    }
////    cout<<a;
//}
//int main(){
//    char a[100];
//    fgets(a,100,stdin);
//    int size = strlen(a);
//    a[size] = '\0';
//    rev(a,size);
//    cout<<a;
//////    getchar();
////
//////    rev(a,strlen(a));
//////    cout<<a;
////    char c;
////    for(int i=0;i<size/2;i++){
////        c = a[size-i-1];
////        a[size-i-1] = a[i];
////        a[i] = c;
////    }
////
////    cout<<a;
////    int i=0,j=strlen(a)-1;
////    while(i<j/2){
////        swap(a[i],a[j]);
////        i++;
////        j--;
////    }
////    cout<<a;
//}
//int pal(char *a,int size){
////    char b[100];
////    strcpy(b,a);
////    int i=0,j=strlen(a)-1;
////    while(i<j/2){
////        swap(a[i],a[j]);
////        i++;
////        j--;
////    }
//////    cout<<b;
////    if(strcmp(a,b)==0){
////        cout<<"its palindrome";
////    }
////    else
////        cout<<"not palindrome";
//    for(int i=0;i<(size)/2;i++){
//        if(a[i]!=a[size-i-1]){
//            return 0;
//        }
//            return 1;
//    }
//}
//int main(){
//    char a[100];
//    fgets(a,100,stdin);
//    int size = strlen(a);
//    a[size-1] = '\0';
//    if(pal(a,size-1)){
//        cout<<"palindrome";
//    }
//    else
//        cout<<"not";
//}

//classes are private by default and have methods/functions than in structs
class students{
private:
    string name;
    int r_no;
    string b_group;
    string session;
public:
    void set_name(string str){
        name =str;
    }
    int set_r_no(int str){
        r_no =str;
    }
    void set_bg(string bg){
        b_group =bg;
    }
    void set_session(string ses){
        session =ses;
    }
    string get_name(string str){
        return str;
    }
    int get_r_no(int str){
        return str;
    }
    string get_bg(string bg){
        return bg;
    }
    string get_session(string ses){
        return ses;
    }

};
int main(){
    students s1;
//    s1.name="Ansh";
//    s1.r_no=7;
//    s1.b_group="A+";
//    s1.session="23-27";
    s1.set_name("Ansh");
    s1.set_r_no(7);
    s1.set_bg("A+");
    s1.set_session("23-27");
    cout<<s1.get_name("Ansh")<<endl;
    cout<<s1.get_r_no(7)<<endl;
    cout<<s1.get_bg("A+")<<endl;
    cout<<s1.get_session("23-27")<<endl;

}