/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class NSLayoutConstraint, MKButtonWithTargetArgument;

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorTableViewCell {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
+(id)_font;
+(double)defaultHeight;
-(MKButtonWithTargetArgument *)button;
-(void)tintColorDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
@end
