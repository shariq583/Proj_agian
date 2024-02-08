/*
Exersise Questions :
    Creating Simple and scientific cal and also inherite them to a Hybrid cal class
    */
// Answer :
#include<iostream>
#include<cmath>
#include <string>
#define _USE_MATH_DEFINES
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
        return (cos(num1_S * M_PI / 180.0)); 
    }
    else if (chs=="sin" || chs=="Sin" || chs=="SIN")
    {
       return (sin(num1_S * M_PI / 180.0)); 
    }
    else if (chs=="tan" || chs=="Tan" || chs=="TAN")
    {
       return (tan(num1_S * M_PI / 180.0)); 
    }    
    else 
    {
        return 0;
    }
    }

};
class HybCal : public SimpleCal , public SciCal
{

    public :
    void PrRes (string chH)
    {
        if (chH=="+" || chH=="-" || chH=="*" || chH=="/")
        {
            cout<<"The result of "<<num1_P<<chH<<num2_P<<"is :"<<SimCal(chH)<<endl;
        }
        else if (chH=="cos" || chH=="Cos" || chH=="COS" || chH=="sin"|| chH=="Sin" ||chH=="SIN" || chH=="tan" || chH=="Tan" || chH=="TAN")
        {
            cout<<"The result of "<<chH<<"("<<num1_S<<")"<<"is :"<<SfiCal(chH)<<endl;
        }
        else
        {
            cout<<"\nSyntax Error!";
        }
    }



};


int main()
{

}