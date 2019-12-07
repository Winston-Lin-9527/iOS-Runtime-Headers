/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, UIImageView, UILabel, NSLayoutConstraint, UIImage;

@interface STDashedVerticalDivider : UIView {

	BOOL _selected;
	NSString* _labelText;
	NSLayoutXAxisAnchor* _dashedLineCenterXAnchor;
	NSLayoutYAxisAnchor* _labelTopAnchor;
	UIImageView* _dashedLine;
	UILabel* _label;
	NSLayoutConstraint* _labelLeftConstraint;

}

@property (nonatomic,retain) UIImageView * dashedLine;                              //@synthesize dashedLine=_dashedLine - In the implementation block
@property (nonatomic,retain) UILabel * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeftConstraint;              //@synthesize labelLeftConstraint=_labelLeftConstraint - In the implementation block
@property (readonly) UIImage * dashedLineImage; 
@property (nonatomic,copy) NSString * labelText;                                    //@synthesize labelText=_labelText - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * dashedLineCenterXAnchor;                 //@synthesize dashedLineCenterXAnchor=_dashedLineCenterXAnchor - In the implementation block
@property (readonly) NSLayoutYAxisAnchor * labelTopAnchor;                          //@synthesize labelTopAnchor=_labelTopAnchor - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                       //@synthesize selected=_selected - In the implementation block
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(UIImage *)dashedLineImage;
-(NSLayoutConstraint *)labelLeftConstraint;
-(id)initWithTintColor:(id)arg1 ;
-(NSLayoutXAxisAnchor *)dashedLineCenterXAnchor;
-(NSLayoutYAxisAnchor *)labelTopAnchor;
-(UIImageView *)dashedLine;
-(void)setDashedLine:(UIImageView *)arg1 ;
-(void)setLabelLeftConstraint:(NSLayoutConstraint *)arg1 ;
@end
