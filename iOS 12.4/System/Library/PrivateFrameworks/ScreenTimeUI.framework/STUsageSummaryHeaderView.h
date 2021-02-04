/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STTableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UISegmentedControl, PSSpecifier, UILabel, STSingleLineDetailTextHeaderView;

@interface STUsageSummaryHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView> {

	UISegmentedControl* _segmentedControl;
	PSSpecifier* _specifier;
	UILabel* _deviceNameLabel;
	STSingleLineDetailTextHeaderView* _singleLineHeaderView;

}

@property (nonatomic,readonly) UILabel * deviceNameLabel;                                            //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,readonly) STSingleLineDetailTextHeaderView * singleLineHeaderView;              //@synthesize singleLineHeaderView=_singleLineHeaderView - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * segmentedControl;                                //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * specifier;                                         //@synthesize specifier=_specifier - In the implementation block
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(void)reloadFromSpecifier;
-(void)startAnimatingSpinner;
-(void)stopAnimatingSpinner;
-(void)selectedSegmentIndexChanged:(id)arg1 ;
-(STSingleLineDetailTextHeaderView *)singleLineHeaderView;
-(UILabel *)deviceNameLabel;
-(UISegmentedControl *)segmentedControl;
@end
