//
//  BWT_UserDefault.h
//  BWTKit
//
//  Created by 彭利民 on 2017/7/26.
//  Copyright © 2017年 bwton. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BWT_UserDefault : NSObject
/**
 *  存储数据到userdefault
 *
 *  @param anObject 数据
 *  @param aKey     标识
 */
+ (void)setValue:(id)anObject forKey:(NSString *)aKey;

/**
 *  从userdefault获取数据
 *
 *  @param aKey 标识
 *
 *  @return 数据
 */
+ (id)getValueForKey:(NSString *)aKey;

@end
