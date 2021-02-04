/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, NSArray;

@interface HKSleepPeriodSeries : HKGraphSeries {

	HKStrokeStyle* _strokeStyle;
	HKStrokeStyle* _tiledStrokeStyle;
	NSArray* _defaultFillStyles;
	NSArray* _highlightedFillStyles;
	HKStrokeStyle* _goalLineStokeStyle;
	/*^block*/id _startOfDayTransform;
	CGSize _cornerRadii;

}

@property (assign,nonatomic) CGSize cornerRadii;                            //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * strokeStyle;                     //@synthesize strokeStyle=_strokeStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * tiledStrokeStyle;                //@synthesize tiledStrokeStyle=_tiledStrokeStyle - In the implementation block
@property (nonatomic,copy) NSArray * defaultFillStyles;                     //@synthesize defaultFillStyles=_defaultFillStyles - In the implementation block
@property (nonatomic,copy) NSArray * highlightedFillStyles;                 //@synthesize highlightedFillStyles=_highlightedFillStyles - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * goalLineStokeStyle;              //@synthesize goalLineStokeStyle=_goalLineStokeStyle - In the implementation block
@property (nonatomic,copy) id startOfDayTransform;                          //@synthesize startOfDayTransform=_startOfDayTransform - In the implementation block
-(CGSize)cornerRadii;
-(void)_assertCoordinateCompatibility:(id)arg1 ;
-(double)_minimumYForCoordinate:(id)arg1 ;
-(double)_maximumYForCoordinate:(id)arg1 ;
-(BOOL)shouldInvertAxis;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK0)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(long long)_visibleBarCountWithZoomLevelConfiguration:(id)arg1 ;
-(void)_drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(HKStrokeStyle *)tiledStrokeStyle;
-(HKStrokeStyle *)strokeStyle;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(NSArray *)defaultFillStyles;
-(void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(NSArray *)highlightedFillStyles;
-(void)_drawGoalLinePath:(id)arg1 context:(CGContextRef)arg2 ;
-(void)_addAnnotationForValue:(double)arg1 ;
-(HKStrokeStyle *)goalLineStokeStyle;
-(id)stringFromTimeSinceNoon:(id)arg1 ;
-(id)startOfDayTransform;
-(void)setStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setTiledStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setDefaultFillStyles:(NSArray *)arg1 ;
-(void)setHighlightedFillStyles:(NSArray *)arg1 ;
-(void)setGoalLineStokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setStartOfDayTransform:(id)arg1 ;
-(void)setCornerRadii:(CGSize)arg1 ;
@end
