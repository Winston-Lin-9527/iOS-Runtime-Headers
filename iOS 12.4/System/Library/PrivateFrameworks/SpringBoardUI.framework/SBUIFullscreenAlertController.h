/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {

	BOOL _shouldAnimateIn;
	NSNumber* _animationStartTime;
	NSString* _activationContext;
	NSInvocation* _pendingDeactivationInvocation;

}

@property (assign,nonatomic) BOOL shouldAnimateIn;                       //@synthesize shouldAnimateIn=_shouldAnimateIn - In the implementation block
@property (nonatomic,retain) NSNumber * animationStartTime;              //@synthesize animationStartTime=_animationStartTime - In the implementation block
@property (nonatomic,retain) NSString * activationContext;               //@synthesize activationContext=_activationContext - In the implementation block
-(BOOL)allowSuspension;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2 ;
-(BOOL)isSlidingViewController;
-(void)finishedAnimatingIn;
-(void)finishedAnimatingOut;
-(void)requestActivationAnimated:(BOOL)arg1 animateCurrentDisplayOut:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(void)requestDeactivationAnimated:(BOOL)arg1 animateOldDisplayInWithStyle:(int)arg2 ;
-(void)removeBackgroundStyleWithDuration:(double)arg1 ;
-(void)viewWillAnimateIn;
-(void)viewWillAnimateOut;
-(void)animateViewIn;
-(void)animateViewOut;
-(BOOL)viewIsReadyToBeRemoved;
-(BOOL)hasTranslucentBackground;
-(BOOL)allowStackingOfAlert:(id)arg1 ;
-(BOOL)wantsHomeButtonPress;
-(BOOL)handleMenuButtonTap;
-(void)handleAutoLock;
-(void)didFinishLaunchingFrontmost;
-(void)setPendingDeactivationInvocation:(id)arg1 ;
-(id)pendingDeactivationInvocation;
-(BOOL)shouldAnimateIn;
-(void)setShouldAnimateIn:(BOOL)arg1 ;
-(NSString *)activationContext;
-(void)setActivationContext:(NSString *)arg1 ;
-(void)setWallpaperTunnelActive:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewDidLoad;
-(BOOL)definesPresentationContext;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(void)setAnimationStartTime:(NSNumber *)arg1 ;
-(NSNumber *)animationStartTime;
@end
