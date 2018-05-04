//
//  main.cpp
//  application_002
//
//  Created by vector on 11/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include <iostream>
#include "BankFactoryProvider.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "application_002: Banks aggregator command center for financial services" << std::endl;
    std::cout << "---------------------------" << std::endl;
    
    auto factory = new BankFactoryProvider();
    auto citiBankAccountServices = factory->GetBankFactory("citi-5678");
    auto pekaoBankAccountServices = factory->GetBankFactory("pekao-3245");
    
    // show savings accounts available for provided accounts
    std::cout << "\nAvailable savings accounts:" << std::endl;
    std::cout << "---------------------------" << std::endl;
    citiBankAccountServices->CreateSavingsAccount();
    pekaoBankAccountServices->CreateSavingsAccount();
    
    // show loan accounts available for provided accounts
    std::cout << "\nAvailable load accounts:" << std::endl;
    std::cout << "---------------------------" << std::endl;
    citiBankAccountServices->CreateLoanAccount();
    pekaoBankAccountServices->CreateLoanAccount();
    
    return 0;
}
