#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-1;j++)
       {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
       } 
    }
}
int main()
{
    int n;
    int a[10];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter"<<n<<"integers in any order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    cout<<"sorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }
    cout<<endl;
    return 0;
}
/*
PS C:\Users\Students> cd "d:\Swarupa44\" ; if ($?) { g++ bubble.cpp -o bubble } ; if ($?) { .\bubble }
enter the size of array:5
enter5integers in any order:
10
70
45
21
56
sorted array:1021455670
PS D:\Swarupa44> 
*/

