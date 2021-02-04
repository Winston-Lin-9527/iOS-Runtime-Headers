/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, SKUIClientContext, NSURL, NSHashTable, NSOperationQueue;

@interface SKUIDonationConfiguration : NSObject {

	NSArray* _charities;
	NSMutableDictionary* _charityImages;
	SKUIClientContext* _clientContext;
	NSURL* _donationPurchaseURL;
	NSURL* _donationValidationURL;
	NSHashTable* _observers;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSArray * allCharities;                         //@synthesize charities=_charities - In the implementation block
@property (nonatomic,readonly) NSURL * donationPurchaseURL;                    //@synthesize donationPurchaseURL=_donationPurchaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * donationValidationURL;                  //@synthesize donationValidationURL=_donationValidationURL - In the implementation block
-(SKUIClientContext *)clientContext;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(void)loadConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_setLogoImage:(id)arg1 forCharity:(id)arg2 ;
-(id)charityForIdentifier:(id)arg1 ;
-(void)loadLogoForCharity:(id)arg1 ;
-(id)logoImageForCharity:(id)arg1 ;
-(NSArray *)allCharities;
-(NSURL *)donationValidationURL;
-(NSURL *)donationPurchaseURL;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end
