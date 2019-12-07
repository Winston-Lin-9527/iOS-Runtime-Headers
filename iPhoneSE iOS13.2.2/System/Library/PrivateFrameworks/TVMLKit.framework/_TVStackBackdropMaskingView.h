/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, _TVStackBackdropView;

@interface _TVStackBackdropMaskingView : UIView {

	CAGradientLayer* _gradientLayer;
	_TVStackBackdropView* _backdropView;
	double _gradientScale;
	double _gradientStop;

}

@property (nonatomic,retain) _TVStackBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) double gradientScale;                             //@synthesize gradientScale=_gradientScale - In the implementation block
@property (assign,nonatomic) double gradientStop;                              //@synthesize gradientStop=_gradientStop - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TVStackBackdropView *)backdropView;
-(void)setBackdropView:(_TVStackBackdropView *)arg1 ;
-(double)gradientScale;
-(double)gradientStop;
-(void)setGradientScale:(double)arg1 ;
-(void)setGradientStop:(double)arg1 ;
@end
