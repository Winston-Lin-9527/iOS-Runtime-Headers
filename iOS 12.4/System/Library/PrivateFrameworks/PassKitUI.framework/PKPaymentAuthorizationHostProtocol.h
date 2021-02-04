/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationHostProtocol <NSObject>
@optional
-(void)authorizationDidPresent;
-(void)connectionDidOpen;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1;

@required
-(void)authorizationDidAuthorizePayment:(id)arg1;
-(void)authorizationDidFinishWithError:(id)arg1;
-(void)authorizationWillStart;
-(void)authorizationDidSelectPaymentMethod:(id)arg1;
-(void)authorizationDidSelectShippingMethod:(id)arg1;
-(void)authorizationDidSelectShippingAddress:(id)arg1;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePurchase:(id)arg1;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1;

@end
