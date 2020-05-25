#include<iostream>
#include<climits>
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
    ll index = -1;
    ll l_max = LLONG_MAX;
    ll r_max = LLONG_MIN;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
    	ll l, r;
    	std::cin >> l >> r;

    	if((l <= l_max) && (r >= r_max))
    	{
    		l_max = l;
    		r_max = r;
    		index = i;
    	}
    	else if(!(l >= l_max && r <= r_max)){
    		l_max = (l < l_max)?(l):(l_max);
    		r_max = (r > r_max)?(r):(r_max);
    		index = -1;
    	}
    	// std::cout << l_max << " " << r_max << " "<<index<<std::endl;
    }

    std::cout << index;
    
    return 0;
}