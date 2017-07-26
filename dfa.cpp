#include<iostream>
#include<string.h>
using namespace std;
class lang
{
	char a[10],q[10],s[10],q0,t[10][10],n[10];
public:
	lang()
	{
		cout<<"Enter the set of input symbols\n";
		cin>>s;
		cout<<"Enter the set of states\n";
		cin>>q;
		cout<<"Enter the set of final states\n";
		cin>>a;
		cout<<"Enter the transition matrix";
		cout<<strlen(q)<<endl;
		cout<<strlen(s)<<endl;
		for(int i=0;i<strlen(q);i++)\
		{
			for(int j=0;j<strlen(s);j++)
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
		while(i<strlen(n))
		{
			int b=0;
			while(b<strlen(s))
			{
				if(n[i]==s[b])
					break;
				b++;
			}
		    c=t[k][b];
			int l=0;
			while(l<strlen(q))
			{
				if(q[l]==c)
					break;
				l++;
			}
			k=l;
			i++;
		}
		int b=0,o=0;
		while(b<strlen(a))
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