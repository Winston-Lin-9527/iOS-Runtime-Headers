/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIClickInteractionDriving <NSObject>
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate; 
@property (assign,nonatomic,__weak) UIView * view; 
@property (assign,nonatomic) double allowableMovement; 
@required
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(void)setView:(id)arg1;
-(void)setAllowableMovement:(double)arg1;
-(double)allowableMovement;
-(void)cancelInteraction;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;

@end
