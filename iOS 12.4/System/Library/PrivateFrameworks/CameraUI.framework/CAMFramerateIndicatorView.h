/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView {

	long long _layoutStyle;
	long long _style;
	UIImageView* __borderImageView;
	UILabel* __label;

}

@property (nonatomic,readonly) UIImageView * _borderImageView;              //@synthesize _borderImageView=__borderImageView - In the implementation block
@property (nonatomic,readonly) UILabel * _label;                            //@synthesize _label=__label - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long style;                               //@synthesize style=_style - In the implementation block
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_updateForAppearanceChange;
-(long long)_framesPerSecond;
-(UIImageView *)_borderImageView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(UILabel *)_label;
-(void)_updateAppearance;
@end
