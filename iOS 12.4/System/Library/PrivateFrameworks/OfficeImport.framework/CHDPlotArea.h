/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {

	CHDChartTypesCollection* mChartTypes;
	CHDAxesCollection* mAxes;
	OADGraphicProperties* mGraphicProperties;
	BOOL mCategoryAxesReversed;
	BOOL mCategoryAxesReversedOverridden;
	BOOL mContainsVolumeStockType;

}
-(id)graphicProperties;
-(id)axes;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(id)chartTypes;
-(BOOL)hasSecondaryAxis;
-(BOOL)hasSecondaryYAxisDeleted;
-(void)markSecondaryAxes;
-(BOOL)containsVolumeStockType;
-(BOOL)isCategoryAxesReversed:(BOOL)arg1 ;
-(void)setContainsVolumeStockType:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
@end
