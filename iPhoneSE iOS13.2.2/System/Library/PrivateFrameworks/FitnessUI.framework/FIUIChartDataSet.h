/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FIUIChartDataSetDataSource;
@class NSArray;

@interface FIUIChartDataSet : NSObject {

	NSArray* _points;
	NSArray* _labels;
	id<FIUIChartDataSetDataSource> _dataSource;
	long long _tag;

}

@property (assign,nonatomic,__weak) id<FIUIChartDataSetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long tag;                                                 //@synthesize tag=_tag - In the implementation block
-(id)description;
-(long long)tag;
-(id<FIUIChartDataSetDataSource>)dataSource;
-(void)setDataSource:(id<FIUIChartDataSetDataSource>)arg1 ;
-(id)points;
-(void)reloadData;
-(void)setTag:(long long)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)maxXValue;
-(id)minXValue;
-(id)labelsForSet;
@end
