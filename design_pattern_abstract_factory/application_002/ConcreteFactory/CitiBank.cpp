//
//  CitiBank.cpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include "CitiBank.hpp"

SavingsAccountBase*
CitiBank::CreateSavingsAccount()
{
    return new CitiSavingsAccount();
};

LoanAccountBase*
CitiBank::CreateLoanAccount()
{
    return new CitiLoanAccount();
}

