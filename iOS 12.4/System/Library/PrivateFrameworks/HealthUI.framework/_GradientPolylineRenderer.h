/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer {

	HKRouteMapGenerator* _generator;

}
-(void)drawMapRect:(SCD_Struct_HK16)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_HK16)arg1 zoomScale:(double)arg2 ;
-(CGPoint)_originMapPoint;
-(id)initWithPolyline:(id)arg1 locationReadings:(id)arg2 ;
@end
