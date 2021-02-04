/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {

	GEOSessionID _sessionGUID;
	long long _businessID;
	double _timestamp;
	int _feedbackType;
	int _localSearchProviderID;
	int _numberOfResults;
	int _positionInResults;
	int _sequenceNumber;
	SCD_Struct_GE62 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSessionGUID; 
@property (assign,nonatomic) GEOSessionID sessionGUID;                   //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) long long businessID;                       //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                           //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfResults; 
@property (assign,nonatomic) int numberOfResults;                        //@synthesize numberOfResults=_numberOfResults - In the implementation block
@property (assign,nonatomic) BOOL hasPositionInResults; 
@property (assign,nonatomic) int positionInResults;                      //@synthesize positionInResults=_positionInResults - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                  //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)feedbackType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(int)sequenceNumber;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setSessionGUID:(GEOSessionID)arg1 ;
-(void)setHasSessionGUID:(BOOL)arg1 ;
-(BOOL)hasSessionGUID;
-(GEOSessionID)sessionGUID;
-(void)setFeedbackType:(int)arg1 ;
-(BOOL)hasFeedbackType;
-(long long)businessID;
-(void)setBusinessID:(long long)arg1 ;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(void)setNumberOfResults:(int)arg1 ;
-(void)setHasNumberOfResults:(BOOL)arg1 ;
-(BOOL)hasNumberOfResults;
-(void)setPositionInResults:(int)arg1 ;
-(void)setHasPositionInResults:(BOOL)arg1 ;
-(BOOL)hasPositionInResults;
-(int)numberOfResults;
-(int)positionInResults;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
