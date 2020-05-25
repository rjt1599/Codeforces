#include<iostream>
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

    int n;
    int max = 0;
    std::cin >> n;
    int arr[1001] {0};
    for(int i = 1; i <=n; i++)
    {
    	int a;
    	std::cin >> a;
    	arr[a]++;
    	if(arr[a] > max)
    	{
    		max = arr[a];
    	}
    }
    if(max <= (n + 1)/2)
    {
    	std::cout << "YES";
    }
    else
    {
    	std::cout << "NO";
    }
    
    return 0;
}