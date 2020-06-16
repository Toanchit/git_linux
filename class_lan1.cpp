#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
class Candidate
{
	public:
	string ten;
	int ma;
	int diemtoan;
	
};
class Test
{
	vector<Candidate> b;
	Candidate a;
	public:
	int n;
	void nhapthongtin()
	{
		cout<<"nhap gia tri n"<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"nhap ten hoc sinh thu "<<i<<" "<<endl;
			cin>>a.ten;
			cout<<"nhap ma hoc sinh : "<<endl;
			cin>>a.ma;
			cout<<"nhap diem toan cua hs do : "<<endl;
			cin>>a.diemtoan;
			b.push_back(a);
		}
	
	}
	void in()
	{
		cout<<"cac hoc sinh co diem toan tren 8 la"<<endl;
		for(int i=0;i<n;i++)
		{
			if(b[i].diemtoan>8)
			{
				cout<<b[i].ten<<": "<<b[i].diemtoan<<endl;
			}
		}
	}	
};
int main()
{
	Test t;
	t.nhapthongtin();
	t.in();
}
