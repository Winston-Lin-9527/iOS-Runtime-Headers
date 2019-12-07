/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding> {

	BOOL _inStorePurchase;
	long long _feature;
	NSData* _merchandisingImageData;
	NSDecimalNumber* _openToBuyThresholdAmount;
	NSDecimalNumber* _bindingTotalAmount;
	NSString* _currencyCode;
	NSString* _installmentMerchantIdentifier;

}

@property (assign,nonatomic) long long feature;                                          //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) NSData * merchandisingImageData;                              //@synthesize merchandisingImageData=_merchandisingImageData - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * openToBuyThresholdAmount;                 //@synthesize openToBuyThresholdAmount=_openToBuyThresholdAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * bindingTotalAmount;                       //@synthesize bindingTotalAmount=_bindingTotalAmount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                      //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,getter=isInStorePurchase,nonatomic) BOOL inStorePurchase;              //@synthesize inStorePurchase=_inStorePurchase - In the implementation block
@property (nonatomic,copy) NSString * installmentMerchantIdentifier;                     //@synthesize installmentMerchantIdentifier=_installmentMerchantIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(long long)feature;
-(void)setFeature:(long long)arg1 ;
-(void)setBindingTotalAmount:(NSDecimalNumber *)arg1 ;
-(void)setInStorePurchase:(BOOL)arg1 ;
-(void)setOpenToBuyThresholdAmount:(NSDecimalNumber *)arg1 ;
-(void)setMerchandisingImageData:(NSData *)arg1 ;
-(BOOL)isEqualToInstallmentConfiguration:(id)arg1 ;
-(NSData *)merchandisingImageData;
-(NSDecimalNumber *)openToBuyThresholdAmount;
-(NSDecimalNumber *)bindingTotalAmount;
-(BOOL)isInStorePurchase;
-(NSString *)installmentMerchantIdentifier;
-(void)setInstallmentMerchantIdentifier:(NSString *)arg1 ;
@end
