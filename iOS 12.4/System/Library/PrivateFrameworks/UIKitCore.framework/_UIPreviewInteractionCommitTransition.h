/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, UIWindow;

@interface _UIPreviewInteractionCommitTransition : NSObject {

	UIViewController* _viewController;
	UIWindow* _currentCommitEffectWindow;

}

@property (nonatomic,retain) UIViewController * viewController;                 //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIWindow * currentCommitEffectWindow;              //@synthesize currentCommitEffectWindow=_currentCommitEffectWindow - In the implementation block
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 ;
-(void)setCurrentCommitEffectWindow:(UIWindow *)arg1 ;
-(BOOL)_shouldReduceMotion;
-(id)_preferredTransitionAnimatorForReducedMotion;
-(id)_preferredTransitionAnimator;
-(void)_applyCommitEffectTransformToView:(id)arg1 ;
-(void)performTransitionWithPresentationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(UIWindow *)currentCommitEffectWindow;
@end
