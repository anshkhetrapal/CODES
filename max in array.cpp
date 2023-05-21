#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print(int arr[],int n)
{
    //int max1=;
    if(n==1) return arr[0];
    return max(arr[n-1],print(arr,n-1));

}
int main()
{
    int arr[]={20,5,8,10,3,9};
    int n= sizeof(arr) / sizeof(arr[0]);
    int ans=print(arr,n);
    cout<<ans;

}
