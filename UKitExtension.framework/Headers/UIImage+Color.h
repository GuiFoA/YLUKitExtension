//
//  UIImage+Color.h
//  lin
//
//  Created by lin on 2014/11/6.
//  Copyright © 2014年 lin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Color)

/** 取图片某一像素的颜色 */
- (UIColor *)colorAtPixel:(CGPoint)point;

/** 获得灰度图 */
- (UIImage *)convertToGrayImage;

@end
