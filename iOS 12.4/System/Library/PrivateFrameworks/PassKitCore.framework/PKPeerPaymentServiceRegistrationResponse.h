/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSString* _peerPaymentServicesPushTopic;
	NSURL* _peerPaymentServiceURL;

}

@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * peerPaymentServicesPushTopic;              //@synthesize peerPaymentServicesPushTopic=_peerPaymentServicesPushTopic - In the implementation block
@property (nonatomic,copy,readonly) NSURL * peerPaymentServiceURL;                        //@synthesize peerPaymentServiceURL=_peerPaymentServiceURL - In the implementation block
-(NSString *)deviceIdentifier;
-(NSURL *)peerPaymentServiceURL;
-(NSString *)peerPaymentServicesPushTopic;
-(id)initWithData:(id)arg1 ;
@end
