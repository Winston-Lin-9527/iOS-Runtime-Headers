/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockOverlayView.h>

@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView {

	UIImageView* _warningIconView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_titleFont;
-(id)_subtitleFont;
-(double)_titleBaseline;
-(double)_subtitleBaseline;
-(double)_iconYPosition;
@end
