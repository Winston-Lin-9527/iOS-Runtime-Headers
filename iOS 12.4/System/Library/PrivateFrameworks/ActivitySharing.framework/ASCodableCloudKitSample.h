/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ASCodableCloudKitSample : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	NSData* _uuid;
	SCD_Struct_AS4 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;               //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                 //@synthesize endDate=_endDate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStartDate;
-(BOOL)hasEndDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(double)startDate;
-(double)endDate;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(BOOL)hasUuid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setUuid:(NSData *)arg1 ;
-(NSData *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
