#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int alpha = 0; // N
int beta = 0;
int minimum = 0;
int theta = 0;
int epsilon = 0;

vector<int> gamma;
vector<int> delta;

int main(void)
{
	cin >> alpha;
	for (int i = 0; i < alpha; ++i)
	{
		cin >> beta;
		gamma.push_back(beta);
	}
	minimum = *min_element(gamma.begin(), gamma.end());
	for (auto delta : gamma)
	{
		theta = (delta - minimum);
		epsilon = (epsilon + theta);
	}
	cout << epsilon;
	return 0;
}