/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKAccountFlowControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKAccountFlowController, UIViewController, UINotificationFeedbackGenerator, CLLocationManager, NSString;

@interface PKAccountPassActivationResultViewController : PKExplanationViewController <PKAccountFlowControllerDelegate> {

	PKAccountFlowController* _accountController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	unsigned long long _featureIdentifier;
	long long _setupContext;
	UIViewController* _nextViewController;
	UINotificationFeedbackGenerator* _cardAddedFeedbackGenerator;
	CLLocationManager* _locationManager;
	BOOL _didMakeAccountPassDefault;
	BOOL _showingLoadingIndicator;

}

@property (assign,nonatomic) BOOL didMakeAccountPassDefault;              //@synthesize didMakeAccountPassDefault=_didMakeAccountPassDefault - In the implementation block
@property (assign,nonatomic) BOOL showingLoadingIndicator;                //@synthesize showingLoadingIndicator=_showingLoadingIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_presentViewController:(id)arg1 ;
-(void)_updateUI;
-(void)_handleNextStep;
-(void)_terminateSetupFlow;
-(id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)setShowingLoadingIndicator:(BOOL)arg1 ;
-(void)setDidMakeAccountPassDefault:(BOOL)arg1 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2 ;
-(BOOL)_willPerformProvisioningActions;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)_showActivationSpinner:(BOOL)arg1 ;
-(void)_updateForLoading;
-(void)_updateForMadeDefault;
-(void)_updateForSetupLater;
-(id)_localizedStringKeyForPerformedOperations;
-(BOOL)_shouldPromptForPhysicalCardLocationAccess;
-(void)_promptForPhysicalCardLocationAuthorization;
-(id)_setupLaterBodyString;
-(BOOL)didMakeAccountPassDefault;
-(BOOL)showingLoadingIndicator;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
@end
