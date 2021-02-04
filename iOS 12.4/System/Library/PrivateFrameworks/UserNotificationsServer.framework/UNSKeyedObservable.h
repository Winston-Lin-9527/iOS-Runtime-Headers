/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSKeyedObservable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSMutableDictionary* _observersByKey;

}
-(void)addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 callOutQueue:(id)arg2 ;
-(void)notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_observersForKey:(id)arg1 ;
@end
