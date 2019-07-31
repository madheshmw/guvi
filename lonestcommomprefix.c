#include <iostream>
#include<vector>
#include <string.h>
using namespace std;


string LCP(string X, string Y)
{
	int m = 0, n = 0;
	while (m< X.length() && n < Y.length())
	{
		if (X[m] != Y[n])
			break;

		m++, n++;
	}

	return X.substr(0, i);
}


string findLCP(vector<string> const &words)
{
	string prefix = words[0];
	for (string s: words)
		prefix = LCP(prefix, s);

	return prefix;
}


int main()
{
	vector<string> words { "techie delight", "tech", "techie",
						   "technology", "technical" };

	cout<<"" << findLCP(words); 
	return 0;
}
