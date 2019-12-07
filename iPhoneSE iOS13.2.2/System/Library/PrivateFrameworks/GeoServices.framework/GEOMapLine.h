/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapLine <NSObject>
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE32* coordinates; 
@property (nonatomic,readonly) double length; 
@required
-(double)length;
-(SCD_Struct_GE32*)coordinates;
-(unsigned long long)coordinateCount;
-(double)distanceFromCoordinate:(SCD_Struct_GE32)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2;

@end
