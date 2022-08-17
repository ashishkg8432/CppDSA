// #include<bits/stdc++.h>
// using namespace std;
// //naive approach
// int removeDuplicates(int arr[],int n)
// {
//     int temp[n];
//     temp[0]=arr[0];
//     int res=1;
//     for(int i=1;i<n;i++)
//     {
//         if(temp[res-1]!=arr[i])
//         {
//             temp[res]=arr[i];
//             res++;
//         }
//     }
//     for(int i=0;i<res;i++)
//     {
//         arr[i]=temp[i];
//     }
//     return res;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Before removal:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;
//     n=removeDuplicates(arr,n);
//    cout<<"After removal:";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//20 10 20 10 20
//efficient approach
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Before removal:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    n=removeDuplicates(arr,n);
   cout<<"After removal:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}