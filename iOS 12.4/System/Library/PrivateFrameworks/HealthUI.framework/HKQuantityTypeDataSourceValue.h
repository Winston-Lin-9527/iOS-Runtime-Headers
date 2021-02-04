/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantity, HKQuantityType, NSDateComponents, NSDate;

@interface HKQuantityTypeDataSourceValue : NSObject {

	HKQuantity* _sumQuantity;
	HKQuantity* _minQuantity;
	HKQuantity* _maxQuantity;
	HKQuantity* _averageQuantity;
	HKQuantityType* _quantityType;
	long long _recordCount;
	NSDateComponents* _statisticsInterval;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) HKQuantity * sumQuantity;                           //@synthesize sumQuantity=_sumQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * minQuantity;                           //@synthesize minQuantity=_minQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * maxQuantity;                           //@synthesize maxQuantity=_maxQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * averageQuantity;                       //@synthesize averageQuantity=_averageQuantity - In the implementation block
@property (nonatomic,retain) HKQuantityType * quantityType;                      //@synthesize quantityType=_quantityType - In the implementation block
@property (assign,nonatomic) long long recordCount;                              //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,retain) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
-(void)setRecordCount:(long long)arg1 ;
-(long long)recordCount;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(HKQuantityType *)quantityType;
-(void)setAverageQuantity:(HKQuantity *)arg1 ;
-(HKQuantity *)averageQuantity;
-(HKQuantity *)sumQuantity;
-(void)setSumQuantity:(HKQuantity *)arg1 ;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(void)setMinQuantity:(HKQuantity *)arg1 ;
-(void)setMaxQuantity:(HKQuantity *)arg1 ;
-(HKQuantity *)minQuantity;
-(HKQuantity *)maxQuantity;
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
-(NSDateComponents *)statisticsInterval;
@end
