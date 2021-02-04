/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDExpressTransactionType : PBCodable <NSCopying> {

	unsigned _appletType;
	unsigned _count;
	NSData* _ridAndPix;
	unsigned _spid;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) BOOL hasRidAndPix; 
@property (nonatomic,retain) NSData * ridAndPix;               //@synthesize ridAndPix=_ridAndPix - In the implementation block
@property (assign,nonatomic) BOOL hasSpid; 
@property (assign,nonatomic) unsigned spid;                    //@synthesize spid=_spid - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                   //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasAppletType; 
@property (assign,nonatomic) unsigned appletType;              //@synthesize appletType=_appletType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setSpid:(unsigned)arg1 ;
-(void)setHasSpid:(BOOL)arg1 ;
-(BOOL)hasSpid;
-(unsigned)spid;
-(void)setRidAndPix:(NSData *)arg1 ;
-(BOOL)hasRidAndPix;
-(void)setAppletType:(unsigned)arg1 ;
-(void)setHasAppletType:(BOOL)arg1 ;
-(BOOL)hasAppletType;
-(NSData *)ridAndPix;
-(unsigned)appletType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)count;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
@end
