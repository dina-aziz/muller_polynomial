#include<iostream>
#include<math.h>
using namespace std;
struct eq
{
    double x3c;
	double x2c;
	double xc;
	double abs;
};
int main()
{
	eq eq1;
	double p0,p1,abs1,abs2,p2,p3,t,h0,h1,a,b,f0,f1,f2;
	cout<<"coeff. of x3:";cin>>eq1.x3c;
	cout<<endl<<"coeff. of x2:";cin>>eq1.x2c;
        cout<<endl<<"coeff. of x:";cin>>eq1.xc;
	cout<<endl<<"abs term:";cin>>eq1.abs;
	cout<<endl<<"p0 :";cin>>p0;
	cout<<endl<<"p1 :";cin>>p1;
	cout<<endl<<"p2 :";cin>>p2;
	for(int j=1;j<=50;j++)
	{
        cout<<endl<<"loop number :"<<j;
	    double c=p2*p2*p2*eq1.x3c+p2*p2*eq1.x2c+p2*eq1.xc+eq1.abs;
		cout<<endl<<"c :"<<c<<endl;
	    h0=p0-p2;
		h1=p1-p2;
		cout<<"h0 :"<<h0<<endl;
		cout<<"h1 :"<<h1<<endl;
        abs1=(eq1.x3c*p1*p1*p1+eq1.x2c*p1*p1+eq1.xc*p1+eq1.abs-c)/h0;
        abs2=(eq1.x3c*p0*p0*p0+eq1.x2c*p0*p0+eq1.xc*p0+eq1.abs-c)/h0;
	 	a=(abs1+abs2)/(h0-h1);
		b=h0*a+abs2;
		cout<<endl<<"a :"<<a;
		cout<<endl<<"b :"<<b;
		cout<<endl<<"f0 :"<<a*h0*h0+b*h0+c;
		cout<<endl<<"f1 :"<<a*h1*h1+b*h1+c;
		cout<<endl<<"f2 :"<<c;
		if(b>0)
			t=(-2*c)/(b+sqrt(b*b-4*a*c));
		else if(b<0)
			t=(-2*c)/(b-sqrt(b*b-4*a*c));
		p3=t+p2;
		cout<<endl<<"z :"<<p3-p2;
		cout<<endl<<"p3 :"<<p3;
		p0=p1;
		p1=p2;
		p2=p3;
		cout<<endl<<"******************************************************";
	}
	return 0;
}



	
 


