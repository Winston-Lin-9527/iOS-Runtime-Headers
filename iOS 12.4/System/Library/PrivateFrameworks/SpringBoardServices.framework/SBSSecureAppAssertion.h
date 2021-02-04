/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSLockScreenContentAssertion.h>

@class SBSLockScreenContentAssertion;

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion {

	SBSLockScreenContentAssertion* _actualAssertion;

}

@property (nonatomic,retain) SBSLockScreenContentAssertion * actualAssertion;              //@synthesize actualAssertion=_actualAssertion - In the implementation block
+(id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(/*^block*/id)arg2 ;
-(SBSLockScreenContentAssertion *)actualAssertion;
-(void)setActualAssertion:(SBSLockScreenContentAssertion *)arg1 ;
@end
