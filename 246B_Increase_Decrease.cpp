#include<iostream>
#include<vector>
#include<climits>
#include<string>
#define ll long long
#define REP(i,l,r) for((i)=(l);(i)<=(r);++(i))
#define REP2(i,l,r) for((i)=(l);(i)!=(r);++(i))

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    ll n;
    std::cin >> n;
    ll sum = 0;
    std::vector<ll> arr(n);
    for(int i = 0; i < n; i++)
    {	
    	ll val;
    	std::cin >> val;
    	sum += val;
    	arr[i] = val;
    	// std::cout << val << " ";
    }

    // if(sum % 2 == 0)
    // {
    // 	std::cout << n;
    // }
    // else
    // {
    // 	std::cout << n - 1;
    // }
    if(sum % n == 0) std::cout << n;
    else std::cout << n -1;
    
    return 0;
}