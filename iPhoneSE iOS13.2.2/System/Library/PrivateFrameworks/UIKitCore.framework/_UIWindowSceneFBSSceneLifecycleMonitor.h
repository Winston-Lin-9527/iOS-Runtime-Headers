/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneLifecycleMonitor.h>

@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {

	NSNumber* _transitioningState;
	BOOL _transitioning;
	BOOL _connected;

}
-(id)initWithScene:(id)arg1 ;
-(long long)currentActivationState;
-(void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(/*^block*/id)arg4 ;
-(void)willBecomeActive;
-(void)didEnterBackground;
-(id)_windowScene;
@end
