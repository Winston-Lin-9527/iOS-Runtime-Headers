/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPeerPaymentRecipient, PKPeerPaymentRequestToken, PKPeerPaymentQuote, PKPeerPaymentPerformResponse, PKPeerPaymentQuoteCertificatesResponse, PKPeerPaymentQuoteRequest;

@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding> {

	unsigned long long state;
	unsigned long long mode;
	NSString* senderPhoneOrEmail;
	NSString* recipientPhoneOrEmail;
	PKPeerPaymentRecipient* recipient;
	NSString* recipientDisplayName;
	PKPeerPaymentRequestToken* requestToken;
	PKPeerPaymentQuote* quote;
	PKPeerPaymentPerformResponse* performQuoteResponse;
	PKPeerPaymentQuoteCertificatesResponse* quoteCertificatesResponse;
	NSString* accountName;
	NSString* accountNumber;
	NSString* routingNumber;
	PKPeerPaymentQuoteRequest* quoteRequest;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToPeerPaymentControllerInternalState:(id)arg1 ;
@end
