/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, HKObserverSet, CUPowerSourceMonitor;

@interface HDDevicePowerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	HKObserverSet* _observers;
	CUPowerSourceMonitor* _monitor;
	BOOL _isCharging;

}

@property (readonly) BOOL primarySourceIsCharging; 
-(void)powerSourceFound:(id)arg1 ;
-(void)powerSourceLost:(id)arg1 ;
-(void)powerSource:(id)arg1 changed:(unsigned)arg2 ;
-(void)_queue_updatePrimaryPowerSourceState:(int)arg1 ;
-(void)addDevicePowerObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeDevicePowerObserver:(id)arg1 ;
-(BOOL)primarySourceIsCharging;
-(id)init;
-(void)dealloc;
@end
