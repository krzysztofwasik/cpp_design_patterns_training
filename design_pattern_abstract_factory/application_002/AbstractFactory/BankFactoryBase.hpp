//
//  BankFactoryBase.hpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef BankFactoryBase_h
#define BankFactoryBase_h


class SavingsAccountBase
{
};

class LoanAccountBase
{
};

class BankFactoryBase
{
public:
    
    virtual SavingsAccountBase* CreateSavingsAccount()
    {
        return new SavingsAccountBase();
    };
    
    virtual LoanAccountBase* CreateLoanAccount()
    {
        return new LoanAccountBase();
    };
};

#endif /* BankFactoryBase_h */
