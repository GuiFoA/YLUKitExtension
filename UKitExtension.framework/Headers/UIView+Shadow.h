//
//  UIView+Shadow.h
//  阴影效果测试
//
//  Created by lin on 2014/10/4.
//  Copyright © 2014年 YangLin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Shadow)
- (void)addShadow;

- (void)addShadowColor:(UIColor *)color;

- (void)addShadowColor:(UIColor *)color offset:(CGSize)offsert;

@end
