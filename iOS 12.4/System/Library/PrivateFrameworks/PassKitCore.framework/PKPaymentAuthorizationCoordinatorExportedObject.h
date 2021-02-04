/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>

@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;
@class NSObject, PKPaymentAuthorizationCoordinator, NSString;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<PKPaymentAuthorizationCoordinatorDelegate> _delegate;
	id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
	PKPaymentAuthorizationCoordinator* _controller;
	id<PKPaymentAuthorizationServiceProtocol> _serviceProxy;

}

@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationCoordinator * controller;                                           //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;                                   //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)arg1 ;
-(void)setServiceProxy:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(id<PKPaymentAuthorizationServiceProtocol>)serviceProxy;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidPresent;
-(void)connectionDidOpen;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentAuthorizationCoordinatorDelegate>)arg1 ;
-(id<PKPaymentAuthorizationCoordinatorDelegate>)delegate;
-(PKPaymentAuthorizationCoordinator *)controller;
-(void)setController:(PKPaymentAuthorizationCoordinator *)arg1 ;
-(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)privateDelegate;
@end
