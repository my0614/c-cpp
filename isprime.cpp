#include <iostream>
#include <vector>
#include <string>

using namespace std;

int prime(int num)
{	
	for (int i = 2; i <= num/2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	
	return  true;
}
int main()
{
	vector<int> v;
	for (int i = 2; i <= 100; i++)
		v.push_back(i);
	
	for (auto i = v.begin(); i != v.end(); i++)
	{
		if (prime(*i) == false)
		{
			i = v.erase(i);
			i--;
		}
	}
	for (auto i : v) // vector에 뭐가 들어있을때까지
	{
		cout << i << endl;
	}

}
