//
//  algorithm.hpp
//  algorithm
//
//  Created by chengzhao on 2018/1/22.
//  Copyright © 2018年 zhihu. All rights reserved.
//

#ifndef algorithm_h
#define algorithm_h

#include <stdio.h>
#include <inttypes.h>

//for leetcode algorithm

#ifdef __cplusplus
extern "C"
{
#endif
    
    // 一个整数二进制中1的个数
    int hammingWeight(uint32_t n);
    
    
    /**
     * two sum
     
     * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
     
     * You may assume that each input would have exactly one solution, and you may not use the same element twice.
     
     * Example:
     * Given nums = [2, 7, 11, 15], target = 9,
     
     * Because nums[0] + nums[1] = 2 + 7 = 9,
     * return [0, 1].
     
     * Note: The returned array must be malloced, assume caller calls free().
     */
    int* twoSum(int* nums, int numsSize, int target);
    
#ifdef __cplusplus
}
#endif

#endif /* algorithm_hpp */
