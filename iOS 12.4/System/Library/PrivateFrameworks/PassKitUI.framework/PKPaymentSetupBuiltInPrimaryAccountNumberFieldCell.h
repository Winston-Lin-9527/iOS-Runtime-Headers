/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	BOOL _showsCameraCaptureButton;
	UIButton* _cameraCaptureButton;

}

@property (assign,nonatomic) BOOL showsCameraCaptureButton;                        //@synthesize showsCameraCaptureButton=_showsCameraCaptureButton - In the implementation block
@property (nonatomic,retain,readonly) UIButton * cameraCaptureButton;              //@synthesize cameraCaptureButton=_cameraCaptureButton - In the implementation block
-(void)setShowsCameraCaptureButton:(BOOL)arg1 ;
-(UIButton *)cameraCaptureButton;
-(void)setPaymentSetupField:(id)arg1 ;
-(BOOL)showsCameraCaptureButton;
-(id)init;
-(void)dealloc;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
@end
