//
//  BankFactoryBase.hpp
//  application_001
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef BankFactoryBase_h
#define BankFactoryBase_h

#include "SavingsAccountBase.hpp"
#include <string>

class BankFactoryBase
{
    public:
    BankFactoryBase() = default;
    
    virtual SavingsAccountBase* GetBankAccount(std::string bankAccountNumber)
    {
        SavingsAccountBase* tmp = new SavingsAccountBase();
        return tmp;
    };
};


#endif /* BankFactoryBase_h */
