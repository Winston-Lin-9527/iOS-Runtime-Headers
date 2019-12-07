/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface WDChartExperimentsDosage : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _doseInMilligrams;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSNumber * doseInMilligrams;              //@synthesize doseInMilligrams=_doseInMilligrams - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDoseInMilligrams:(NSNumber *)arg1 ;
-(NSNumber *)doseInMilligrams;
@end
