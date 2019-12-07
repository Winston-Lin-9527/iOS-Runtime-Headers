/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOSInternalClientProtocol <SOSClientProtocol>
@required
-(void)updateClientCurrentSOSInitiationState:(long long)arg1;
-(void)updateClientCurrentSOSInteractiveState:(long long)arg1;
-(void)dismissClientSOSWithCompletion:(/*^block*/id)arg1;
-(void)didDismissClientSOSBeforeSOSCall:(long long)arg1;

@end
