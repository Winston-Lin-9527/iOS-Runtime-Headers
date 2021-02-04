/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBFlight.h>
@class NSString, NSArray, NSData;


@protocol _SFPBFlight <NSObject>
@property (nonatomic,copy) NSString * flightID; 
@property (nonatomic,copy) NSString * carrierCode; 
@property (nonatomic,copy) NSString * carrierName; 
@property (nonatomic,copy) NSString * flightNumber; 
@property (nonatomic,copy) NSArray * legs; 
@property (nonatomic,copy) NSString * operatorCarrierCode; 
@property (nonatomic,copy) NSString * operatorFlightNumber; 
@property (nonatomic,copy) NSString * carrierPhoneNumber; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSArray *)legs;
-(void)setLegs:(id)arg1;
-(unsigned long long)legsCount;
-(void)clearLegs;
-(void)addLegs:(id)arg1;
-(id)legsAtIndex:(unsigned long long)arg1;
-(void)setFlightID:(id)arg1;
-(void)setCarrierCode:(id)arg1;
-(void)setCarrierName:(id)arg1;
-(void)setCarrierPhoneNumber:(id)arg1;
-(void)setFlightNumber:(id)arg1;
-(void)setOperatorCarrierCode:(id)arg1;
-(void)setOperatorFlightNumber:(id)arg1;
-(NSString *)flightNumber;
-(NSString *)carrierName;
-(NSString *)operatorFlightNumber;
-(NSString *)operatorCarrierCode;
-(NSString *)flightID;
-(NSString *)carrierPhoneNumber;
-(NSString *)carrierCode;
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBFlight : PBCodable <_SFPBFlight, NSSecureCoding> {

	NSString* _flightID;
	NSString* _carrierCode;
	NSString* _carrierName;
	NSString* _flightNumber;
	NSArray* _legs;
	NSString* _operatorCarrierCode;
	NSString* _operatorFlightNumber;
	NSString* _carrierPhoneNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * flightID;                          //@synthesize flightID=_flightID - In the implementation block
@property (nonatomic,copy) NSString * carrierCode;                       //@synthesize carrierCode=_carrierCode - In the implementation block
@property (nonatomic,copy) NSString * carrierName;                       //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy) NSString * flightNumber;                      //@synthesize flightNumber=_flightNumber - In the implementation block
@property (nonatomic,copy) NSArray * legs;                               //@synthesize legs=_legs - In the implementation block
@property (nonatomic,copy) NSString * operatorCarrierCode;               //@synthesize operatorCarrierCode=_operatorCarrierCode - In the implementation block
@property (nonatomic,copy) NSString * operatorFlightNumber;              //@synthesize operatorFlightNumber=_operatorFlightNumber - In the implementation block
@property (nonatomic,copy) NSString * carrierPhoneNumber;                //@synthesize carrierPhoneNumber=_carrierPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)legs;
-(void)setLegs:(NSArray *)arg1 ;
-(unsigned long long)legsCount;
-(void)clearLegs;
-(void)addLegs:(id)arg1 ;
-(id)legsAtIndex:(unsigned long long)arg1 ;
-(void)setFlightID:(NSString *)arg1 ;
-(void)setCarrierCode:(NSString *)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(void)setCarrierPhoneNumber:(NSString *)arg1 ;
-(void)setFlightNumber:(NSString *)arg1 ;
-(void)setOperatorCarrierCode:(NSString *)arg1 ;
-(void)setOperatorFlightNumber:(NSString *)arg1 ;
-(NSString *)flightNumber;
-(NSString *)carrierName;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)operatorFlightNumber;
-(NSString *)operatorCarrierCode;
-(NSString *)flightID;
-(NSString *)carrierPhoneNumber;
-(NSString *)carrierCode;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
@end
