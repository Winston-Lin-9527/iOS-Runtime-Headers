/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@protocol PKAccountWebServiceApplePayTrustProtocol;
@class PKApplePayTrustSignature;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {

	id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
	PKApplePayTrustSignature* _signature;

}

@property (nonatomic,retain) PKApplePayTrustSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(Class)responseClass;
-(PKApplePayTrustSignature *)signature;
-(id)endpointComponents;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(id)initWithApplePayTrustProtocol:(id)arg1 ;
-(void)setSignature:(PKApplePayTrustSignature *)arg1 ;
@end
