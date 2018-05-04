//
//  CitiBankSavingsAccount.hpp
//  application_001
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef CitiBankSavingsAccount_hpp
#define CitiBankSavingsAccount_hpp

#include <stdio.h>
#include "SavingsAccountBase.hpp"

class CitiBankSavingsAccount : public SavingsAccountBase
{
    private:
        int _balance;
    
    public:
        CitiBankSavingsAccount();
        int GetAccountBalance();
};

#endif /* CitiBankSavingsAccount_hpp */
