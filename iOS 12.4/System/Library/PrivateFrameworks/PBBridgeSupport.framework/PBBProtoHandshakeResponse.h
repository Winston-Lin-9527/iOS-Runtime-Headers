/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoHandshakeResponse : PBCodable <NSCopying> {

	unsigned _position;
	unsigned _state;
	unsigned _version;

}

@property (assign,nonatomic) unsigned position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned version;               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned state;                 //@synthesize state=_state - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
