/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FAConfirmIdentityViewController.h>
#import <libobjc.A.dylib/FAFamilySetupPage.h>

@protocol FAFamilySetupPageDelegate;
@class NSString;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage> {

	id<FAFamilySetupPageDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FAFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)instructions;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(id)_createCancelButton;
-(void)setDelegate:(id<FAFamilySetupPageDelegate>)arg1 ;
-(id<FAFamilySetupPageDelegate>)delegate;
-(void)viewDidLoad;
-(id)pageTitle;
@end
