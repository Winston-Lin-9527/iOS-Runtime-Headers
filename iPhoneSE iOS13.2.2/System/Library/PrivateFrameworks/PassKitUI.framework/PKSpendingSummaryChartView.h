/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIFont, PKSpendingSummary, NSCalendar;

@interface PKSpendingSummaryChartView : UIView {

	NSMutableArray* _valueLabels;
	NSMutableArray* _legendLabels;
	NSMutableArray* _horizontalAxis;
	NSMutableArray* _bars;
	UIFont* _fontForLabels;
	UIFont* _fontForValues;
	PKSpendingSummary* _summary;
	double _chartMaxAmount;
	double _groupsMaxAmount;
	unsigned long long _axisCount;
	unsigned long long _presentationStyle;
	NSCalendar* _currentCalendar;
	BOOL _isCompactUI;
	BOOL _showLegend;
	BOOL _blurDisabled;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL showLegend;                                      //@synthesize showLegend=_showLegend - In the implementation block
@property (assign,getter=isBlurDisabled,nonatomic) BOOL blurDisabled;              //@synthesize blurDisabled=_blurDisabled - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                        //@synthesize visible=_visible - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)setShowLegend:(BOOL)arg1 ;
-(void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2 ;
-(BOOL)showLegend;
-(BOOL)isBlurDisabled;
@end
