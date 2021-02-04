/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDate, NSArray;

@interface PPEventHighlight : NSObject <NSSecureCoding> {

	BOOL _isExtraordinary;
	NSString* _eventIdentifier;
	NSURL* _externalURI;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _location;
	NSString* _organizer;
	CGColorRef _calendarColor;
	unsigned long long _prominentFeature;
	NSArray* _features;
	double _score;

}

@property (nonatomic,retain) NSString * eventIdentifier;                       //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * externalURI;                              //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * organizer;                             //@synthesize organizer=_organizer - In the implementation block
@property (assign,nonatomic) CGColorRef calendarColor;                         //@synthesize calendarColor=_calendarColor - In the implementation block
@property (assign,nonatomic) unsigned long long prominentFeature;              //@synthesize prominentFeature=_prominentFeature - In the implementation block
@property (nonatomic,retain) NSArray * features;                               //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) double score;                                     //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL isExtraordinary;                             //@synthesize isExtraordinary=_isExtraordinary - In the implementation block
+(id)describeProminentFeature:(unsigned long long)arg1 ;
+(id)eventHighlightWithEKEvent:(id)arg1 score:(double)arg2 prominentFeature:(unsigned long long)arg3 features:(id)arg4 isExtraordinary:(BOOL)arg5 ;
+(BOOL)supportsSecureCoding;
-(void)setScore:(double)arg1 ;
-(void)setEventIdentifier:(NSString *)arg1 ;
-(void)setOrganizer:(NSString *)arg1 ;
-(NSString *)organizer;
-(NSURL *)externalURI;
-(NSString *)eventIdentifier;
-(CGColorRef)calendarColor;
-(void)setCalendarColor:(CGColorRef)arg1 ;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)score;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithEventIdentifier:(id)arg1 externalURI:(id)arg2 title:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 location:(id)arg6 organizer:(id)arg7 calendarColor:(CGColorRef)arg8 prominentFeature:(unsigned long long)arg9 features:(id)arg10 score:(double)arg11 isExtraordinary:(BOOL)arg12 ;
-(BOOL)isEqualToEventHighlight:(id)arg1 ;
-(void)setExternalURI:(NSURL *)arg1 ;
-(void)setProminentFeature:(unsigned long long)arg1 ;
-(void)setIsExtraordinary:(BOOL)arg1 ;
-(BOOL)isExtraordinary;
-(unsigned long long)prominentFeature;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
@end
