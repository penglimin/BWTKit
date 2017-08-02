//
//  BWT_Keychain.h
//  BWTKit
//
//  Created by 彭利民 on 2017/7/26.
//  Copyright © 2017年 bwton. All rights reserved.
//

#import <Foundation/Foundation.h>

// 暂时先放这里
// 单例
#undef	AS_SINGLETON
#define AS_SINGLETON( __class ) \
+ (__class *)sharedInstance;

#undef	DEF_SINGLETON
#define DEF_SINGLETON( __class ) \
+ (__class *)sharedInstance \
{ \
static dispatch_once_t once; \
static __class * __singleton__; \
dispatch_once(&once, ^{ __singleton__ = [[__class alloc] init]; } ); \
return __singleton__; \
}

@interface BWT_Keychain : NSObject
/**
 *  只能set基本数据类型,NSNumber,NSString,NSData,NSDate等,不能set继承的Class
 *
 *  @param value
 *  @param type
 */
+ (void)setKeychainValue:(id<NSCopying, NSObject>)value forType:(NSString *)type;
+ (id)getKeychainValueForType:(NSString *)type;
+ (void)reset;

@end
