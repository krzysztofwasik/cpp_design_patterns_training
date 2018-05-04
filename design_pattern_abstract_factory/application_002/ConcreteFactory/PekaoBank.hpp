//
//  PekaoBank.hpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef PekaoBank_hpp
#define PekaoBank_hpp

#include <stdio.h>
#include "BankFactoryBase.hpp"
#include "PekaoSavingsAccount.hpp"
#include "PekaoLoanAccount.hpp"

class PekaoBank : public BankFactoryBase
{
public:
    SavingsAccountBase* CreateSavingsAccount();
    
    LoanAccountBase* CreateLoanAccount();
};


#endif /* PekaoBank_hpp */
