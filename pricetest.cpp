// Copyright (c) 2022 Tamer Zreg All rights reserved.
//
// Created by: Tamer Zreg
// Date: Oct 3, 2022
// This program asks the user for the length width and height of a
// cuboid and then displays the surface area and volume of a
// cuboid with the given variables.
#include <iostream>

int main() {
    // declare variables
    float new_price, discounted_price, amount_spent, hst;

    // get the length, width and height from the user
    std::cout << "Enter the amount spent ($): ";
    std::cin >> amount_spent;
    std::cout << "Enter the HST rate (%): ";
    std::cin >> hst;

    // calculate the volume and surface area

    if (amount_spent >= 1000) {
    discounted_price = amount_spent - amount_spent / 10;
    new_price = discounted_price * (hst / 100 + 1);
    std::cout <<"Your amount spent + tax/discount is "<< new_price << std::endl;
    } else if (amount_spent <= 1000) {
        new_price = amount_spent * (hst / 100 + 1);
        std::cout << "Your amount spent + tax is " << new_price << std::endl;
    }
}
