/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SBRingerVolumeSliderView : UIView {

	double _value;
	UIView* _backgroundView;
	UIView* _fillView;

}

@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * fillView;                    //@synthesize fillView=_fillView - In the implementation block
@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setFillView:(UIView *)arg1 ;
-(UIView *)fillView;
@end
