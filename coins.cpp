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

namespace coins
{
    void compare_dp_greedy(const vector<unsigned> &coins)
    {
        unsigned dp_values[solution_max+1] = {};
        unsigned dp_denoms[solution_max+1] = {};

        dp_coins(coins, dp_values, dp_denoms);

        unsigned greedy_values[solution_max+1] = {};
        unsigned greedy_denoms[solution_max+1] = {};

        greedy_coins(coins, greedy_values, greedy_denoms);

        bool is_same = true;
        for (unsigned i = 1; i<=solution_max; ++i)
        {
            if (dp_values[i]<UINT32_MAX)
            {
                if (dp_values[i] != greedy_values[i])
                {
                    is_same = false;
                    cout << "---" << endl;
                    cout << "DP and Greedy differ for " << i << endl;
                    cout << "DP ";
                    print_solution(dp_values, dp_denoms, i);
                    cout << "Greedy ";
                    print_solution(greedy_values, greedy_denoms, i);
                }

            }
        }
        if (is_same)
        {
            cout << "No differences!" << endl;
        }
    }

    void get_coins(vector<unsigned>& coins)
    {
        cout << "Enter coin denominations: ";
        unsigned d;
        while (cin >> d)
        {
            coins.push_back(d);
        }
        std::sort(coins.begin(), coins.end());
    }

    void print_solution(unsigned *values, unsigned *denoms, unsigned n)
    {
        vector<unsigned> coins;

        cout << "Solution for " << n << " is *" << values[n] << "* coin(s): ";
        unsigned v = n;
        while (v > 0)
        {
            coins.push_back((denoms[v]));
            v -= denoms[v];
        }

        std::sort(coins.begin(), coins.end());

        print_set(coins);
    }

    void print_set(const vector<unsigned>& c)
    {
        const size_t n{c.size()};

        cout << "{";

        for (int i = 0; i < n; ++i)
        {
            cout << c[i];
            if (i < n - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }

    void dp_coins(const vector<unsigned> &coins, unsigned * const values, unsigned * const denoms)
    {
        std::fill_n(values+1, solution_max, UINT32_MAX);


        for (unsigned solve_for = 1; solve_for<=solution_max; ++solve_for)
        {
            unsigned remainder = solve_for;
            unsigned v_min = values[solve_for];
            unsigned denom = denoms[solve_for];

            for (auto c: coins)
            {
                if (c>remainder) // no more viable coins
                {
                    break;
                }
                if (values[remainder - c] == UINT32_MAX) // no solution to subproblem
                {
                    continue;
                }
                if (values[remainder - c] + 1 < v_min) // use subproblem solution
                {
                    v_min = values[remainder - c] + 1;
                    denom = c;
                }
            }

            values[solve_for] = v_min;
            denoms[solve_for] = denom;
        }
    }

    void greedy_coins(const vector<unsigned> &coins, unsigned * const values, unsigned * const denoms)
    {
        for (unsigned solve_for = 1; solve_for<=solution_max; ++solve_for)
        {
            unsigned greedy = 0;

            for (auto c: coins)
            {
                if (c>solve_for) // no more viable coins
                {
                    break;
                }
                greedy = c;
            }

            values[solve_for] = values[solve_for - greedy] + 1;
            denoms[solve_for] = greedy;
        }
    }

}
