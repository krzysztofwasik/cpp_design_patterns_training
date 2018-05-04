//
//  CitiBank.hpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef CitiBank_hpp
#define CitiBank_hpp

#include <stdio.h>
#include "BankFactoryBase.hpp"
#include "CitiSavingsAccount.hpp"
#include "CitiLoanAccount.hpp"

class CitiBank : public BankFactoryBase
{
public:
    SavingsAccountBase* CreateSavingsAccount();
    
    LoanAccountBase* CreateLoanAccount();
};

#endif /* CitiBank_hpp */
