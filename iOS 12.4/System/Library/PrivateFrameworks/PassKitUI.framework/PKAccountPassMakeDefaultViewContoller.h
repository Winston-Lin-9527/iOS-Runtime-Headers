/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKAccountFlowControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKAccountFlowController, PKAccountPostProvisioningContent, CLInUseAssertion, NSString;

@interface PKAccountPassMakeDefaultViewContoller : PKExplanationViewController <PKAccountFlowControllerDelegate, PKViewControllerPreflightable> {

	PKAccountFlowController* _accountController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	unsigned long long _featureIdentifier;
	PKAccountPostProvisioningContent* _makeDefaultPostProvisioningContent;
	CLInUseAssertion* _inUseAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_presentViewController:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)_terminateSetupFlow;
-(id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2 ;
-(BOOL)_willPerformProvisioningActions;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
@end
