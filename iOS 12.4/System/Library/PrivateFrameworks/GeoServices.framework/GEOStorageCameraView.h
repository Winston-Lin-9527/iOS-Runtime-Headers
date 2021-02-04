/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOURLCamera;

@interface GEOStorageCameraView : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOURLCamera* _camera;
	int _mapType;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera;                          //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType;                                    //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMapType:(int)arg1 ;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(BOOL)hasMapType;
-(BOOL)hasCamera;
-(int)mapType;
-(GEOURLCamera *)camera;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
