/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKObserverRecord : NSObject {

	id _observer;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (assign,nonatomic,__weak) id observer;                                    //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
-(id)initWithObserver:(id)arg1 clientQueue:(id)arg2 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end
