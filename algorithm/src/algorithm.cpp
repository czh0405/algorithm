//
//  algorithm.cpp
//  algorithm
//
//  Created by chengzhao on 2018/1/22.
//  Copyright © 2018年 zhihu. All rights reserved.
//

#include "algorithm.h"
#include <stdlib.h>

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
            count;
        n = n >> 1;
    }
    
    printf("count = %d\n", count);
    
    return count;
}


int* twoSum(int* nums, int numsSize, int target)
{
    int *array = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize -1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (target == nums[i] + nums[j]) {
                array[0] = i;
                array[1] = j;
            }
        }
    }
    
    return array;
}
