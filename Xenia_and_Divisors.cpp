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

    ll n;
    std::cin >> n;
    ll track[8] {};
    for(ll i = 1; i <= n; i++)
    {
    	int val;
    	std::cin >> val;
    	if(val == 5 || val == 7)
    	{
    		std::cout << -1;
    		return 0;
    	} 
    	track[val]++;
    }

    if(!((track[1] == track[4] + track[6])&&(track[2] + track[3] == track[4] + track[6]) && (track[6] >= track[3]))){
    	std::cout << -1;
    	return 0;
    }

    ll lim = track[4];

   for(ll i = 1; i <= lim; i++)
   {
   	std::cout << 1 << " "<< 2 << " " << 4 << std::endl;
   	track[1]--;
   	track[2]--;
   	track[4]--;
   }
   lim = track[6];
   for(ll i = 1; i <= lim; i++)
   {
   		if(track[1] >0 && track[2] >0)
   		{
   			std::cout<< 1 << " "<<2 << " "<< 6 << std::endl;
   			track[1]--;
   			track[2]--;
   		}

   		else if(track[1] >0 && track[3] >0)
   		{
   			std::cout<< 1 << " "<<3 << " "<< 6 << std::endl;
   			track[1]--;
   			track[3]--;
   		}
   }
    // std::cout << "Hello";
    
    return 0;
}