/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSMutableSet;

@interface AWServiceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSMutableSet* _serviceObservers;

}
+(void)addObserver:(id)arg1 ;
+(void)removeObserver:(id)arg1 ;
+(id)sharedManager;
+(id)invokeWithService:(/*^block*/id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)invokeWithService:(/*^block*/id)arg1 ;
@end
