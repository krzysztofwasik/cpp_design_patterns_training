//
//  PekaoBankSavingsAccount.hpp
//  application_001
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef PekaoBankSavingsAccount_hpp
#define PekaoBankSavingsAccount_hpp

#include <stdio.h>
#include "SavingsAccountBase.hpp"

#include "SavingsAccountBase.hpp"

class PekaoBankSavingsAccount : public SavingsAccountBase
{
private:
    int _balance;
    
public:
    PekaoBankSavingsAccount();
    int GetAccountBalance();
};

#endif /* PekaoBankSavingsAccount_hpp */
