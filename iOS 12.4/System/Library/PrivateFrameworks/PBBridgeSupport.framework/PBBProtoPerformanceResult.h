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

@class NSString;

@interface PBBProtoPerformanceResult : PBCodable <NSCopying> {

	double _timeDelta;
	double _timeEnded;
	double _timeStarted;
	NSString* _activityType;
	NSString* _identifier;
	SCD_Struct_PB4 _has;

}

@property (nonatomic,readonly) BOOL hasActivityType; 
@property (nonatomic,retain) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDelta; 
@property (assign,nonatomic) double timeDelta;                     //@synthesize timeDelta=_timeDelta - In the implementation block
@property (assign,nonatomic) BOOL hasTimeStarted; 
@property (assign,nonatomic) double timeStarted;                   //@synthesize timeStarted=_timeStarted - In the implementation block
@property (assign,nonatomic) BOOL hasTimeEnded; 
@property (assign,nonatomic) double timeEnded;                     //@synthesize timeEnded=_timeEnded - In the implementation block
+(void)initialize;
-(void)setTimeDelta:(double)arg1 ;
-(void)setHasTimeDelta:(BOOL)arg1 ;
-(BOOL)hasTimeDelta;
-(double)timeDelta;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(id)detailedDescription;
-(double)timeEnded;
-(double)timeStarted;
-(void)setTimeStarted:(double)arg1 ;
-(void)setTimeEnded:(double)arg1 ;
-(void)setHasTimeStarted:(BOOL)arg1 ;
-(BOOL)hasTimeStarted;
-(void)setHasTimeEnded:(BOOL)arg1 ;
-(BOOL)hasTimeEnded;
-(BOOL)hasActivityType;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)activityType;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
@end
