/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface TPPBPolicySecret : PBCodable <NSCopying> {

	NSString* _name;
	NSData* _secret;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSecret; 
@property (nonatomic,retain) NSData * secret;               //@synthesize secret=_secret - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSData *)secret;
-(void)setSecret:(NSData *)arg1 ;
-(BOOL)hasSecret;
@end
