#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    Employee()
    {id = 0;}
    Employee(int inp)
    {
        id = inp;
    }
};
class Programer : public Employee
{};
int main()
{
    
}