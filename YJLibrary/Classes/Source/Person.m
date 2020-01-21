//
//  Person.m
//  Demo
//
//  Created by SunYongji on 2019/11/29.
//  Copyright © 2019 SunYongji. All rights reserved.
//

#import "Person.h"
#import <objc/runtime.h>

@implementation Person

+ (void)initialize {
    const char * name = object_getClassName([self class]);
    NSLog(@"%s====%s",__func__,name);
}

+ (void)load{
        NSLog(@"%s",__func__);
}
- (id)copyWithZone:(nullable NSZone *)zone {
    Person *p = [Person new];
    return p;
}
@end
