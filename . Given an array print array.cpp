#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int i)
{
    if(n==i) return ;
    cout<<arr[n]<<" ";
    print(arr,n+1,i);


}
int main()
{
    int arr[]={2,5,8,3,9};
    int i= sizeof(arr) / sizeof(arr[0]);
    print(arr,0,i);

}
