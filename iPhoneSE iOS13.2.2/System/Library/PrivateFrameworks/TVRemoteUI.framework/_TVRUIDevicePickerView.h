/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class TVRUIDevicePickerViewController;

@interface _TVRUIDevicePickerView : UIView {

	TVRUIDevicePickerViewController* _viewController;

}

@property (assign,nonatomic,__weak) TVRUIDevicePickerViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(TVRUIDevicePickerViewController *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(TVRUIDevicePickerViewController *)viewController;
-(id)_initWithViewController:(id)arg1 ;
@end
