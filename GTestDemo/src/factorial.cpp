/*
 * factorial.cpp
 *
 *  Created on: 29-Mar-2022
 *      Author: Sudhanya
 */

int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}


