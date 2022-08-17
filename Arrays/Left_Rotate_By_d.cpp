// #include<bits/stdc++.h>
// using namespace std;

// void leftrotateby1(int arr[],int n)
// {
//     int temp=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// void leftrotate(int arr[],int n,int d)
// {
//     for(int i=0;i<d;i++)
//     leftrotateby1(arr,n);
// }
// int main()
// {
//     int n,d;
//     cin>>n>>d;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;
//     leftrotate(arr,n,d);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }
//efficient method(reversal algo)
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
    swap(arr[low],arr[high]);
    low++;
    high--;

    }
}
void rotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);//swaps first and dth element
    reverse(arr,d,n-1);//swaps d elements
    reverse(arr,0,n-1);//reverses the whole array
}


int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    rotate(arr,n,d);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     return 0;
}
