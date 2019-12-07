/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class NSNumber, NSArray;

@interface SSRentalCheckinRequest : SSRequest {

	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
-(id)init;
-(void)dealloc;
-(NSNumber *)accountIdentifier;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(NSArray *)sinfs;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
@end
