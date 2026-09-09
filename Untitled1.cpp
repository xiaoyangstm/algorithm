#include "iostream"

using namespace std;

int main()
{
	
	float a,b;
	float c;
	cin>>a>>b>>c;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		b=b+c*(a-b);
	}
	cout<<b<<endl;
	return 0;
}
