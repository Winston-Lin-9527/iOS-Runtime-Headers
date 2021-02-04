/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLDismissGestureTracking <NSObject>
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) CGPoint trackedCenter; 
@property (nonatomic,readonly) CGRect trackedBounds; 
@property (nonatomic,readonly) CGAffineTransform trackedTransform; 
@property (nonatomic,readonly) QLDismissGestureTrackingVelocity trackedVelocity; 
@property (nonatomic,readonly) double finalAnimationDuration; 
@property (nonatomic,readonly) double finalAnimationSpringDamping; 
@property (nonatomic,readonly) double dismissalProgress; 
@property (nonatomic,readonly) BOOL shouldFinishDismissal; 
@required
-(double)dismissalProgress;
-(BOOL)shouldFinishDismissal;
-(CGPoint)trackedCenter;
-(CGRect)trackedBounds;
-(CGAffineTransform)trackedTransform;
-(QLDismissGestureTrackingVelocity)trackedVelocity;
-(double)finalAnimationDuration;
-(double)finalAnimationSpringDamping;
-(CGPoint)anchorPoint;

@end
