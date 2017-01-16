//
//  UITextField+Rules.h
//  servant
//
//  Created by lin on 16/3/16.
//  Copyright © 2014年 GuoYuDiChan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Rules)

/**
  判断文本框是否为空（非正则表达式）

 @return YES NO
 */
- (BOOL)isEmpty;

/**
 判断邮箱是否正确

 @return YES NO
 */
- (BOOL)validateEmail;

/**
 判断验证码是否正确

 @return YES NO
 */
- (BOOL)validateAuthen;

/**
 判断密码格式是否正确

 @return YES NO
 */
- (BOOL)validatePassword;

/**
 判断手机号码是否正确

 @return YES NO
 */
- (BOOL)validatePhoneNumber;

/**
 判断身份证号是否正确

 @return YES NO
 */
- (BOOL)validateIDCard;

/**
 判断昵称是否正确
 */
- (BOOL)validateNickName;

///真实姓名
- (BOOL)validateRealName;

/**
 自己写正则传入进行判断

 @param regExp 正则表达是
 @return YES NO
 */
- (BOOL)validateWithRegExp: (NSString *)regExp;

@end
