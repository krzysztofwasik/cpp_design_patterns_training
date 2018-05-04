//
//  BankFactory.cpp
//  application_001
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include "BankFactory.hpp"
#include "CitiBankSavingsAccount.hpp"
#include "PekaoBankSavingsAccount.hpp"

SavingsAccountBase* BankFactory::GetBankAccount(std::string bankAccountNumber)
{
    std::string bankPrefix = bankAccountNumber.substr(0,4);
    
    if(bankPrefix == "citi")
    {
        return new CitiBankSavingsAccount();
    }
    else if (bankPrefix == "peka")
    {
        return new PekaoBankSavingsAccount();
    }
    else throw std::invalid_argument("Provided bank account number is not supported");
}
