/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BKSAssertionClientMultiplexer : BSBaseXPCClient {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSMutableDictionary* _listeners;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> assertionQueue; 
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasDestroyed;
-(void)sendEvent:(id)arg1 withAssertionType:(id)arg2 forEventType:(unsigned long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_assertionQueue_handleEvent:(id)arg1 forListener:(id)arg2 ;
-(void)sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)addListener:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)removeListener:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
