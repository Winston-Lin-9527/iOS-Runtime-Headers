/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIContentModuleContainerTransition.h>

@class UIWindow;

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition {

	UIWindow* _snapshotHostWindow;
	CGAffineTransform _snapshotCorrectiveTransform;

}

@property (assign,nonatomic,__weak) UIWindow * snapshotHostWindow;                       //@synthesize snapshotHostWindow=_snapshotHostWindow - In the implementation block
@property (assign,nonatomic) CGAffineTransform snapshotCorrectiveTransform;              //@synthesize snapshotCorrectiveTransform=_snapshotCorrectiveTransform - In the implementation block
-(void)setSnapshotHostWindow:(UIWindow *)arg1 ;
-(void)setSnapshotCorrectiveTransform:(CGAffineTransform)arg1 ;
-(UIWindow *)snapshotHostWindow;
-(CGAffineTransform)snapshotCorrectiveTransform;
-(void)performWithCustomAnimator:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end
