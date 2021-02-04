/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEORating : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _maxScore;
	double _score;
	int _numberOfRatings;
	int _numberOfReviews;
	NSString* _provider;
	NSMutableArray* _reviews;
	NSString* _uRL;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                   //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasMaxScore; 
@property (assign,nonatomic) double maxScore;                                //@synthesize maxScore=_maxScore - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRatings; 
@property (assign,nonatomic) int numberOfRatings;                            //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) BOOL hasProvider; 
@property (nonatomic,retain) NSString * provider;                            //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                                 //@synthesize uRL=_uRL - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviews;                       //@synthesize reviews=_reviews - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfReviews; 
@property (assign,nonatomic) int numberOfReviews;                            //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)reviewType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasURL;
-(NSString *)uRL;
-(void)setScore:(double)arg1 ;
-(void)addReview:(id)arg1 ;
-(unsigned long long)reviewsCount;
-(void)clearReviews;
-(id)reviewAtIndex:(unsigned long long)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(void)setHasMaxScore:(BOOL)arg1 ;
-(BOOL)hasMaxScore;
-(void)setNumberOfRatings:(int)arg1 ;
-(void)setHasNumberOfRatings:(BOOL)arg1 ;
-(BOOL)hasNumberOfRatings;
-(BOOL)hasProvider;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setHasNumberOfReviews:(BOOL)arg1 ;
-(BOOL)hasNumberOfReviews;
-(int)numberOfRatings;
-(NSMutableArray *)reviews;
-(void)setReviews:(NSMutableArray *)arg1 ;
-(int)numberOfReviews;
-(id)initWithSampleSizeForUserRatingScore:(unsigned)arg1 normalizedUserRatingScore:(float)arg2 ;
-(double)score;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
