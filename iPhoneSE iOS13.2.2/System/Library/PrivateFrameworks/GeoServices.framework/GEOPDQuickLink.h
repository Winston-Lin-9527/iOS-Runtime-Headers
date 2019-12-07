/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDQuickLink : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _quickLinkItems;

}

@property (nonatomic,retain) NSMutableArray * quickLinkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)quickLinkItemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)quickLinkItems;
-(void)addQuickLinkItem:(id)arg1 ;
-(unsigned long long)quickLinkItemsCount;
-(void)clearQuickLinkItems;
-(id)quickLinkItemAtIndex:(unsigned long long)arg1 ;
-(void)setQuickLinkItems:(NSMutableArray *)arg1 ;
@end
