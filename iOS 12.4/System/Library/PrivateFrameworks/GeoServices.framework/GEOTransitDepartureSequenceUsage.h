/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {

	unsigned long long _lineId;
	NSString* _direction;
	NSString* _headsign;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId;              //@synthesize lineId=_lineId - In the implementation block
@property (nonatomic,readonly) BOOL hasDirection; 
@property (nonatomic,retain) NSString * direction;                   //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL hasHeadsign; 
@property (nonatomic,retain) NSString * headsign;                    //@synthesize headsign=_headsign - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasLineId;
-(unsigned long long)lineId;
-(void)setHeadsign:(NSString *)arg1 ;
-(BOOL)hasDirection;
-(BOOL)hasHeadsign;
-(NSString *)headsign;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)direction;
-(void)setDirection:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
