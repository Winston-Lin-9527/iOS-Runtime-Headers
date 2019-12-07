/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>

@protocol PKPaymentDataProvider;
@class PKAccount, PKAccountService, PKInstallmentPlan, PKPaymentPass, PKAccountServiceAccountResolutionController, NSArray, NSString, PKSplashImageHeaderView;

@interface PKInstallmentPlanHistoryViewController : PKSectionTableViewController <PKAccountServiceAccountResolutionControllerDelegate> {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKInstallmentPlan* _installmentPlan;
	PKPaymentPass* _paymentPass;
	PKAccountServiceAccountResolutionController* _resolutionController;
	id<PKPaymentDataProvider> _dataProvider;
	NSArray* _transactions;
	NSString* _deviceName;
	PKSplashImageHeaderView* _headerView;
	double _headerHeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_handleAccountChangedNotification:(id)arg1 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateWithInstallmentPlan:(id)arg1 ;
-(void)_configureHeader;
-(id)_paymentDetailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_paymentHistoryCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_makePaymentCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_presentTransactionDetailsForTransaction:(id)arg1 ;
-(void)_presentBillPayment;
-(id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_totalCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 paymentPass:(id)arg4 dataProvider:(id)arg5 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
@end
