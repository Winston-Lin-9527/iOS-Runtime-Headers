/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@protocol PXPlacesGeotaggedItemDataSource;
@interface PXPlacesMapDotsOverlayRenderer : MKOverlayRenderer {

	id<PXPlacesGeotaggedItemDataSource> _dataSource;

}

@property (__weak) id<PXPlacesGeotaggedItemDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)drawMapRect:(SCD_Struct_PX4)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(SCD_Struct_PX4)_createOverscanMapRect:(SCD_Struct_PX4)arg1 withBorderSize:(double)arg2 ;
-(void)_debugDrawRect:(SCD_Struct_PX4)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 alpha:(double)arg4 ;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(void)setDataSource:(id<PXPlacesGeotaggedItemDataSource>)arg1 ;
@end
