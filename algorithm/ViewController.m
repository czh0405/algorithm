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

    int count = hammingWeight(5);
    NSLog(@"count = %d", count);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
