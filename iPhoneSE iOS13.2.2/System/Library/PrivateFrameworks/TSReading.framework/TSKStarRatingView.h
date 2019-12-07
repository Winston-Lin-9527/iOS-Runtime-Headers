/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIControl.h>

@class TSKHorizontalDragRecognizer, TSUColor;

@interface TSKStarRatingView : UIControl {

	long long mRating;
	long long mRatingOnFingerDown;
	int mStyle;
	TSKHorizontalDragRecognizer* mDragGesture;
	BOOL mShowsDots;
	TSUColor* mColor;

}

@property (assign,nonatomic) long long value; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL showsDots; 
@property (nonatomic,copy) TSUColor * color; 
+(CGPathRef)newStarPath:(double)arg1 ;
+(void)renderRating:(long long)arg1 intoContext:(CGContextRef)arg2 rect:(CGRect)arg3 style:(int)arg4 showDots:(BOOL)arg5 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(Class)renderClass;
-(void)p_horizontalDrag:(id)arg1 ;
-(void)p_tapped:(id)arg1 ;
-(void)p_setupGestureRecognizers;
-(void)setShowsDots:(BOOL)arg1 ;
-(long long)p_starRatingForLocation:(double)arg1 ;
-(long long)p_starRatingForGesture:(id)arg1 ;
-(BOOL)showsDots;
@end
