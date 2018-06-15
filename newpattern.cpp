//new pattern
/*

n=3
1
01
101
1
01
101
101
01
1
101
10
1

*/
#include<iostream>
using namespace std;

int main(){
int N,val=1;
cout<<"Enter the number :";
cin>>N;
for (int i=1;i<=N;i++){
val=1;
for (int j=1;j<=i;j++){
if(i%2==0){
cout<<1-val;
val=1-val;
}else{
cout<<val;
val=1-val;
}}
cout<<endl;
}
//different method
for (int i=1;i<=N;i++){
for (int j=1;j<=i;j++){
if((i+j)%2==0)
cout<<"1";
else cout<<"0";
}
cout<<endl;
}

for (int i=N;i>=1;i--){
for (int j=i;j>=1;j--){
if((i+j)%2==0)
cout<<"1";
else cout<<"0";
}
cout<<endl;
}
for (int i=N;i>=1;i--){
for (int j=i;j>=1;j--){
if((i+j)%2==0)
cout<<"1";
else cout<<"0";
}
cout<<endl;
}
return 0;
}
