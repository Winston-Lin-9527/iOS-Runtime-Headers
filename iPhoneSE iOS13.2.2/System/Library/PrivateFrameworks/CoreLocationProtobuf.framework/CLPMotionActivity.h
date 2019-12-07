/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPMotionActivity : PBCodable <NSCopying> {

	int _confidence;
	int _type;
	SCD_Struct_CL9 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                  //@synthesize confidence=_confidence - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)confidence;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(id)confidenceAsString:(int)arg1 ;
-(int)StringAsConfidence:(id)arg1 ;
@end
