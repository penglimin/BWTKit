//
//  BWTKitTests.m
//  BWTKitTests
//
//  Created by 彭利民 on 2017/7/26.
//  Copyright © 2017年 bwton. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "BWT_ArchiveData.h"
#import "BWT_UserDefaultDefine.h"
#import "BWT_UserDefault.h"
#import "BWT_Keychain.h"
#import "BWT_KeychainDefine.h"

@interface BWTKitTests : XCTestCase

@end

@implementation BWTKitTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}


- (void)testArchiveData
{
    NSString *filename = @"guidang";
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    [dict setValue:@"hahah" forKey:@"AA"];
    [BWT_ArchiveData archiveDataInDoc:dict withFileName:filename];
    // 解档
    NSMutableDictionary *dicts = (NSMutableDictionary *)[BWT_ArchiveData unarchiveDataInDocWithFileName:filename];
    NSLog(@"%@",dicts);
}

- (void)testUserDefault
{
    // 存
    [BWT_UserDefault setValue:@"ahahahaPWNGLIMIN" forKey:BWT_ACCOUNt_NAME];
    // 取
    NSString *str = [BWT_UserDefault getValueForKey:BWT_ACCOUNt_NAME];
    NSLog(@"%@",str);
}

- (void)testKeyChain
{
    // 存
    [BWT_Keychain setKeychainValue:@"keychainHAHAHAHA" forType:OTS_KEYCHAIN_GUUID];
    // 取
    NSString *str = [BWT_Keychain getKeychainValueForType:OTS_KEYCHAIN_GUUID];
    NSLog(@"%@",str);
}

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    NSLog(@"testExample---hahahha--nihao");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
