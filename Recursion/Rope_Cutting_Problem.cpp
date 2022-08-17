#include<bits/stdc++.h>
using namespace std;

int find_cuts(int n,int a,int b,int c)
{
    if(n==0)
    return 0;
    if(n<=-1)
    return -1;
    int res=max(find_cuts(n-a,a,b,c),
            max(find_cuts(n-b,a,b,c),
                find_cuts(n-c,a,b,c)));
            
    if(res==-1)
    return -1;
    return res+1;
}
int main()
{
    int n,a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    cout<<find_cuts(n,a,b,c);
    return 0;

}