#include<iostream>
#include<vector>
using namespace std;
class test
{
	public:
		int a,b;
};
int main()
{
	vector<test> m;
	test n;
	n.a=2;
	n.b=3;
	m.push_back(n);
	std::cout<<m[0].a;
	return 0;
}
