//
//  PekaoBank.cpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include "PekaoBank.hpp"

SavingsAccountBase*
PekaoBank::CreateSavingsAccount()
{
    return new PekaoSavingsAccount();
};

LoanAccountBase*
PekaoBank::CreateLoanAccount()
{
    return new PekaoLoanAccount();
}
