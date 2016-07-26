//
//  XWEmmet.h
//  XWEmmet
//
//  Created by zhouxiaowei on 2016/7/26.
//  Copyright © 2016年 xiaowei. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface XWEmmet : NSObject

+ (instancetype)sharedPlugin;

@property (nonatomic, strong, readonly) NSBundle* bundle;
@end