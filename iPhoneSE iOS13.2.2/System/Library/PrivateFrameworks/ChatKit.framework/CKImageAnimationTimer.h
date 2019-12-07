/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject {

	unsigned long long _frame;
	BOOL _shouldStopWhenBackgrounded;
	NSMutableSet* _observers;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) NSMutableSet * observers;                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                  //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL shouldStopWhenBackgrounded;              //@synthesize shouldStopWhenBackgrounded=_shouldStopWhenBackgrounded - In the implementation block
+(id)sharedTimer;
-(id)init;
-(void)dealloc;
-(unsigned long long)frame;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(void)setShouldStopWhenBackgrounded:(BOOL)arg1 ;
-(void)updateDisplayLink;
-(BOOL)shouldStopWhenBackgrounded;
-(void)animationTimerFired;
@end
