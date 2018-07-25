#include<iostream>
#include<time.h>
using namespace std;
//function for sleep the output
void my_sleep(unsigned msec) {
    struct timespec req, rem;
    int err;
    req.tv_sec = msec / 1000;
    req.tv_nsec = (msec % 1000) * 1000000;
    while ((req.tv_sec != 0) || (req.tv_nsec != 0)) {
        if (nanosleep(&req, &rem) == 0)
            break;
        err = errno;
        // Interrupted; continue
        if (err == EINTR) {
            req.tv_sec = rem.tv_sec;
            req.tv_nsec = rem.tv_nsec;
        }
        // Unhandleable error (EFAULT (bad pointer), EINVAL (bad timeval in tv_nsec), or ENOSYS (function not supported))
        break;
    }
}



void hourglass(int N){
if(N==1){
	int N=3;
for(int i=1;i<=N+1;i++){
for(int j=1;j<=i;j++){
cout<<" ";}
for(int j=N+1-i;j>=0;j--)
cout<<"*";
for(int j=1;j<=N-i+1;j++)
cout<<"*";
cout<<endl;
}
//     lower area
int val=1;
for(int i=1;i<=N;i++){
for(int j=N-i+1;j>=1;j--)
cout<<" ";
val=i;
for(int j=0;j<=i;j++){
cout<<"*";
val=val-1;
}
for(int k=1;k<=i;k++){
cout<<"*";
}

cout<<endl;
}
}
else{
	int n=3;
for(int i=1;i<=n;i++){
	cout<<" ";
for(int j=1,k=n;j<=i;j++,k--)
cout<<"*";
for(int j=1;j<=2*(n-i+1)-1;j++)
cout<<" ";
for(int j=1,k=n-i+1;j<=i;j++,k++)
cout<<"*";
cout<<endl;
}
cout<<" ";
for(int i=n;i>=0;i--)
cout<<"*";
for(int i=1;i<=n;i++)	
cout<<"*";
cout<<endl;

for(int i=1;i<=n;i++){
	cout<<" ";
for(int j=1,k=n;j<=n-i+1;j++,k--)
cout<<"*";
for(int j=1;j<=2*i-1;j++)
cout<<" ";
for(int j=1,k=i;j<=n-i+1;j++,k++)
cout<<"*";
cout<<endl;
}

}

cout<<endl<<endl;
}

void hello(){
cout<<"**  **  *****  **     **       **"<<endl;
my_sleep(300);
cout<<"**  **  **     **     **      ****"<<endl;
my_sleep(300);
cout<<"******  *****  **     **     **  **"<<endl;
my_sleep(300);
cout<<"******  *****  **     **     **  **"<<endl;
my_sleep(300);
cout<<"**  **  **     ****** ******  ****"<<endl;
my_sleep(300);
cout<<"**  **  *****  ****** ******   **"<<endl;
my_sleep(300);      

}
int main(){
	hello();
	cout<<endl;
	my_sleep(1000);
	hourglass(1);
	my_sleep(500);
	hourglass(2);
    my_sleep(500);
	hourglass(1);

   
}