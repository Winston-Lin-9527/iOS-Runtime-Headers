/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BiometricKitDelegateXpcProtocol <NSObject>
@required
-(BOOL)isDelegate;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)homeButtonPressed:(unsigned long long)arg1;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;

@end
