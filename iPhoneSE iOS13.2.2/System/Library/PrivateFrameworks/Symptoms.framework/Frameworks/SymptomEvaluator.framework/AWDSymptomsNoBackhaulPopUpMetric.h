/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNoBackhaulPopUpMetric : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	int _networkType;
	unsigned _networksShownAtLeastOnceInLast24Hrs;
	unsigned _popUpShownForSecs;
	unsigned _timeSinceShownOnSameNetworkSecs;
	unsigned _timesShownOnAnyNetworkLast24Hrs;
	SCD_Struct_AW26 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                           //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasPopUpShownForSecs; 
@property (assign,nonatomic) unsigned popUpShownForSecs;                                //@synthesize popUpShownForSecs=_popUpShownForSecs - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceShownOnSameNetworkSecs; 
@property (assign,nonatomic) unsigned timeSinceShownOnSameNetworkSecs;                  //@synthesize timeSinceShownOnSameNetworkSecs=_timeSinceShownOnSameNetworkSecs - In the implementation block
@property (assign,nonatomic) BOOL hasTimesShownOnAnyNetworkLast24Hrs; 
@property (assign,nonatomic) unsigned timesShownOnAnyNetworkLast24Hrs;                  //@synthesize timesShownOnAnyNetworkLast24Hrs=_timesShownOnAnyNetworkLast24Hrs - In the implementation block
@property (assign,nonatomic) BOOL hasNetworksShownAtLeastOnceInLast24Hrs; 
@property (assign,nonatomic) unsigned networksShownAtLeastOnceInLast24Hrs;              //@synthesize networksShownAtLeastOnceInLast24Hrs=_networksShownAtLeastOnceInLast24Hrs - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                                //@synthesize action=_action - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)action;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setPopUpShownForSecs:(unsigned)arg1 ;
-(void)setHasPopUpShownForSecs:(BOOL)arg1 ;
-(BOOL)hasPopUpShownForSecs;
-(void)setTimeSinceShownOnSameNetworkSecs:(unsigned)arg1 ;
-(void)setHasTimeSinceShownOnSameNetworkSecs:(BOOL)arg1 ;
-(BOOL)hasTimeSinceShownOnSameNetworkSecs;
-(void)setTimesShownOnAnyNetworkLast24Hrs:(unsigned)arg1 ;
-(void)setHasTimesShownOnAnyNetworkLast24Hrs:(BOOL)arg1 ;
-(BOOL)hasTimesShownOnAnyNetworkLast24Hrs;
-(void)setNetworksShownAtLeastOnceInLast24Hrs:(unsigned)arg1 ;
-(void)setHasNetworksShownAtLeastOnceInLast24Hrs:(BOOL)arg1 ;
-(BOOL)hasNetworksShownAtLeastOnceInLast24Hrs;
-(unsigned)popUpShownForSecs;
-(unsigned)timeSinceShownOnSameNetworkSecs;
-(unsigned)timesShownOnAnyNetworkLast24Hrs;
-(unsigned)networksShownAtLeastOnceInLast24Hrs;
@end
