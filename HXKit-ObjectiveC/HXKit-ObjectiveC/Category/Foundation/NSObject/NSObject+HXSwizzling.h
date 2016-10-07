//
//  NSObject+HXSwizzling.h
//  HXKit-ObjectiveC
//
//  Created by ShiCang on 16/9/28.
//  Copyright © 2016年 Cave. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (HXSwizzling)


+ (BOOL)hx_swizzleMethod:(SEL)origSel withMethod:(SEL)altSel;

+ (BOOL)hx_swizzleClassMethod:(SEL)origSel withMethod:(SEL)altSel;


@end
