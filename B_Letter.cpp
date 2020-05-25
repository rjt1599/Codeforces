#include<iostream>
#include<cstdio>
#include<cstring>
#define ll long long
#define MAX 200

int main()
{
		#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int hash[60] {};

    // std::string s1, s2;
    // std::cin >> s1;
    // std::cin >> s2;

    char s1[MAX];
    char s2[MAX];

    //read till end of line.
    scanf("%[^\n]", s1);
    getchar();
    scanf("%[^\n]", s2);

    // std::cout << s1 << std::endl <<s2 <<std::endl;


    for(auto it = 0; it <strlen(s1); it++)
        {	
    	if(s1[it] == ' ') continue;
    	else if(static_cast<int>(s1[it]) >= 97)
    	{
    		hash[26 + static_cast<int>(s1[it]) - 96]++;
    	}
    	else
    	{
    		hash[static_cast<int>(s1[it]) - 64]++;
    	}
    }

    for(auto it = 0; it != strlen(s2); it++)
    {
    	if(s2[it] == ' ') continue;
    	else if(static_cast<int>(s2[it]) >= 97)
    	{
    		if(hash[26 + static_cast<int>(s2[it]) - 96] <= 0)
    		{
    			std::cout << "NO";
    			return 0;
    		}
    		else hash[26 + static_cast<int>(s2[it]) - 96]--;
    	}

    	else
    	{
    		if(hash[static_cast<int>(s2[it]) - 64] <= 0)
    		{
    			std::cout << "NO";
    			return 0;
    		}
    		else hash[static_cast<int>(s2[it]) - 64]--;
    	}
    }

    std::cout <<"YES";
    // std::cout << "Hello";
    
    return 0;
}