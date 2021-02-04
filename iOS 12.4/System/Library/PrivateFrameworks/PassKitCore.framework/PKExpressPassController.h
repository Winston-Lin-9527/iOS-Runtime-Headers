/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentDataProvider, PKPassLibraryDataProvider;
@interface PKExpressPassController : NSObject {

	id<PKPaymentDataProvider> _paymentDataProvider;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	BOOL _isForWatch;
	BOOL _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
	id _presentingViewController;
	long long _apiVersion;

}

@property (assign,nonatomic,__weak) id presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) long long apiVersion;                            //@synthesize apiVersion=_apiVersion - In the implementation block
-(id)expressModeUpgradeRequestForPass:(id)arg1 ;
-(void)setApiVersion:(long long)arg1 ;
-(id)expressState;
-(void)disableExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)enableExpressModeWithPassInformation:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)expressModeSupportedForPass:(id)arg1 ;
-(void)conflictingExpressPassesWithPassInformation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deviceUsesAutomaticAuthorization;
-(long long)apiVersion;
-(id)validExpressModeUpgradeRequestForPass:(id)arg1 ;
-(void)upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPaymentDataProvider:(id)arg1 passLibraryDataProvider:(id)arg2 isForWatch:(BOOL)arg3 ;
-(BOOL)isExpressModeEnabledForPass:(id)arg1 ;
-(id)presentingViewController;
-(void)setPresentingViewController:(id)arg1 ;
@end
