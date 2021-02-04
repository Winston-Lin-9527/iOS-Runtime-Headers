/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UILegibilityView, NSArray, UILayoutGuide, NSString, UIFont, NSAttributedString, UIColor, _UILegibilitySettings;

@interface WALegibilityLabel : UIView {

	UILabel* _lookasideLabel;
	_UILegibilityView* _legibilityView;
	BOOL _isDirty;
	double _strength;
	long long _options;
	NSArray* _legibilityConstraints;
	UILayoutGuide* _firstBaselineLayoutGuide;
	UILayoutGuide* _lastBaselineLayoutGuide;
	NSString* _text;
	UIFont* _font;
	NSAttributedString* _attributedText;
	UIColor* _textColorOverride;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (nonatomic,readonly) double firstBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double baselineOffset; 
-(void)_updateLegibilityView;
-(double)firstBaselineOffsetFromBottom;
-(void)_markOurselfDirty;
-(void)_updateLabelForLegibilitySettings;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(double)_layoutGuideOffsetFromBottom:(id)arg1 ;
-(double)lastBaselineOffsetFromBottom;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(void)updateConstraints;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(BOOL)adjustsFontSizeToFitWidth;
-(double)minimumScaleFactor;
-(id)viewForLastBaselineLayout;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)updateForChangedSettings:(id)arg1 ;
-(double)baselineOffset;
-(id)viewForFirstBaselineLayout;
@end
