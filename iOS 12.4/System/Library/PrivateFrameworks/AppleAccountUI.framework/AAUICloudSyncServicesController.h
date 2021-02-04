/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAValidityCheckConsumer.h>

@class ACAccountStore, ACAccount, NSMutableDictionary, NSMutableArray, MFAccountValidator, AAAutoAccountVerifier, DAAccount, NSString;

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer> {

	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSMutableDictionary* _queuedDataclassActions;
	NSMutableArray* _dataclassesRequiringMergeDecision;
	NSMutableDictionary* _queuedDataclassStates;
	BOOL _didUserConsentToMerge;
	BOOL _isVerifyingExistingEmailAccount;
	MFAccountValidator* _validator;
	AAAutoAccountVerifier* _verifier;
	DAAccount* _accountBeingValidated;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2 ;
+(BOOL)_isInstalledSystemApplication:(id)arg1 ;
+(Class)_accountClassForAddress:(id)arg1 ;
+(id)_usernameFromAddress:(id)arg1 ;
+(id)_domainFromAddress:(id)arg1 ;
+(BOOL)canAutoSetupMailAccount:(id)arg1 ;
+(BOOL)needSetupForMailAccount:(id)arg1 ;
-(id)_account;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
-(void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2 ;
-(void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2 ;
-(void)_createAndValidateDAMailAccountWithProperties:(id)arg1 ;
-(void)_createAndValidateMailAccountWithProperties:(id)arg1 ;
-(void)_validateDAAccount:(id)arg1 ;
-(void)_validateMailAccount:(id)arg1 ;
-(void)_addDAEmailAccount:(id)arg1 ;
-(void)_addMailAccount:(id)arg1 ;
-(void)setCloudServicesEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackupEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeEnablingCloudServicesWithCompletion:(/*^block*/id)arg1 ;
-(void)verifyAccountWithAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)setDeviceLocatorEnabled:(BOOL)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
