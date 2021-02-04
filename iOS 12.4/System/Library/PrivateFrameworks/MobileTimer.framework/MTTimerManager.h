/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTTimerManagerIntentSupport.h>
#import <libobjc.A.dylib/MTTimerManagerProviding.h>
#import <libobjc.A.dylib/MTUserDefaultNotificationObserver.h>

@class NSNotificationCenter, MTTimerManagerExportedObject, MTMetrics, MTTimerCache, NSString, MTXPCConnectionProvider;

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver> {

	MTTimerManagerExportedObject* _exportedObject;
	MTXPCConnectionProvider* _connectionProvider;
	MTMetrics* _metrics;
	MTTimerCache* _cache;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<MTTimerManagerIntentSupport> timerManager; 
@property (nonatomic,retain) MTTimerManagerExportedObject * exportedObject;               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,readonly) MTXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (nonatomic,retain) MTMetrics * metrics;                                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) MTTimerCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                   //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id notificationObject; 
+(void)setDefaultDuration:(double)arg1 ;
+(void)updateTimerShortcutItem;
+(double)defaultDuration;
+(void)warmUp;
-(void)reconnect;
-(id)timers;
-(id)initWithMetrics:(id)arg1 ;
-(id)notificationObject;
-(id)nextTimer;
-(id)addTimer:(id)arg1 ;
-(id)updateTimer:(id)arg1 ;
-(id)removeTimer:(id)arg1 ;
-(id)currentTimer;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 ;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(MTXPCConnectionProvider *)connectionProvider;
-(void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(id)_updateCurrentTimerWithState:(unsigned long long)arg1 ;
-(id)startCurrentTimerWithDuration:(double)arg1 ;
-(BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)arg1 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(id)timersSync;
-(id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)dismissTimerWithIdentifier:(id)arg1 ;
-(id)repeatTimerWithIdentifier:(id)arg1 ;
-(id)stopCurrentTimer;
-(id)pauseCurrentTimer;
-(id)resumeCurrentTimer;
-(id)getCurrentTimerSync;
-(BOOL)startCurrentTimerWithDurationSync:(double)arg1 ;
-(BOOL)stopCurrentTimerSync;
-(BOOL)pauseCurrentTimerSync;
-(BOOL)resumeCurrentTimerSync;
-(MTTimerManagerExportedObject *)exportedObject;
-(NSNotificationCenter *)notificationCenter;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id<MTTimerManagerIntentSupport>)timerManager;
-(void)checkIn;
-(id)init;
-(void)dealloc;
-(void)setMetrics:(MTMetrics *)arg1 ;
-(MTMetrics *)metrics;
-(void)setExportedObject:(MTTimerManagerExportedObject *)arg1 ;
-(void)setCache:(MTTimerCache *)arg1 ;
-(MTTimerCache *)cache;
@end
