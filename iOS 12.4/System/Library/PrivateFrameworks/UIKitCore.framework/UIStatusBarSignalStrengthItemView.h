/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

	int _signalStrengthRaw;
	int _signalStrengthBars;
	BOOL _enableRSSI;
	BOOL _showRSSI;
	BOOL _showFailure;
	BOOL _useSmallBars;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(id)_stringForRSSI;
-(BOOL)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(BOOL)arg3 showFailure:(BOOL)arg4 useSmallBars:(BOOL)arg5 ;
-(id)_signalStrengthBarsImageName;
@end
