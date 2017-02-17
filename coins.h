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

#ifndef COINS_COINS_H
#define COINS_COINS_H

#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

namespace coins
{
    constexpr size_t solution_max = 100;

    void compare_dp_greedy(const vector<unsigned>&);

    void get_coins(vector<unsigned>&);

    void dp_coins(const vector<unsigned>&, unsigned* const, unsigned* const);

    void greedy_coins(const vector<unsigned>&, unsigned* const, unsigned* const);

    void print_solution(unsigned*, unsigned*, unsigned);

    void print_set(const vector<unsigned>&);
}


#endif //COINS_COINS_H
