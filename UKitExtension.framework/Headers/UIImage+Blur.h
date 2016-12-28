//
//  UIImage+Blur.h
//  Servant
//
//  Created by lin on 16/3/31.
//  Copyright © 2014年 lin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSNull+NoCrash.h"

@interface UIImage (Blur)
-(UIImage *)boxblurImageWithBlur:(CGFloat)blur;
@end
