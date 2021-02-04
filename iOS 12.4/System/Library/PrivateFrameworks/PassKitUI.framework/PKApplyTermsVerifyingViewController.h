/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKApplyController, NSString, CLInUseAssertion;

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController {

	PKApplyController* _applyController;
	NSString* _termsIdentifier;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	BOOL _isProcessingTerms;
	unsigned long long _featureIdentifier;
	CLInUseAssertion* _inUseAssertion;

}
-(void)_terminateSetupFlow;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)_showActivationSpinner:(BOOL)arg1 ;
-(void)_processTerms;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
