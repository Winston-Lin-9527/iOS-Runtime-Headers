/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSObject;

@interface TKPowerMonitor : NSObject {

	IONotificationPortRef _portRef;
	unsigned _handle;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _awaken;
	unsigned _kernelPort;

}

@property (assign) unsigned kernelPort;              //@synthesize kernelPort=_kernelPort - In the implementation block
@property (assign) BOOL awaken;                      //@synthesize awaken=_awaken - In the implementation block
+(id)defaultMonitor;
-(id)init;
-(unsigned)kernelPort;
-(void)setKernelPort:(unsigned)arg1 ;
-(BOOL)awaken;
-(void)setAwaken:(BOOL)arg1 ;
@end
