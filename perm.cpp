#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string input;
	vector<string> dictionary;
	
	while ( cin >> test )  // do EOF
	{
		dictionary.push_back(test);
	}

	int count = (int)dictionary.size();
	sort(dictionary.begin(), dictionary.end());

	do {
		for ( int i = 0; i < count; i++)
		{
			if ( i == 0 )
				cout << dictionary[i];
			else
				cout << " " << dictionary[i];
		}
		cout << endl;
  	} while ( next_permutation(dictionary.begin(), dictionary.end()) ); // next_permutation vrati nasledujici vyssi permutaci, pri nejvyssi vraci false

	return 0;
}