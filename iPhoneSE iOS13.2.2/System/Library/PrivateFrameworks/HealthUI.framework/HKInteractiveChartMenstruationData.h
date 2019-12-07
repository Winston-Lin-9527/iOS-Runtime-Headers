/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSDate, NSString;

@interface HKInteractiveChartMenstruationData : NSObject <HKGraphSeriesChartData> {

	BOOL _startOfCycle;
	long long _value;
	NSDate* _date;

}

@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL startOfCycle;                     //@synthesize startOfCycle=_startOfCycle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)date;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)startOfCycle;
-(void)setStartOfCycle:(BOOL)arg1 ;
@end
