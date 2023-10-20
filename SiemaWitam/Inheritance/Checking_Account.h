#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

#pragma once

class Checking_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);

public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);

protected:
    const double flat_fee = 1.5;

private:
    static constexpr const char *def_name = "Unamed Checking Account";
    static constexpr double def_balance = 0.0;
};

#endif