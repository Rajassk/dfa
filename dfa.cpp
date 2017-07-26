#include<iostream>
#include<string.h>
using namespace std;
class lang
{
	string a,q,s,n;
	char **t;
public:
	lang()
	{
		cout<<"Enter the set of input symbols\n";
		cin>>s;
		cout<<"Enter the set of states\n";
		cin>>q;
		cout<<"Enter the set of final states\n";
		cin>>a;
		t=new char*[q.length()];
		for(int i=0;i<q.length();i++)
			t[i]=new char[s.length()];
		cout<<"Enter the transition matrix";
		for(int i=0;i<q.length();i++)
		{
			for(int j=0;j<s.length();j++)
			{
				cin>>t[i][j];
			}
		}
		cout<<"Enter the string to be checked\n";
		cin>>n;
	}
	void check()
	{
		int i=0,k=0;
		char c;
		while(i<n.length())
		{
			int b=0;
			while(b<s.length())
			{
				if(n[i]==s[b])
					break;
				b++;
			}
		    c=t[k][b];
			int l=0;
			while(l<q.length())
			{
				if(q[l]==c)
					break;
				l++;
			}
			k=l;
			i++;

		}
		int b=0,o=0;
		while(b<a.length())
		{
			if(c==a[b])
            {
                o++;
				cout<<"Valid string\n";
				break;
            }
			b++;
		}
		if(o==0)
            cout<<"Invalid string\n";

	}
};
int main(int argc,char *argv[])
{
	lang l;
	l.check();
	return 0;
}