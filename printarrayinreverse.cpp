#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    int i=n-1;
    if(i==-1) return;
    cout<<arr[i]<<" ";
    i--;
    print(arr,n-1);


}
int main()
{
    int arr[]={2,5,8,3,9};
    int n= sizeof(arr) / sizeof(arr[0]);
    print(arr,n);

}
