#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    :Savings_Account {name, balance, int_rate}, num_of_withdraw {0}{
}

bool Trust_Account::deposit(double amount) {
    if(amount >= bonus_treshold)
        amount += bonus_cash;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    if(amount < max_percentage * balance && num_of_withdraw < max_num_of_withdraws)
    {
        ++num_of_withdraw;
        return Savings_Account::withdraw(amount);
    }
    else
        return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdrawals: " << account.num_of_withdraw <<  "]";
    return os;
}