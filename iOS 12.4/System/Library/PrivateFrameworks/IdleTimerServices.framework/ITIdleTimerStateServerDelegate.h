/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ITIdleTimerStateServerDelegate <NSObject>
@required
-(void)clientDidDisconnect:(id)arg1;
-(BOOL)isIdleTimerServiceAvailable;
-(void)client:(id)arg1 setIdleTimerDisabled:(BOOL)arg2 forReason:(id)arg3;

@end
