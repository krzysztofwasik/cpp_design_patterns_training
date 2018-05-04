//
//  main.cpp
//  application_001
//
//  Created by vector on 10/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include <iostream>
#include "BankFactory.hpp"

int main(int argc, const char * argv[]) {
    
    auto factory = new BankFactory();
    std::cout << "Citi bank saving account balance is " << factory->GetBankAccount("citi-7890")->GetAccountBalance() << std::endl;
    
    std::cout << "Pekao bank saving account balance is " << factory->GetBankAccount("peka-7890")->GetAccountBalance() << std::endl;
    
    return 0;
}
