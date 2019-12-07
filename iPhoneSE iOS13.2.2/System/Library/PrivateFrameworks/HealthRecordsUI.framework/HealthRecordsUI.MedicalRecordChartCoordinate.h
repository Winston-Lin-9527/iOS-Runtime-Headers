/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@interface HealthRecordsUI.MedicalRecordChartCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	 pointValuesAscending;
	 blockCoordinateInfo;

}

@property (readonly,nonatomic) double startXValue; 
@property (readonly,nonatomic) double endXValue; 
@property (readonly,nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
-(id)init;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
@end
