#include<iostream>
using namespace std;

class mark
{

	protected:
		float tamil,eng,math,scc,sss;
		
	
	public:
		mark(int t,int e,int m,int sc,int ss)
		{
		
		tamil=t;
		eng=e;
		math=m;
		scc=sc;
		sss=ss;
		}
		int getTamil()
		{
		return tamil;
		}
		
		int getEng()
		{
		
		return eng;
		
		}
		int getMath()
		{
		return math;
		
		}

		int getsc()
		{
		
		return scc;
		}
		
		int getss()
		{
		return sss;
		}

	
};

class mark2:public mark
{
	public:
		mark2(int t,int e,int m,int sc,int ss) :mark(t,e,m,sc,ss)
		{
		
		}
		int getTotal()
		{
		return tamil+eng+math+scc+sss;
		}
};


int main()
{
    int a,b,c,d,e;
    cout<<endl<<"Enter Tamil Mark :";
    cin>>a;
    cout<<endl<<"Enter English Mark :";
    cin>>b;
    cout<<endl<<"Enter Maths Mark :";
    cin>>c;
    cout<<endl<<"Enter Science Mark :";
    cin>>d;
    cout<<endl<<"Enter Social Science Mark :";
    cin>>e;
	mark2 t(a,b,c,d,e);
	
	
	cout<<endl<<"Tamil    :"<<t.getTamil();
	cout<<endl<<"English  :"<<t.getEng();
	cout<<endl<<"Maths  : :"<<t.getMath();
	cout<<endl<<"Science  :"<<t.getsc();
	cout<<endl<<"Social   :"<<t.getss();
    cout<<endl<<"Total    :"<<t.getTotal();
}

