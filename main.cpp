/*
Implement the classic change-making problem using greedy, and dynamic
programming algorithms.

Copyright (C) 2017 Robert Hunter

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "coins.h"

using namespace coins;

int main()
{
    // try different sets of coins
    vector<vector<unsigned>> coin_sets
            {
                    {1, 5, 10, 25},
                    {1, 10, 25},
            };


    for (auto& c: coin_sets)
    {
        cout << endl << "===" << endl;
        cout << "Comparing DP and Greedy for: ";

        print_set(c);

        compare_dp_greedy(c);
    }

    return 0;
}

