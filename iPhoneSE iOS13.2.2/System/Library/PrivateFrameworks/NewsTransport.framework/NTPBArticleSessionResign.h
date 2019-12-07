/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBArticleSessionResign : PBCodable <NSCopying> {

	long long _publisherArticleVersion;
	NSString* _articleId;
	int _articleType;
	NSData* _articleViewingSessionId;
	NSString* _sourceChannelId;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                     //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;              //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)publisherArticleVersion;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(BOOL)hasSourceChannelId;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
@end
