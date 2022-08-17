// #include<bits/stdc++.h>
// using namespace std;
// //Efficient Code
// void All_divisors(int n)
// {
//     for(int i=1;i*i<=n;i++)
//     {
//         if(n%i==0){
//         cout<<i<<" ";
//         if(i!=(n/i))
//         cout<<(n/i)<<" ";
//         }
//     }
// }
// int main()
// {
// int x;
// cin>>x;
// All_divisors(x);
// }

//Efficient Code with Sorted Order
#include <iostream>
#include <limits.h>
using namespace std;

 void printDivisors(int n)
{
	int i = 1;
	for(i=1; i*i < n; i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
		}
	}

	for(; i >= 1; i--)
	{
		if(n % i == 0)
		{
			cout<<(n / i)<<" ";
		}
	}
}

int main() {
    
    	int n;
        cin>>n;
    	
    	printDivisors(n);
    	
    	return 0;
}