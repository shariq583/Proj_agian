/*
Exersise Questions :
    Creating Simple and scientific cal and also inherite them to a Hybrid cal class
    */
// Answer :
#include<iostream>
#include<cmath>
using namespace std;
class SimpleCal
{
    public :
    SimpleCal()
    {
        num1_P=0;
        num2_P=0;
    }
    SimpleCal(int a , int b)
    {
        num1_P=a;
        num2_P=b;
    }
    protected :
    float num1_P;
    float num2_P;
    public :
    float SimCal (string ch){
    if (ch=="+")
    {
        return num1_P+num2_P;
    }
    else if (ch=="-")
    {
        return num1_P-num2_P;
    }
    else if (ch=="*")
    {
        return num1_P*num2_P;
    }
    else if (ch=="/")
    {
        return num1_P/num2_P;
    }
    else 
    {
        return 0;
    }
    }
};
class SciCal
{
public :
    protected :
    float num1_S;
    float num2_S;
    public :
    SciCal()
    {
        num1_S=0;
        num2_S=0;
    }
    SciCal(int a )
    {
        num1_S=a;
    }
    public :
    float SfiCal (string chs){
    if (chs=="cos" || chs=="Cos" || chs=="COS")
    {
        return (cos(num1_S));
    }
    else if (chs=="sin" || chs=="Sin" || chs=="SIN")
    {
       return (sin(num1_S));
    }
    else if (chs=="tan" || chs=="Tan" || chs=="TAN")
    {
       return (tan(num1_S));

    }    
    else 
    {
        return 0;
    }
    }

};


int main()
{
    SciCal a(90);    
    cout<< a.SfiCal("sin");

}