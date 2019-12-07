/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBIssueViewContextData : PBCodable <NSCopying> {

	int _issueViewContext;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasIssueViewContext; 
@property (assign,nonatomic) int issueViewContext;                  //@synthesize issueViewContext=_issueViewContext - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)issueViewContext;
-(void)setIssueViewContext:(int)arg1 ;
-(void)setHasIssueViewContext:(BOOL)arg1 ;
-(BOOL)hasIssueViewContext;
@end
