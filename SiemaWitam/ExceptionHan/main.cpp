#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    try
    {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", 100);
        moes_account->withdraw(1000);
    }
    catch(const IllegalBalanceException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const InsufficentFundsException& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

