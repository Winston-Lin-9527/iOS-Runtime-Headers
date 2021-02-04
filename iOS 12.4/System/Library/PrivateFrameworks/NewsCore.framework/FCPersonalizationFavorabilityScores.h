/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NTPBPublisherFavorabilityScores, NSDictionary;

@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding> {

	NTPBPublisherFavorabilityScores* _pbFavorabilityScores;
	NSDictionary* _tagIDToScores;

}

@property (nonatomic,retain) NSDictionary * tagIDToScores;              //@synthesize tagIDToScores=_tagIDToScores - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)initWithPBFavorabilityScores:(id)arg1 ;
-(NSDictionary *)tagIDToScores;
-(id)scoreForTagID:(id)arg1 ;
-(void)setTagIDToScores:(NSDictionary *)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
