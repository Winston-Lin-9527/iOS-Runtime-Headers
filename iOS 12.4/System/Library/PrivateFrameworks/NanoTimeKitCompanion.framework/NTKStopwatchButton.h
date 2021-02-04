/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>

@class CLKDevice, UIView, NTKColoringImageView, UIColor;

@interface NTKStopwatchButton : UIControl {

	CLKDevice* _device;
	UIView* _innerView;
	NTKColoringImageView* _glyphView;
	UIColor* _glyphColor;
	UIColor* _glyphBackgroundColor;
	UIEdgeInsets _touchEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;                //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                        //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIColor * glyphBackgroundColor;              //@synthesize glyphBackgroundColor=_glyphBackgroundColor - In the implementation block
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)glyphBackgroundColor;
-(void)setGlyphBackgroundColor:(UIColor *)arg1 ;
-(UIEdgeInsets)touchEdgeInsets;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end
