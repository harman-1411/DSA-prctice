/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int first(int arr[],int n,int key){

int low=0,high=n-1,mid;
int result=-1;
while(low<=high){
    mid=low+(high-low)/2;
    
    if(arr[mid]==key){
        result=mid;
        high=mid-1;
    }
    else if(arr[mid]<key){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }
    return result;
}
int main(){
    int arr[]={2,4,4,4,6,9};
    int key=4;
    int n=6;
    int result=first(arr,n,key);
    if(result!=-1){
         cout<<"first occurance of"<<key<<"is at index"<<result;
}
else{
    cout<<"element not found";
}
return 0;
}
        
    
   


