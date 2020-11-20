//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; //c++ 사용할때 기본적으로 쓰는 namespace 

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	//vec.erase(++vec.begin());
	// vec.begin()과 end()사용해보기
	auto i = vec.begin();
	i.operator++();
	vec.erase(i);
	    
	for (auto i = vec.begin(); i != vec.end(); i++)
	{
		cout << *i << endl;
	}

}
