/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDynamicValueConvergenceAnimation;

@interface _UIFocusMotionEffectsController : NSObject {

	_UIDynamicValueConvergenceAnimation* _rollbackAnimation;
	CGPoint _currentOffset;

}

@property (nonatomic,readonly) CGPoint currentOffset;              //@synthesize currentOffset=_currentOffset - In the implementation block
-(void)reset;
-(void)cancelRollbackAnimation;
-(CGPoint)currentOffset;
-(void)updateCurrentOffset:(CGPoint)arg1 ;
-(void)startRollbackAnimation;
@end
