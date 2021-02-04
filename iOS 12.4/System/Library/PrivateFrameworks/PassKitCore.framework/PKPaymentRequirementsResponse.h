/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {

	long long _status;
	NSArray* _requiredPaymentSetupFields;
	NSString* _productIdentifier;
	NSArray* _possibleProducts;
	NSURL* _learnMoreURL;
	NSString* _nonce;

}

@property (nonatomic,readonly) long long status;                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredPaymentSetupFields;              //@synthesize requiredPaymentSetupFields=_requiredPaymentSetupFields - In the implementation block
@property (nonatomic,copy,readonly) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * possibleProducts;                        //@synthesize possibleProducts=_possibleProducts - In the implementation block
@property (nonatomic,copy,readonly) NSURL * learnMoreURL;                              //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProduct:(id)arg1 ;
-(id)initWithProvisioningMethodMetadata:(id)arg1 ;
-(id)initWithRemoteCredential:(id)arg1 ;
-(NSArray *)requiredPaymentSetupFields;
-(NSURL *)learnMoreURL;
-(NSString *)productIdentifier;
-(NSString *)nonce;
-(NSArray *)possibleProducts;
-(long long)status;
-(id)initWithData:(id)arg1 ;
@end
