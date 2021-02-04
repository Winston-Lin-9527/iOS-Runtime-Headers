/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLPlatterHeaderContentView.h>

@class NSArray;

@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView {

	NSArray* _iconButtonShadows;

}
-(void)setDateAllDay:(BOOL)arg1 ;
-(void)setDateFormatStyle:(long long)arg1 ;
-(double)_headerHeightForWidth:(double)arg1 ;
-(void)_configureIconButtonsForIcons:(id)arg1 ;
-(double)_iconDimension;
-(double)_iconLeadingPadding;
-(double)_iconTrailingPadding;
-(void)_configureDateLabel;
-(void)_layoutIconButtonsWithScale:(double)arg1 ;
-(void)_layoutUtilityButtonWithScale:(double)arg1 ;
-(void)_layoutDateLabelWithScale:(double)arg1 ;
-(void)_layoutTitleLabelWithScale:(double)arg1 ;
-(void)_updateStylingForTitleLabel:(id)arg1 ;
-(void)_updateUtilityButtonVibrantStyling;
-(void)_updateUtilityButtonFont;
-(void)_configureUtilityButton;
-(double)_largeTextLabelBaselineOffsetFromBottom;
-(CGRect)_titleLabelBoundsForSize:(CGSize)arg1 ;
-(id)_iconShadowImageForIcon:(id)arg1 ;
-(id)_ellipsisHighlightedBackgroundImage;
-(double)_titleFirstLineCenterY;
-(double)_largeTextTitleLabelBaselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDate:(id)arg1 ;
@end
