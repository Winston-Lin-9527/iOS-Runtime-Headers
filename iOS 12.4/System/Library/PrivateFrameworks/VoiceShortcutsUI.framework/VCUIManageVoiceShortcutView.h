/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class VCUIManageVoiceShortcutViewController;

@interface VCUIManageVoiceShortcutView : UIView {

	BOOL _showRecordingButtonOverlay;
	BOOL _showRecordingButtonOverlayDescription;
	VCUIManageVoiceShortcutViewController* _controller;

}

@property (assign,nonatomic,__weak) VCUIManageVoiceShortcutViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) BOOL showRecordingButtonOverlay;                                      //@synthesize showRecordingButtonOverlay=_showRecordingButtonOverlay - In the implementation block
@property (nonatomic,readonly) BOOL showRecordingButtonOverlayDescription;                           //@synthesize showRecordingButtonOverlayDescription=_showRecordingButtonOverlayDescription - In the implementation block
-(VCUIManageVoiceShortcutViewController *)controller;
-(void)setController:(VCUIManageVoiceShortcutViewController *)arg1 ;
-(id)initWithController:(id)arg1 options:(id)arg2 ;
-(BOOL)showRecordingButtonOverlay;
-(BOOL)showRecordingButtonOverlayDescription;
-(void)updateButtonTrayDelta:(double)arg1 ;
-(void)updateScrollViewHeight:(double)arg1 ;
-(id)createDonationDetailViewForController:(id)arg1 ;
@end
