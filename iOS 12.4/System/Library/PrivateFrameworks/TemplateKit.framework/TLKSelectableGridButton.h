/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class TLKVibrantLabel, TLKStackView;

@interface TLKSelectableGridButton : UIButton {

	unsigned long long _style;
	TLKVibrantLabel* _topLabel;
	TLKVibrantLabel* _bottomLabel;
	TLKStackView* _stackView;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (retain) TLKVibrantLabel * topLabel;                      //@synthesize topLabel=_topLabel - In the implementation block
@property (retain) TLKVibrantLabel * bottomLabel;                   //@synthesize bottomLabel=_bottomLabel - In the implementation block
@property (retain) TLKStackView * stackView;                        //@synthesize stackView=_stackView - In the implementation block
+(id)selectableGridButton;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)_selectionColor;
-(TLKVibrantLabel *)topLabel;
-(void)setTopLabel:(TLKVibrantLabel *)arg1 ;
-(TLKVibrantLabel *)bottomLabel;
-(void)setBottomLabel:(TLKVibrantLabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(TLKStackView *)stackView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setStackView:(TLKStackView *)arg1 ;
@end
