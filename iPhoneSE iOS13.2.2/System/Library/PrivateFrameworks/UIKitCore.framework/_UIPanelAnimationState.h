/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UISlidingBarStateRequest, UIViewPropertyAnimator;

@interface _UIPanelAnimationState : NSObject {

	UISlidingBarStateRequest* _fromRequest;
	UISlidingBarStateRequest* _toRequest;
	double _progress;
	long long _affectedSides;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,copy) UISlidingBarStateRequest * fromRequest;                   //@synthesize fromRequest=_fromRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * toRequest;                     //@synthesize toRequest=_toRequest - In the implementation block
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long affectedSides;                                //@synthesize affectedSides=_affectedSides - In the implementation block
@property (nonatomic,readonly) UISlidingBarStateRequest * stateRequest; 
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                      //@synthesize animator=_animator - In the implementation block
+(id)timingCurveProvider;
+(double)defaultDuration;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UISlidingBarStateRequest *)fromRequest;
-(UISlidingBarStateRequest *)toRequest;
-(UISlidingBarStateRequest *)stateRequest;
-(void)setFromRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setToRequest:(UISlidingBarStateRequest *)arg1 ;
-(long long)affectedSides;
-(void)setAffectedSides:(long long)arg1 ;
-(UIViewPropertyAnimator *)animator;
@end
