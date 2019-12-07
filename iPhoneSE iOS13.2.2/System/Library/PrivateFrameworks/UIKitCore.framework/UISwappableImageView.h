/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface UISwappableImageView : UIImageView {

	UIImage* _image;
	UIImage* _alternateImage;
	BOOL _showAlternate;
	BOOL _updateImage;
	BOOL _bezel;
	int _bezelStyle;
	long long _barButtonItemStyle;

}
-(void)setImage:(id)arg1 ;
-(void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2 ;
-(void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2 iconTintColor:(id)arg3 iconTintColorDidChange:(BOOL)arg4 ;
-(void)updateImageIfNeededWithTintColor:(id)arg1 ;
-(void)updateImageIfNeeded;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 barStyle:(long long)arg3 barButtonItemStyle:(long long)arg4 tintColor:(id)arg5 bezel:(BOOL)arg6 ;
-(void)showAlternateImage:(BOOL)arg1 ;
@end
