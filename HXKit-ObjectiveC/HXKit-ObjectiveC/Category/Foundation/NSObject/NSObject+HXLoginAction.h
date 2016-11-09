//
//  NSObject+LoginAction.h
//  HXKit-ObjectiveC
//
//  Created by miaios on 16/2/23.
//  Copyright © 2016年 Caver. All rights reserved.
//

#import <UIKit/UIKit.h>


FOUNDATION_EXPORT NSString *const hx_kLoginNotification;
FOUNDATION_EXPORT NSString *const hx_kLogoutNotification;


@interface NSObject (HXLoginAction)


- (void)shouldLogin;
- (void)shouldLogout;


@end
