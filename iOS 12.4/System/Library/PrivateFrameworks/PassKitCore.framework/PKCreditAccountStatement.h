/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDecimalNumber;

@interface PKCreditAccountStatement : NSObject <NSSecureCoding, PKRecordObject, NSCopying> {

	NSString* _identifier;
	NSDate* _openingDate;
	NSDate* _closingDate;
	NSDate* _paymentDueDate;
	NSString* _currencyCode;
	NSDecimalNumber* _statementBalance;
	NSDecimalNumber* _minimumDue;
	NSDecimalNumber* _purchases;
	NSDecimalNumber* _feesCharged;
	NSDecimalNumber* _interestCharged;
	NSDecimalNumber* _balanceTransfers;
	NSDecimalNumber* _paymentsAndCredits;
	NSDecimalNumber* _payments;
	NSDecimalNumber* _credits;
	NSDecimalNumber* _rewardsBalance;
	NSDecimalNumber* _rewardsEarned;
	NSDecimalNumber* _rewardsRedeemed;
	NSDecimalNumber* _rewardsYTD;
	NSDecimalNumber* _rewardsLifetime;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * openingDate;                              //@synthesize openingDate=_openingDate - In the implementation block
@property (nonatomic,copy) NSDate * closingDate;                              //@synthesize closingDate=_closingDate - In the implementation block
@property (nonatomic,copy) NSDate * paymentDueDate;                           //@synthesize paymentDueDate=_paymentDueDate - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * statementBalance;                //@synthesize statementBalance=_statementBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumDue;                      //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * purchases;                       //@synthesize purchases=_purchases - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * feesCharged;                     //@synthesize feesCharged=_feesCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * interestCharged;                 //@synthesize interestCharged=_interestCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balanceTransfers;                //@synthesize balanceTransfers=_balanceTransfers - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * paymentsAndCredits;              //@synthesize paymentsAndCredits=_paymentsAndCredits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * payments;                        //@synthesize payments=_payments - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * credits;                         //@synthesize credits=_credits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsBalance;                  //@synthesize rewardsBalance=_rewardsBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsEarned;                   //@synthesize rewardsEarned=_rewardsEarned - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsRedeemed;                 //@synthesize rewardsRedeemed=_rewardsRedeemed - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsYTD;                      //@synthesize rewardsYTD=_rewardsYTD - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsLifetime;                 //@synthesize rewardsLifetime=_rewardsLifetime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordNamePrefix;
+(id)recordType;
+(BOOL)supportsSecureCoding;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)currencyCode;
-(void)setRewardsBalance:(NSDecimalNumber *)arg1 ;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(void)setOpeningDate:(NSDate *)arg1 ;
-(void)setClosingDate:(NSDate *)arg1 ;
-(void)setStatementBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)minimumDue;
-(void)setMinimumDue:(NSDecimalNumber *)arg1 ;
-(void)setPurchases:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)feesCharged;
-(void)setFeesCharged:(NSDecimalNumber *)arg1 ;
-(void)setInterestCharged:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)balanceTransfers;
-(void)setBalanceTransfers:(NSDecimalNumber *)arg1 ;
-(void)setPaymentsAndCredits:(NSDecimalNumber *)arg1 ;
-(void)setPayments:(NSDecimalNumber *)arg1 ;
-(void)setCredits:(NSDecimalNumber *)arg1 ;
-(void)setRewardsEarned:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsRedeemed;
-(void)setRewardsRedeemed:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsYTD;
-(void)setRewardsYTD:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsLifetime;
-(void)setRewardsLifetime:(NSDecimalNumber *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSDecimalNumber *)statementBalance;
-(NSDate *)openingDate;
-(NSDate *)closingDate;
-(NSDecimalNumber *)purchases;
-(NSDecimalNumber *)interestCharged;
-(NSDecimalNumber *)payments;
-(NSDecimalNumber *)credits;
-(NSDecimalNumber *)paymentsAndCredits;
-(NSDecimalNumber *)rewardsEarned;
-(NSDecimalNumber *)rewardsBalance;
-(NSDate *)paymentDueDate;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end
