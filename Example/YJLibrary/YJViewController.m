//
//  YJViewController.m
//  YJLibrary
//
//  Created by 363148025@qq.com on 01/21/2020.
//  Copyright (c) 2020 363148025@qq.com. All rights reserved.
//

#import "YJViewController.h"
#import <YJLibrary/PTApiNewageService+AD.h>
@interface YJViewController ()

@end

@implementation YJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    PTCacheSplashAdsReqMessage *msg = [[PTCacheSplashAdsReqMessage alloc]init];

    
    
    [[[PTApiNewageService shared]cacheSplashAdsWithReqParameters:msg]subscribeNext:^(id  _Nullable x) {
        NSLog(@"%@",x);
    }error:^(NSError * _Nullable error) {
        NSLog(@"%@",error);
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
