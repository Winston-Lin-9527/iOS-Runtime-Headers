/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAnimationSettings.h>

@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings {

	double _completionEpsilon;
	CASpringAnimation* _springAnimation;

}

@property (nonatomic,readonly) CASpringAnimation * springAnimation;              //@synthesize springAnimation=_springAnimation - In the implementation block
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double initialVelocity; 
@property (assign,nonatomic) double completionEpsilon;                           //@synthesize completionEpsilon=_completionEpsilon - In the implementation block
+(id)criticallyDampedSpringSettings;
-(void)_updateDuration;
-(double)interpolatedProgressForProgress:(double)arg1 ;
-(id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2 ;
-(void)setCompletionEpsilon:(double)arg1 ;
-(CASpringAnimation *)springAnimation;
-(double)completionEpsilon;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)duration;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)timingFunction;
-(double)mass;
-(double)stiffness;
-(double)damping;
-(double)initialVelocity;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(void)setTimingFunction:(id)arg1 ;
-(void)setInitialVelocity:(double)arg1 ;
-(float)repeatCount;
-(void)setRepeatCount:(float)arg1 ;
-(double)speed;
@end
