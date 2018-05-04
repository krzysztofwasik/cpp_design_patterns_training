//
//  BankFactory.hpp
//  application_001
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef BankFactory_hpp
#define BankFactory_hpp

#include <stdio.h>
#include "BankFactoryBase.hpp"

class BankFactory : BankFactoryBase
{
    public:
        BankFactory() = default;
        SavingsAccountBase* GetBankAccount(std::string bankAccountNumber);
};

#endif /* BankFactory_hpp */
