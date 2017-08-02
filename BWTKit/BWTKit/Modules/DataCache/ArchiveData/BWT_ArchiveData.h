//
//  BWT_ArchiveData.h
//  BWTKit
//
//  Created by 彭利民 on 2017/7/26.
//  Copyright © 2017年 bwton. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BWT_ArchiveData : NSObject

/**
 *  功能:存档
 */
+ (void)archiveDataInDoc:(id<NSCoding>)aData withFileName:(NSString *)aFileName;

/**
 *  功能:取档，从document中取文件
 */
+ (id<NSCoding>)unarchiveDataInDocWithFileName:(NSString *)aFileName;

/**
 *  功能:存档到cache
 */
+ (void)archiveDataInCache:(id<NSCoding>)aData withFileName:(NSString *)aFileName;

/**
 *  功能:取档，从cache中取文件
 */
+ (id<NSCoding>)unarchiveDataInCacheWithFileName:(NSString *)aFileName;

/**
 *  功能:取档,从[[NSBundle mainBundle] resourcePath]取文件
 */
+ (id<NSCoding>)unarchiveDataInMainBundleWithFileName:(NSString *)aFileName;

/**
 *  功能:取档,从[[NSBundle mainBundle] resourcePath]取文件
 */
+ (id<NSCoding>)unarchiveDataWithFileName:(NSString *)aFileName andBundleName:(NSString *)aBundleName;

@end
