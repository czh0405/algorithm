//
//  algorithm.cpp
//  algorithm
//
//  Created by chengzhao on 2018/1/22.
//  Copyright © 2018年 zhihu. All rights reserved.
//

#include "algorithm.h"

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1)
            count++;
        
        n = n / 2;
    }
    
    printf("count = %d\n", count);
    
    return count;
}
