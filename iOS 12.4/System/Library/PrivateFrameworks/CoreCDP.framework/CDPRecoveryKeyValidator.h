/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRecoveryKeyValidator <NSObject>
@required
-(BOOL)confirmRecoveryKey:(id)arg1 error:(id*)arg2;
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)generateRecoveryKey:(/*^block*/id)arg1;
-(id)generateRecoveryKeyWithError:(id*)arg1;

@end
