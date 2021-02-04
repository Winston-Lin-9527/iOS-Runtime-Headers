/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>

@protocol PKPeerPaymentUpdatedTermsViewControllerDelegate;
@class NSString;

@interface PKPeerPaymentUpdatedTermsViewController : PKExplanationViewController <PKExplanationViewControllerDelegate> {

	NSString* _uniqueID;
	id<PKPeerPaymentUpdatedTermsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPeerPaymentUpdatedTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showSpinner:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(id)initWithPassUniqueID:(id)arg1 ;
-(void)setDelegate:(id<PKPeerPaymentUpdatedTermsViewControllerDelegate>)arg1 ;
-(id<PKPeerPaymentUpdatedTermsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end
