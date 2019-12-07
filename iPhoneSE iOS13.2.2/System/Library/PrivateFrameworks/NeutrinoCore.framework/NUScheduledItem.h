/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NUScheduledItem : NSObject {

	unsigned long long _scheduledTime;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (readonly) unsigned long long scheduledTime;                //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) id block;                                        //@synthesize block=_block - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)compare:(id)arg1 ;
-(id)block;
-(void)dispatch;
-(unsigned long long)scheduledTime;
-(id)initWithScheduledTime:(unsigned long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end
