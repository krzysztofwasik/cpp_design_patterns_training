//
//  BankFactoryProvider.hpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef BankFactoryProvider_hpp
#define BankFactoryProvider_hpp

#include <stdio.h>
#include <iostream>
#include "BankFactoryBase.hpp"
#include "CitiBank.hpp"
#include "PekaoBank.hpp"

class BankFactoryProvider
{
public:
    BankFactoryBase* GetBankFactory(std::string bankAccountNumber);
};
#endif /* BankFactoryProvider_hpp */
