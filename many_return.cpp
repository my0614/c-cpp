

#include <iostream>
#include <tuple>
#include <string>

using namespace std;
auto return_many()
{
	return make_tuple(1, "min", 3.14);
}

int main()
{
	auto val = return_many();
	cout << get<0>(val) << endl;
	cout << get<1>(val) << endl;
	cout << get<2>(val) << endl;
}
