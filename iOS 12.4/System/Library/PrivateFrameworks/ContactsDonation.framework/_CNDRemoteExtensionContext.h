/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/_CNDExtensionContext.h>
#import <libobjc.A.dylib/_CNDRemoteExtensionContextProtocol.h>

@class CNDonationExtensionRequestHandler, NSString;

@interface _CNDRemoteExtensionContext : _CNDExtensionContext <_CNDRemoteExtensionContextProtocol> {

	CNDonationExtensionRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CNDonationExtensionRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
-(id)hostContext;
-(void)setRequestHandler:(CNDonationExtensionRequestHandler *)arg1 ;
-(CNDonationExtensionRequestHandler *)requestHandler;
@end
