/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKVoIPXPCClient
@optional
-(void)voipRegistrationFailed;

@required
-(void)voipPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)voipPayloadReceived:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end
