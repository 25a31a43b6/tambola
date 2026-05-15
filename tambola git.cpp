#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main(){
int max=99,min=1,i,arr[99],j,k;
char command[300];
srand(time(NULL));
int d=(rand()%(max-min+1))+min;
arr[0]=d;
for(i=1;i<=98;i++){
int f=(rand()%(max-min+1))+min;
for(j=0;j<i;j++){
if(f!=arr[j]){
arr[i]=f;
}
else{
i--;
break;
}
}
}
for(k=0;k<=98;k++){
cout<<arr[k]<<" ";
Sleep(2000);
}
return 0;
}
