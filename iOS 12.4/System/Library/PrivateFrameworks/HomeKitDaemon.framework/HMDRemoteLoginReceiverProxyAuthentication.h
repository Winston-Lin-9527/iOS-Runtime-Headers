/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginProxyAuthenticationRequest;

@interface HMDRemoteLoginReceiverProxyAuthentication : HMDRemoteLoginReceiverAuthentication {

	HMDRemoteLoginProxyAuthenticationRequest* _request;

}

@property (nonatomic,readonly) HMDRemoteLoginProxyAuthenticationRequest * request;              //@synthesize request=_request - In the implementation block
+(id)logCategory;
-(void)_authenticate;
-(void)authenticate;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(HMDRemoteLoginProxyAuthenticationRequest *)request;
@end
