//
//  NSFileManager+PathSize.h
//  LimitFree
//
//  Created by YangLin on 14-12-23.
//  Copyright (c) lin All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (PathSize)

//计算文件夹下文件的总大小
+(float)fileSizeForDir:(NSString*)path;

+(BOOL)isTimeout:(NSString*)path time:(NSTimeInterval)timeout;
@end
