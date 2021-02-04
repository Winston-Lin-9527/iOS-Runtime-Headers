/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVCharacteristics : PBCodable <NSCopying> {

	NSMutableArray* _pointCharacteristics;

}

@property (nonatomic,retain) NSMutableArray * pointCharacteristics;              //@synthesize pointCharacteristics=_pointCharacteristics - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addPointCharacteristic:(id)arg1 ;
-(unsigned long long)pointCharacteristicsCount;
-(void)clearPointCharacteristics;
-(id)pointCharacteristicAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pointCharacteristics;
-(void)setPointCharacteristics:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
