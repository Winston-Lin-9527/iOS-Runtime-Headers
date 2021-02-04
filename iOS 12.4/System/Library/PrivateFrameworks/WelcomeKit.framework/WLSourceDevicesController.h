/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLSourceDevicesDelegate;
@interface WLSourceDevicesController : WLDaemonConnection {

	id<WLSourceDevicesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLSourceDevicesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptDirectConnectionToAddress:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<WLSourceDevicesDelegate>)arg1 ;
-(id<WLSourceDevicesDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
