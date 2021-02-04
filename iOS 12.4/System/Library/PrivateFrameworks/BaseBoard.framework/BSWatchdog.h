/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;
@class NSObject, BSTimer, NSDate;

@interface BSWatchdog : NSObject {

	id<BSWatchdogDelegate> _delegate;
	id<BSWatchdogProviding> _provider;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeout;
	BSTimer* _timer;
	/*^block*/id _completion;
	NSDate* _startDate;
	BOOL _invalidated;
	BOOL _completed;
	BOOL _hasFired;

}

@property (nonatomic,retain) id<BSWatchdogDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<BSWatchdogProviding> provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (getter=hasFired,nonatomic,readonly) BOOL fired;                      //@synthesize hasFired=_hasFired - In the implementation block
-(id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_completeWatchdogAfterFiring:(BOOL)arg1 ;
-(void)_watchdogInvalidated;
-(void)_stageOneTimerFired;
-(void)_setupTimerWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stageTwoTimerFired;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 ;
-(double)timeout;
-(NSDate *)startDate;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 ;
-(void)_invalidateTimer;
-(BOOL)hasFired;
-(void)_startWatchdogTimer;
-(void)_watchdogTimerFired;
-(void)dealloc;
-(id)description;
-(void)setDelegate:(id<BSWatchdogDelegate>)arg1 ;
-(id<BSWatchdogDelegate>)delegate;
-(void)invalidate;
-(void)start;
-(id<BSWatchdogProviding>)provider;
-(NSObject*<OS_dispatch_queue>)queue;
@end
