/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIStatusBarWindow;


@protocol _UICanvasUILifecycleStateMonitoring <_UICanvasLifecycleStateMonitoring>
@property (nonatomic,readonly) UIStatusBarWindow * statusBarWindow; 
@required
-(void)_transitionLifecycleStateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)forceDeactivateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2;
-(UIStatusBarWindow *)statusBarWindow;

@end
