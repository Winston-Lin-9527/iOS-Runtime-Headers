/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentQuote* _quote;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * quote;              //@synthesize quote=_quote - In the implementation block
-(PKPeerPaymentQuote *)quote;
-(id)initWithData:(id)arg1 ;
@end
