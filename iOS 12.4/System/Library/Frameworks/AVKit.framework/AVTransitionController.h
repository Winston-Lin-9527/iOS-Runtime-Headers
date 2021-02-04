/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVInteractiveTransitionGestureTrackerDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <AVKit/AVTransitionDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol AVTransitionControllerDelegate;
@class AVTransitionPresentationContext, AVTransition, AVInteractiveTransitionGestureTracker, NSString;

@interface AVTransitionController : NSObject <AVInteractiveTransitionGestureTrackerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, AVTransitionDelegate, UIViewControllerTransitioningDelegate> {

	AVTransitionPresentationContext* _presentationContext;
	id<AVTransitionControllerDelegate> _delegate;
	long long _state;
	AVTransition* _activeTransition;
	AVInteractiveTransitionGestureTracker* _gestureTracker;

}

@property (assign,nonatomic) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AVTransition * activeTransition;                                       //@synthesize activeTransition=_activeTransition - In the implementation block
@property (nonatomic,readonly) AVInteractiveTransitionGestureTracker * gestureTracker;              //@synthesize gestureTracker=_gestureTracker - In the implementation block
@property (nonatomic,retain) AVTransitionPresentationContext * presentationContext;                 //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) id<AVTransitionControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(BOOL)gestureTracker:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(BOOL)gestureTrackerShouldTrackPinchToPresent:(id)arg1 ;
-(BOOL)gestureTrackerShouldTrackPinchToDismiss:(id)arg1 ;
-(BOOL)gestureTrackerShouldTrackPanToDismiss:(id)arg1 ;
-(void)gestureTracker:(id)arg1 didBeginTrackingGesture:(long long)arg2 ;
-(void)gestureTracker:(id)arg1 didTrackPercentComplete:(double)arg2 translation:(CGPoint)arg3 rotation:(double)arg4 locationInWindow:(CGPoint)arg5 ;
-(void)gestureTrackerDidCancelTracking:(id)arg1 ;
-(void)gestureTrackerDidFinishTracking:(id)arg1 ;
-(void)transitionWillComplete:(id)arg1 success:(BOOL)arg2 ;
-(void)addInteractiveGesturesToView:(id)arg1 additionalGesture:(id)arg2 ;
-(void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginFullScreenDismissal:(/*^block*/id)arg1 ;
-(void)presentedViewControllerWasForciblyDismissedWithoutAnimation;
-(void)_recoverFromPresentationInStandaloneWindowIfNeeded:(id)arg1 ;
-(void)_createActiveTransitionAndPresentationContextIfNeededForTransitionContext:(id)arg1 ;
-(AVInteractiveTransitionGestureTracker *)gestureTracker;
-(AVTransition *)activeTransition;
-(void)setActiveTransition:(AVTransition *)arg1 ;
-(AVTransitionPresentationContext *)presentationContext;
-(void)setPresentationContext:(AVTransitionPresentationContext *)arg1 ;
-(void)setDelegate:(id<AVTransitionControllerDelegate>)arg1 ;
-(long long)state;
-(id<AVTransitionControllerDelegate>)delegate;
-(void)setState:(long long)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(BOOL)wantsInteractiveStart;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
@end
