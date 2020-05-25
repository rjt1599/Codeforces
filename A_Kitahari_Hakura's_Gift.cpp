#include<iostream>
#define ll long long

int main()
{
		#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int n;
    std::cin >> n;
    int c1 {}, c2 {};

    for(int i = 0; i < n; i++)
    {
    	int w;
    	std::cin >> w;
    	if(w == 100) c1++;
    	else c2++;
    }
    // std::cout << c1 << " " << c2;
    if((c2 * 2 + c1) % 2 != 0 )std::cout << "NO";
    else if((c2 * 2 + c1)%4 == 0)std::cout << "YES";
    else if((c2* 2 + c1) / 2 > ((c2 + 1)/2) * 2) std::cout << "YES";
    else std::cout << "NO";
    
    return 0;
}