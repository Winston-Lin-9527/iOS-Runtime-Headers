/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKFeatureTermsAndConditionsViewController.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@class PKApplyController, NSString, CLInUseAssertion;

@interface PKApplyTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController <PKViewControllerPreflightable> {

	PKApplyController* _applyController;
	NSString* _termsIdentifier;
	CLInUseAssertion* _inUseAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayTitle;
-(void)_terminateSetupFlow;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)termsShown;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
