#include <iostream>
using namespace std;
class cred
{
public:
    string userPin;
    string adminPin;
    string 
    cred()
    {
        userPin = "0000";
        adminPin = "0000";
    }
    void setUserCred(string inpUserPin)
    {
        userPin = inpUserPin;
    }
    void setAdminCred(string inpAdminPin)
    {
        adminPin = inpAdminPin;
    }
};

int main()
{
    // Variables and objects 
    int Mchoice;
    int Uchoice;
    cred Ucred;

    std::cout << "=========" << std::endl;
    std::cout << "Bank App" << std::endl;
    std::cout << "=========" << std::endl;

    std::cout << "Who are you ?" << std::endl;
    std::cout << "1.User..." << std::endl;
    std::cout << "2.Admin..." << std::endl;
    cin >> Mchoice;

    switch (Mchoice)
    {
    case 1:
        std::cout << "1.Sign Up!" << std::endl;
        std::cout << "2.Log In!" << std::endl;
        cin >> Uchoice;
        switch (Uchoice)
            {
            case 1:
                
                break;

            default: //UChoice
                break;
            }
            break;

    default: //Mchoice
        break;
    }
}