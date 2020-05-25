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

    std::string s1;
    std::cin >> s1;
    for(ll i = 0; i < s1.size(); i++)
    {
    	if(s1[i] == '0')
    		{
    		std::cout << s1.erase(i, 1);
    		return 0;
    		}
    }
    std::cout << s1.erase(1, 1);
    
    
    return 0;
}