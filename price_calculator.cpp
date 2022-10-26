// Copyright (c) 2022 Tamer Zreg All rights reserved.
//
// Created by: Tamer Zreg
// Date: Oct 25, 2022
// This program asks the user for the amount spent and hst of and
// then gives a discount based on the amount spent and calculates
// the price including tax and discount rate.
#include <iostream>

int main() {
    // declare variables
    float new_price, discounted_price, amount_spent, hst;

    // get the hst and amount spent from the user
    std::cout << "Enter the amount spent ($): ";
    std::cin >> amount_spent;
    std::cout << "Enter the HST rate (%): ";
    std::cin >> hst;

    // calculate the new price using discount rate and hst

    if (amount_spent >= 1000) {
    discounted_price = amount_spent - amount_spent / 10;
    new_price = discounted_price * (hst / 100 + 1);
    std::cout <<"Your amount spent + tax/discount is "<< new_price << std::endl;
    // otherwise calculate the new price using only hst
    } else if (amount_spent <= 1000) {
        new_price = amount_spent * (hst / 100 + 1);
        std::cout << "Your amount spent + tax is " << new_price << std::endl;
    }
}
