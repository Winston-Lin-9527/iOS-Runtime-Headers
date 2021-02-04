/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, UICoordinateSpace;
@class NSObject, NSMutableDictionary, NSSet, _UIFeedbackGeneratorConfiguration, NSString;

@interface UIFeedbackGenerator : NSObject {

	long long _styleActivationCount[3];
	long long _autoDeactivationCount[3];
	NSObject*<OS_dispatch_source> _autoDeactivateTimer;
	NSMutableDictionary* _preparationTimers;
	/*^block*/id _feedbackWarmingBlock;
	double _currentDelay;
	NSSet* _usedFeedbacks;
	BOOL _activated;
	BOOL _usesCustomActivation;
	long long _activationCount;
	long long _externalActivationCount;
	id<UICoordinateSpace> _coordinateSpace;
	_UIFeedbackGeneratorConfiguration* _configuration;
	NSSet* _engines;

}

@property (assign,setter=_setMuted:,getter=_isMuted,nonatomic) BOOL muted; 
@property (getter=_isAutoDeactivated,nonatomic,readonly) BOOL autoDeactivated; 
@property (assign,nonatomic) long long activationCount;                                                                                      //@synthesize activationCount=_activationCount - In the implementation block
@property (assign,nonatomic) long long externalActivationCount;                                                                              //@synthesize externalActivationCount=_externalActivationCount - In the implementation block
@property (assign,nonatomic) BOOL usesCustomActivation;                                                                                      //@synthesize usesCustomActivation=_usesCustomActivation - In the implementation block
@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;                                                                   //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (setter=_setConfiguration:,getter=_configuration,nonatomic,retain) _UIFeedbackGeneratorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSSet * engines;                                                                                              //@synthesize engines=_engines - In the implementation block
@property (getter=_effectiveCoordinateSpace,nonatomic,readonly) id<UICoordinateSpace> effectiveCoordinateSpace; 
@property (getter=_isEnabled,nonatomic,readonly) BOOL enabled; 
@property (getter=_autoDeactivationTimeout,nonatomic,readonly) double autoDeactivationTimeout; 
@property (nonatomic,readonly) NSString * _stats_key; 
+(Class)_configurationClass;
+(id)_defaultCoordinateSpace;
+(void)_setAutoDeactivateTimeout:(double)arg1 ;
+(void)_resetAutoDeactivateTimeout;
+(void)_setPreparationTimeout:(double)arg1 forStyle:(long long)arg2 ;
+(void)_resetPreparationTimeouts;
+(void)_setRunningTests:(BOOL)arg1 ;
+(id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2 ;
+(id)behaviorWithCoordinateSpace:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)_configuration;
-(void)prepare;
-(BOOL)_isEnabled;
-(id<UICoordinateSpace>)coordinateSpace;
-(id)initWithConfiguration:(id)arg1 ;
-(void)performFeedbackWithDelay:(double)arg1 insideBlock:(/*^block*/id)arg2 ;
-(void)_activated;
-(void)activateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)deactivate;
-(void)_setOutputMode:(long long)arg1 ;
-(long long)_outputMode;
-(void)_setConfiguration:(id)arg1 ;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(void)_stopAutoDeactivateTimer;
-(void)_stopPreparationForAllStyles;
-(void)_autoDeactivate;
-(BOOL)_isAutoDeactivated;
-(void)_stats_prepared;
-(id)_preparationTimerForStyle:(long long)arg1 ;
-(void)_prepareWithStyle:(long long)arg1 ;
-(double)_preparationTimeoutForStyle:(long long)arg1 ;
-(void)_stopPreparationForStyle:(long long)arg1 ;
-(void)_setPreparationTimer:(id)arg1 forStyle:(long long)arg2 ;
-(void)_updatePreparationTimer:(id)arg1 withTimeout:(double)arg2 ;
-(void)_activateWithStyle:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_deactivateWithStyle:(long long)arg1 ;
-(void)_setupEnginesIfNeededForFeedback:(id)arg1 ;
-(void)_setupForFeedback:(id)arg1 ;
-(void)__activateWithStyle:(long long)arg1 forFeedback:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)activationCount;
-(void)setActivationCount:(long long)arg1 ;
-(void)_clientDidUpdateGeneratorWithSelector:(SEL)arg1 ;
-(void)_setupAutoDeactivateTimer;
-(void)_stats_activationDidChangeTo:(BOOL)arg1 ;
-(void)_scheduleFeedbackWarming;
-(void)_startFeedbackWarming;
-(void)__deactivateWithStyle:(long long)arg1 ;
-(void)_deactivated;
-(void)_stopFeedbackWarming;
-(double)_autoDeactivationTimeout;
-(void)_stats_activationTimedOut;
-(void)_resetAutoDeactivationTimeout;
-(void)_forceDeactivationForStyle:(long long)arg1 ;
-(void)_playFeedback:(id)arg1 withMinimumIntervalPassed:(double)arg2 since:(double*)arg3 prefersRegularPace:(BOOL)arg4 ;
-(void)_stats_playedFeedback;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(id)_effectiveCoordinateSpace;
-(void)_playFeedback:(id)arg1 ;
-(void)_stopFeedback:(id)arg1 ;
-(NSString *)_stats_key;
-(long long)externalActivationCount;
-(void)setExternalActivationCount:(long long)arg1 ;
-(BOOL)usesCustomActivation;
-(void)setUsesCustomActivation:(BOOL)arg1 ;
-(NSSet *)engines;
-(void)_setMuted:(BOOL)arg1 ;
-(BOOL)_isMuted;
-(id)_statsSuffix;
-(id)_activationCountStatistics;
-(id)_activationDurationStatistics;
-(id)_activationTimeOutCountStatistics;
-(id)_preparationCountStatistics;
-(id)_playCountStatistics;
@end
