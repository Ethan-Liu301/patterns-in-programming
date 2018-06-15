//ABC pattern
/*
n=4
ABCD
ABC
AB
A
*/
#include<iostream>
using namespace std;
int main(){
int n;
char ch;
cout<<"Enter a number :";
cin>>n;
int i=1;
while(i<=n){
ch='A';
int j=1;
while(j<=n-i+1){
cout<<ch;
ch++;
j++;}
j=1;


i=i+1;
cout<<endl;
}


return 0;
}
