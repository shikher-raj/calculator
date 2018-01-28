#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <conio.h>
#define ll ;long double
#define f(i) for(int i=0;i<2000000000;i++)
using namespace std;
string name,sal,call;
//introduction to the user
void Introduction()
{
	printf("Hello There\nI am your friend Chhota Calci\nFirst, tell me about yourself\nAre you male/female? : \n");
	string a;
	cin>>a;
	if(a=="male"||a=="MALE"||a=="M")
	{
		sal="sir";
		call="handsome ";
	}
	else
	{
		sal="madam";
		call="beautiful ";
	}
	cout<<"please tell me your good name, "+sal<<"? : \n";
	cin>>name;
	cout<<"Ok "+call+sal;
	printf(", Let's Begin : \n");
	printf("Loading.........\n");
	f(i);
	printf("Intialising........\n");
	f(i);
}
void Index()
{
	printf("A ::: Arithmetics\nT ::: Trigonometry\nL ::: Logarithm\nE ::: Equations\n");
}
//arithmetics
void arithmetic_keys()
{
	printf("+ ::: add\n- ::: subtract\n* ::: multiply\n/ ::: divide\n% ::: remainder\n^ ::: power\nsqrt ::: square root\n");
}
void add()
{
	printf("Enter the Numbers:\t");
	ll a,b;
	cin>>a>>b;
	printf("the sum is:\t");
	cout<<a+b<<"\n";
}
void subtract()
{
	printf("Enter the Numbers:\t");
	ll a,b;
	cin>>a>>b;
	printf("the difference is:\t");
	cout<<a-b<<"\n";
}
void multiply()
{
	printf("Enter the Numbers:\t");
	ll a,b;
	cin>>a>>b;
	printf("the product is:\t");
	cout<<a*b<<"\n";
}
void divide()
{
	printf("Enter the Numbers:\t");
	ll a,b;
	cin>>a>>b;
	while(b==0)
	{
		printf("Division is not defined\n");
		printf("re-enter b : \n");
		cin>>b;
	}
	printf("the quotient is:\t");
	cout<<a/b<<"\n";
}
void remainder()
{
	printf("Enter the Numbers:\t");
	ll a,b;
	cin>>a>>b;
	while(b==0)
	{
		printf("Division is not defined\n");
		printf("re-enter b : \n");
		cin>>b;
	}
	printf("the remainder is:\t");
	cout<<(int)a%(int)b<<"\n";
}
void exponent()
{
	printf("Enter the Numbers:\t");
	ll a,b;
	cin>>a>>b;
	printf("the result is:\t");
	cout<<pow(a,b)<<"\n";
}
void square_root()
{
	printf("Enter the Number:\t");
	ll a;
	cin>>a;
	while(a<0)
	{
		printf("Square root is not defined\n");
		printf("Please re-enter a :\t");
		cin>>a;
	}
	printf("the result is:\t");
	cout<<sqrt(a)<<"\n";
}
void Arithmetics()
{
	arithmetic_keys();
	printf("Enter your choice : \n");
	string s;
	cin>>s;
	if(s=="+")
		add();
	else if(s=="-")
		subtract();
	else if(s=="*")
		multiply();
	else if(s=="/")
		divide();
	else if(s=="%")
		remainder();
	else if(s=="^")
		exponent();
	else if(s=="sqrt")
		square_root();
}
//trigonometry
void trigonometric_keys()
{
	//trigonometric
	printf("sin ::: sine\ncos ::: cosine\ntan ::: tangent\ncosec ::: cosecant\nsec ::: secant\ncot ::: cotangent\n");
	//inverse trigonometric
	printf("sin_inv ::: sine inverse\ncos_inv ::: cosine inverse\ntan_inv ::: tangent inerse\ncosec_inv ::: cosecant inverse\nsec_inv ::: secant inverse\ncot_inv ::: cotangent inverse\n");
	//hyperbolic fuctions
	printf("sinh ::: sine hyperbolic\ncosh ::: cosine hyperbolic\ntanh ::: tangent hyperbolic\ncosech ::: cosecant hyperbolic\nsech ::: secant hyperbolic\ncoth ::: cotangent hyperbolic\n");
}
void sine()
{
	printf("Enter the angle in radians:\t");
	ll a;
	cin>>a;
	printf("sin(");cout<<a<<") = ";
	cout<<sin(a)<<"\n";
}
void cosine()
{
	printf("Enter the angle in radians:\t");
	ll a;
	cin>>a;
	printf("cos(");cout<<a<<") = ";
	cout<<cos(a)<<"\n";
}
void tangent()
{
	printf("Enter the angle in radians:\t");
	ll a;
	cin>>a;
	printf("tan(");cout<<a<<") = ";
	cout<<tan(a)<<"\n";
}
void cosecant()
{
	printf("Enter the angle in radians:\t");
	ll a;
	cin>>a;
	while(a==0)
	{
		printf("cosecant is not defined\n");
		printf("re-enter a : \n");
		cin>>a;
	}
	printf("cosec(");cout<<a<<") = ";
	cout<<1/sin(a)<<"\n";
}
void secant()
{
	printf("Enter the angle in radians:\t");
	ll a;
	cin>>a;
	printf("sec(");cout<<a<<") = ";
	cout<<1/cos(a)<<"\n";
}
void cotangent()
{
	printf("Enter the angle in radians:\t");
	ll a;
	cin>>a;
	while(a==0)
	{
		printf("cotangent is not defined\n");
		printf("re-enter a : \n");
		cin>>a;
	}
	printf("cot(");cout<<a<<") = ";
	cout<<1/tan(a)<<"\n";
}
void sine_inv()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("sin^-1(");cout<<a<<") = ";
	cout<<asin(a)<<"\n";
}
void cosine_inv()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("cos^-1(");cout<<a<<") = ";
	cout<<acos(a)<<"\n";
}
void tangent_inv()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("tan^-1(");cout<<a<<") = ";
	cout<<atan(a)<<"\n";
}
void cosecant_inv()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("cosec^-1(");cout<<a<<") = ";
	cout<<asin(1/a)<<"\n";
}
void secant_inv()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("sec^-1(");cout<<a<<") = ";
	cout<<acos(1/a)<<"\n";
}
void cotangent_inv()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("cot^-1(");cout<<a<<") = ";
	cout<<atan(1/a)<<"\n";
}
void sineH()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("sinh(");cout<<a<<") = ";
	cout<<sinh(a)<<"\n";
}
void cosineH()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("cosh(");cout<<a<<") = ";
	cout<<cosh(a)<<"\n";
}
void tangentH()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("tanh(");cout<<a<<") = ";
	cout<<tanh(a)<<"\n";
}
void cosecantH()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("cosech(");cout<<a<<") = ";
	cout<<1/sinh(a)<<"\n";
}
void secantH()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("sech(");cout<<a<<") = ";
	cout<<1/cosh(a)<<"\n";
}
void cotangentH()
{
	printf("Enter the value:\t");
	ll a;
	cin>>a;
	printf("coth(");cout<<a<<") = ";
	cout<<1/tanh(a)<<"\n";
}
void Trigonometry()
{
	trigonometric_keys();
	printf("Enter your choice : \n");
	string s;
	cin>>s;
	if(s=="sin")
		sine();
	else if(s=="cos")
		cosine();
	else if(s=="tan")
		tangent();
	else if(s=="cosec")
		cosecant();
	else if(s=="sec")
		secant();
	else if(s=="cot")
		cotangent();
	else if(s=="sin_inv")
		sine_inv();
	else if(s=="cos_inv")
		cosine_inv();
	else if(s=="tan_inv")
		tangent_inv();
	else if(s=="cosec_inv")
		cosecant_inv();
	else if(s=="sec_inv")
		secant_inv();
	else if(s=="cot_inv")
		cotangent_inv();
	else if(s=="sinh")
		sineH();
	else if(s=="cosh")
		cosineH();
	else if(s=="tanh")
		tangentH();
	else if(s=="cosech")
		cosecantH();
	else if(s=="sech")
		secantH();
	else if(s=="coth")
		cotangentH();
}
//logarithm
void logarithmic_keys()
{
	printf("log ::: Natural log\nlogt ::: Log to the base ten\nlogn ::: Log to the given base\nexp ::: exponential");
}
void Natural_log()
{
	printf("Enter the value :\t");
	ll a;
	cin>>a;
	printf("loge(");cout<<a<<") = ";
	cout<<log(a)<<"\n";
}
void Log10()
{
	printf("Enter the value :\t");
	ll a;
	cin>>a;
	printf("log10(");cout<<a<<") = ";
	cout<<log10(a)<<"\n";
}
void LogB()
{
	printf("Enter the base :\t");
	ll b;
	cin>>b;
	printf("Enter the value :\t");
	ll a;
	cin>>a;
	printf("log");cout<<b<<"("<<a<<") = ";
	cout<<log(a)/log(b)<<"\n";
}
void Exponential()
{
	printf("Enter the value :\t");
	ll a;
	cin>>a;
	printf("exp(");cout<<a<<") = ";
	cout<<exp(a)<<"\n";
}
void Logarithm()
{
	logarithmic_keys();
	printf("Enter your choice : \n");
	string s;
	cin>>s;
	if(s=="log")
		Natural_log();
	else if(s=="logt")
		Log10();
	else if(s=="logn")
		LogB();
	else if(s=="exp")
		Exponential();
}
//equations
void equation_keys()
{
	printf("quad ::: Quadratic Equation\nl1 ::: Linear Equation in One Variable\nl2 ::: Linear Equation in two Variable\n");
}
void Quadratic()
{
	printf("Equation of Type a*x^2+b*x+c=0\n")
	ll a,b,c;
	printf("Enter Values of a,b & c :\n");
	printf("a = ");
	cin>>a;
	printf("b = ");
	cin>>b;
	printf("c = ");
	cin>>c;
	if(a==0)
	{
		printf("Equation is not quadratic\n");
		return;
	}
	ll d=b*b-4*a*c;
	if(d<0)
	{
		printf("The equation has imaginary roots\n");
		return;
	}
	printf("the first solution for x = ");
	cout<<(-b+sqrt(d))/(2*a)<<"\n";
	printf("the second solution for x = ");
	cout<<(-b-sqrt(d))/(2*a)<<"\n";
}
void Linear_1_var()
{
	printf("Equation of Type ax+b=c\n")
	ll a,b,c;
	printf("Enter Values of a,b & c :\n");
	printf("a = ");
	cin>>a;
	printf("b = ");
	cin>>b;
	printf("c = ");
	cin>>c;
	if(a==0)
	{
		printf("It isn't an equation\n");
		return;
	}
	printf("the solution for x = ");
	cout<<(c-b)/a;
}
void Linear_2_var()
{
	printf("Equations of Type a1*x+b1*y=c1 & a2*x+b2*y=c2\n")
	ll a1,b1,c1,a2,b2,c2;
	printf("Enter Values of a1,b1 & c1 :\n");
	printf("a1 = ");
	cin>>a1;
	printf("b1 = ");
	cin>>b1;
	printf("c1 = ");
	cin>>c1;
	printf("Enter Values of a2,b2 & c2 :\n");
	printf("a2 = ");
	cin>>a2;
	printf("b2 = ");
	cin>>b2;
	printf("c2 = ");
	cin>>c2;
	ll d=a1*b2-a2*b1;
	if(d==0)
	{
		printf("Equations are not solvable\n");
		return;
	}
	ll dx=b1*c2-b2*c1,dy=a1*c2-a2*c1;
	printf("The solution for x = ");
	cout<<-dx/d<<"\n";
	printf("The solution for y = ");
	cout<<dy/d<<"\n";
}
void Equation()
{
	printf("Enter your choice : \n");
	equation_keys();
	string s;
	cin>>s;
	if(s=="quad")
		Quadratic();
	else if(s=="l1")
		Linear_1_var();
	else if(s=="l2")
		Linear_2_var();
}
void command()
{
	printf("Enter your choice : \n");
	string str;
	cin>>str;
	if(str=="A")
	{
		Arithmetics();
	}
	else if(str=="T")
	{
		Trigonometry();
	}
	else if(str=="L")
	{
		Logarithm();
	}
	else if(str=="E")
	{
		Equation();
	}
}
int main()
{
	Introduction();
	while(1)
	{
		Index();
		command();
		cout<<"Dear "+sal;
		printf(", The window looks pretty messy. Do you want me to clear the screen? : (Y/N)\n");
		char a;
		cin>>a;
		if(a=='Y'||a=='y')
			system("cls");
		cout<<"Dear "+name+" "+sal;
		printf(", Do you want to stop working? : (Y/N)\n");
		char b;
		cin>>b;
		if(b=='Y'||b=='y')
		{
			cout<<"GOODBYE "+call+sal<<", Have a good day!\n";
			break;
		}
		else
			cout<<"Let's continue then "+call+sal<<"\n";
	}
	return 0;
}
