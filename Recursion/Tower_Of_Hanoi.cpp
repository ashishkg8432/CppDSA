#include<bits/stdc++.h>
using namespace std;

void toh(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"Move 1 from " <<A << " to " <<C<<endl;
        return;
    }
     toh(n-1,A,C,B);
    cout<<"Move " <<n<<" from "<<A << " to " <<C<<endl;
     toh(n-1,B,A,C);
}
int main()
{
    int n;
    cin>>n;
    char A,B,C;
    cin>>A>>B>>C;
    toh(n,A,B,C);
    return 0;
}
