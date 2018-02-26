//
//  algorithm.cpp
//  algorithm
//
//  Created by chengzhao on 2018/1/22.
//  Copyright © 2018年 zhihu. All rights reserved.
//

#include "algorithm.h"
#include <stdlib.h>
#include <limits.h>
#include <map>

//
// hammingWeight()
//
int hammingWeight(uint32_t n)
{
    int count = 0;
    
    //method one
//    while (n > 0) {
//        if (n & 0x01)
//            count++;
//
//        n = n >> 1;
//    }
    
    //method two
    while (n > 0) {
        if (n % 2 == 1)
            count++;
        n = n >> 1;
    }
    
    printf("count = %d\n", count);
    
    return count;
}


//
// twoSum()
//

//int* twoSum(int* nums, int numsSize, int target)
//{
//    int *array = (int *)malloc(2 * sizeof(int));
//    for (int i = 0; i < numsSize -1; i++) {
//        for (int j = i + 1; j < numsSize; j++) {
//            if (target == nums[i] + nums[j]) {
//                array[0] = i;
//                array[1] = j;
//            }
//        }
//    }
//
//    return array;
//}

int* twoSum(int* nums, int numsSize, int target)
{
    std::map<int, int> mapNums;
    int *array = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        mapNums[nums[i]] = i;
        int num2 = target - nums[i];
        
        std::map<int, int>::iterator itr =  mapNums.find(num2);
        if (itr != mapNums.end() && itr->second != i) {
            array[0] = i;
            array[1] = itr->second;
        }
    }
    
    return array;
}


//
// reverse()
//

int reverse(int num)
{
    long long reverseNum = 0;
    
    while (num) {
        reverseNum = reverseNum * 10 + num % 10;
        num = num / 10;
    }
    
    if (reverseNum > INT_MAX || reverseNum < INT_MIN)
        return 0;
    
    return (int)reverseNum;
}
