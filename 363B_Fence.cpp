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

    ll n, k;
    std::cin >> n >> k;

    std::vector<ll> arr;
    std::vector<ll> total(n - k + 1, 0);

    ll index = 0;
    ll min = LLONG_MAX;
    ll sum = 0;

    arr.reserve(n);

    for(ll i = 0; i < n; i++)
    {
    	ll a;
    	std::cin >> a;
    	arr.push_back(a);
        sum += a;
        if(i >= k - 1)
        {
            total[i - k + 1] = sum;
            if(sum < min)
            {
                min = sum;
                index = i - k + 1;
            }
            sum -= arr[i - k + 1];
        }
    }

    
    // for(ll i = 0; i < n - k; i++)
    // {	
    // 	ll sum = 0;
    // 	for(ll j = i; j < i + k; j++)
    // 	{
    // 		sum += arr[j];
    // 	}
    // 	if(sum < min)
    // 	{
    // 		min = sum;
    // 		index = i;
    // 	}

    // 	// std::cout << i << " " << sum <<" " << min << std::endl;
    // }
    std::cout << index + 1;
    
    return 0;
}