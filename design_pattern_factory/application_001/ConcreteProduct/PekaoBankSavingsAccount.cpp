//
//  PekaoBankSavingsAccount.cpp
//  application_001
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include "PekaoBankSavingsAccount.hpp"

PekaoBankSavingsAccount::PekaoBankSavingsAccount()
{
    _balance = 2000;
}

int PekaoBankSavingsAccount::GetAccountBalance()
{
    return _balance;
}

