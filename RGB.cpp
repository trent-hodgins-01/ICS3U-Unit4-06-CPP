// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/06/2021
// This is the RGB program
// It goes through all the RGB colors

#include <iostream>

int main() {
    // this function does addition
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    // process and output
    for (counter1 = 0; counter1 < 256; counter1++) {
        for (counter2 = 0; counter2 < 256; counter2++) {
            for (counter3 = 0; counter3 < 256; counter3++) {
                std::cout << "RGB(" << counter1 << "," << counter2 << ","
                          << counter3 << ")" << std::endl;
            }
        }
    }

    std::cout << "\nDone." << std::endl;
}
