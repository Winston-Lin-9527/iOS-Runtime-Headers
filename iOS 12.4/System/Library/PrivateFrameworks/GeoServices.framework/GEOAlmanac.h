/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject {

	GEOAlmanacRiseTransitSet* _previousRiseTransitSet;
	GEOAlmanacRiseTransitSet* _currentRiseTransitSet;
	GEOAlmanacRiseTransitSet* _nextRiseTransitSet;

}

@property (nonatomic,readonly) BOOL isDayLight; 
@property (nonatomic,readonly) NSDate * previousSunrise; 
@property (nonatomic,readonly) NSDate * previousTransit; 
@property (nonatomic,readonly) NSDate * previousSunset; 
@property (nonatomic,readonly) NSDate * sunrise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * sunset; 
@property (nonatomic,readonly) NSDate * nextSunrise; 
@property (nonatomic,readonly) NSDate * nextTransit; 
@property (nonatomic,readonly) NSDate * nextSunset; 
-(NSDate *)transit;
-(NSDate *)sunset;
-(NSDate *)sunrise;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE30)arg1 altitudeInDegrees:(double)arg2 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE30)arg1 date:(id)arg2 altitudeInDegrees:(double)arg3 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE30)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 ;
-(id)_newRiseTransitSetForLocation:(SCD_Struct_GE30)arg1 julianDay:(double)arg2 altitude:(double)arg3 ;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 date:(id)arg4 ;
-(NSDate *)previousSunrise;
-(NSDate *)previousSunset;
-(NSDate *)nextSunrise;
-(NSDate *)nextSunset;
-(BOOL)isDayLightForDate:(id)arg1 ;
-(id)sortedTimesForDate:(id)arg1 ;
-(NSDate *)previousTransit;
-(NSDate *)nextTransit;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE30)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE30)arg1 time:(double)arg2 ;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 ;
-(BOOL)isDayLight;
-(BOOL)isDayLightForTime:(double)arg1 ;
-(id)description;
@end
