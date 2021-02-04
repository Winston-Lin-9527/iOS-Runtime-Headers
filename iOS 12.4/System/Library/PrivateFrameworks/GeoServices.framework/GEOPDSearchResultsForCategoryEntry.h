/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDBrowseCategory;

@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE20* _placeIndexs;
	GEOPDBrowseCategory* _category;

}

@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * category;                     //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long placeIndexsCount; 
@property (nonatomic,readonly) unsigned* placeIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)placeIndexsCount;
-(void)clearPlaceIndexs;
-(unsigned)placeIndexAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceIndex:(unsigned)arg1 ;
-(BOOL)hasCategory;
-(unsigned*)placeIndexs;
-(void)setPlaceIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setCategory:(GEOPDBrowseCategory *)arg1 ;
-(GEOPDBrowseCategory *)category;
@end
