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

   std::string s1, s2;
   std::cin >> s1 >> s2;

  if(s1.size() != s2.size())
  {
  	std::cout << "NO";
  	return 0;
  }

  // ll hash1[26]{};
  // ll hash2[26]{};
  // for(auto it = s1.begin(); it!=s1.end(); it++ )
  // {
  // 	hash1[static_cast<int>(*it) - 97]++;
  // }
  // for(auto it = s2.begin(); it!=s2.end(); it++ )
  // {
  // 	hash2[static_cast<int>(*it) - 97]++;
  // }
  int diff = 0;
  int index = -1;
  for(int i = 0; i < s1.size(); i++)
  {
  		if(s1[i] != s2[i])
  		{
  			if(index == -1)
  			{
  				index = i;
  				diff = 1;

  			}
  			else
  			{
  				if(diff == 1)
  				{
  					if(s1[index] == s2[i] && s1[i] == s2[index]) 
  						{
  							diff = 2;
  							continue;
  							
  						}
  					else
  					{
  						std::cout << "NO";
  						return 0;
  					}
  				}
  				else
  				{
  					std::cout << "NO";
  					return 0;	
  				}
  			}
  		}
  }
if(index != -1 && diff == 1){
	std::cout << "NO";
	return 0;
}

  std::cout << "YES";

    return 0;
}