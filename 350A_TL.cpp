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

    int n, m, min , max;
    std::cin >> n >> m;
    min = INT_MAX;
    max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
    	int val;
    	std::cin >> val;
    	if(val > max) max = val;
    	if(val < min) min = val;
    }

    int min2 = INT_MAX;
    for(int i = 0; i < m; i++)
    {
    	int val;
    	std::cin >> val;
    	if(val < min2) min2 = val;
    }

    int tl = (max > 2 * min)?(max):(2 * min);

    if(tl < min2) std::cout << tl;
    else std::cout << -1;

    return 0;
}