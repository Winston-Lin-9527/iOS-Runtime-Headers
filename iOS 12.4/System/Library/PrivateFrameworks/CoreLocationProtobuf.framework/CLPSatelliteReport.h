/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPSatelliteInfo;

@interface CLPSatelliteReport : PBCodable <NSCopying> {

	CLPSatelliteInfo* _galileo;
	CLPSatelliteInfo* _glonass;
	CLPSatelliteInfo* _gps;
	CLPSatelliteInfo* _qzss;

}

@property (nonatomic,readonly) BOOL hasGps; 
@property (nonatomic,retain) CLPSatelliteInfo * gps;                  //@synthesize gps=_gps - In the implementation block
@property (nonatomic,readonly) BOOL hasGlonass; 
@property (nonatomic,retain) CLPSatelliteInfo * glonass;              //@synthesize glonass=_glonass - In the implementation block
@property (nonatomic,readonly) BOOL hasQzss; 
@property (nonatomic,retain) CLPSatelliteInfo * qzss;                 //@synthesize qzss=_qzss - In the implementation block
@property (nonatomic,readonly) BOOL hasGalileo; 
@property (nonatomic,retain) CLPSatelliteInfo * galileo;              //@synthesize galileo=_galileo - In the implementation block
-(void)setGlonass:(CLPSatelliteInfo *)arg1 ;
-(void)setQzss:(CLPSatelliteInfo *)arg1 ;
-(void)setGalileo:(CLPSatelliteInfo *)arg1 ;
-(BOOL)hasGps;
-(BOOL)hasGlonass;
-(BOOL)hasQzss;
-(BOOL)hasGalileo;
-(CLPSatelliteInfo *)glonass;
-(CLPSatelliteInfo *)qzss;
-(CLPSatelliteInfo *)galileo;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setGps:(CLPSatelliteInfo *)arg1 ;
-(CLPSatelliteInfo *)gps;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
