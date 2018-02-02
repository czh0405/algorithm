//
//  ViewController.m
//  algorithm
//
//  Created by chengzhao on 2018/1/23.
//  Copyright © 2018年 zhihu. All rights reserved.
//


#import "ViewController.h"
#import "algorithm.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //test

    int count = hammingWeight(8);
    NSLog(@"count = %d", count);
    
    
    int nums[4] = {2, 7, 11, 15};
    int *array = twoSum(nums, 4, 9);
    NSLog(@"array[0] = %d, array[1] = %d", array[0], array[1]);
    
    
    int reverseNum = reverse(-123);
    NSLog(@"reverseNum = %d", reverseNum);
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
