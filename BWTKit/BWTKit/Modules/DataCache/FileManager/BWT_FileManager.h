//
//  BWT_FileManager.h
//  BWTKit
//
//  Created by 彭利民 on 2017/7/26.
//  Copyright © 2017年 bwton. All rights reserved.
//

#import <Foundation/Foundation.h>


#define BWT_DOC_PATH [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory,NSUserDomainMask,YES) firstObject]



@interface BWT_FileManager : NSObject


/**
 *  获得app文档目录
 *
 *  @return 目录地址
 */
+ (NSString *)appDocPath;

/**
 *  获得app的lib目录
 *
 *  @return lib目录地址
 */
+ (NSString *)appLibPath;

/**
 *  获得app Cache目录
 *
 *  @return 目录地址
 */
+ (NSString *)appCachePath;

/**
 *  判断文件是否存在
 *
 *  @param aPath 地址
 *
 *  @return BOOL
 */
+ (BOOL)isFileExsit:(NSString *)aPath;


/**
 *  判断Doc目录中是否存在某文件
 *
 *  @param aPath 地址
 *
 *  @return BOOL
 */
+ (BOOL)isFileExsitInDoc:(NSString *)aPath;

/**
 *  判断bundle是否存在
 *
 *  @param aBundleName bundle名称
 *
 *  @return BOOL
 */
+ (BOOL)isBundleExsit:(NSString *)aBundleName;


@end
