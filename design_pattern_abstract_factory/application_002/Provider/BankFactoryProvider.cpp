//
//  BankFactoryProvider.cpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include "BankFactoryProvider.hpp"

BankFactoryBase* BankFactoryProvider::GetBankFactory(std::string bankAccountNumber)
{

    if (bankAccountNumber.find("citi") != std::string::npos)
    {
        return new CitiBank();
    }
    else if (bankAccountNumber.find("pekao") != std::string::npos)
    {
        return new PekaoBank();
    }
    
    throw std::invalid_argument("Provided bank account number belongs to unsupported bank");
}

