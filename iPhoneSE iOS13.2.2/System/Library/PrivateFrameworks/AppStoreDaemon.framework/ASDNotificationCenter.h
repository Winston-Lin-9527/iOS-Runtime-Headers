/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDNotificationServiceProtocol.h>

@protocol OS_dispatch_queue, ASDNotificationCenterDialogObserver;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _notificationObservers;
	os_unfair_lock_s _observerLock;
	NSHashTable* _progressObservers;
	id<ASDNotificationCenterDialogObserver> _dialogObserver;

}

@property (__weak) id<ASDNotificationCenterDialogObserver> dialogObserver;              //@synthesize dialogObserver=_dialogObserver - In the implementation block
+(id)defaultCenter;
+(id)interface;
-(id)init;
-(void)addProgressObserver:(id)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)removeNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)addNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverDialogRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverNotifications:(id)arg1 ;
-(void)deliverProgress:(id)arg1 ;
-(id<ASDNotificationCenterDialogObserver>)dialogObserver;
-(void)setDialogObserver:(id<ASDNotificationCenterDialogObserver>)arg1 ;
@end
