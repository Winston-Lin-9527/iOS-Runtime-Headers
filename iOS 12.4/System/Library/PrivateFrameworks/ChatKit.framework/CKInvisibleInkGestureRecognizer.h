/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface CKInvisibleInkGestureRecognizer : UIGestureRecognizer {

	UITouch* _firstTouch;
	double _startTime;
	CGPoint _startLocation;

}

@property (nonatomic,retain) UITouch * firstTouch;               //@synthesize firstTouch=_firstTouch - In the implementation block
@property (assign,nonatomic) CGPoint startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) double startTime;                   //@synthesize startTime=_startTime - In the implementation block
-(void)setFirstTouch:(UITouch *)arg1 ;
-(UITouch *)firstTouch;
-(BOOL)_hasActiveTouchesInEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(CGPoint)startLocation;
-(void)setStartLocation:(CGPoint)arg1 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
@end
