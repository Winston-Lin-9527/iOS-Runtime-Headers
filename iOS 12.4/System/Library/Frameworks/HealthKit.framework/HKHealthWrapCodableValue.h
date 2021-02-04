/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying> {

	long long _integer;
	NSData* _bytes;
	NSString* _string;
	int _type;
	SCD_Struct_HK18 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytes; 
@property (nonatomic,retain) NSData * bytes;                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) BOOL hasString; 
@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL hasInteger; 
@property (assign,nonatomic) long long integer;              //@synthesize integer=_integer - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBytes:(NSData *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasBytes;
-(BOOL)hasString;
-(void)setInteger:(long long)arg1 ;
-(void)setHasInteger:(BOOL)arg1 ;
-(BOOL)hasInteger;
-(long long)integer;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)string;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)bytes;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setString:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
