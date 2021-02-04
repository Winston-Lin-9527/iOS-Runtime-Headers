/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAnimation.h>

@class CABasicAnimation;

@interface UIScrollViewScrollAnimation : UIAnimation {

	CGPoint _originalOffset;
	CGPoint _targetOffset;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;
	CABasicAnimation* _customAnimation;

}
-(void)dealloc;
-(void)setProgress:(float)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
@end
