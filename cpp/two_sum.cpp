#include<iostream>
#include "two_sum.h"

int main()
{
    Solution s;

    std::vector<int> v1{2, 7, 11, 15};

    std::vector<int>out = s.twoSum(v1, 9);

    std::cout << "out[0] = " << out[0] << 
        " and out[1] = " << out[1] << std::endl;

    std::cout << "**************\n" ;
    v1 = {0, 4, 3, 0};
    out = s.twoSum(v1, 0);

    std::cout << "out[0] = " << out[0] << 
        " and out[1] = " << out[1] << std::endl;

    std::cout << "**************\n" ;
    v1 = {-3, 4, 3, 90};
    out = s.twoSum(v1, 0);

    std::cout << "out[0] = " << out[0] << 
        " and out[1] = " << out[1] << std::endl;



    return 0;
}
