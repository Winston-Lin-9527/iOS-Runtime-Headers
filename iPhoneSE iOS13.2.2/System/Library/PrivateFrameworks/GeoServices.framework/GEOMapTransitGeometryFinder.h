/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapTransitGeometryFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	unsigned long long _transitID;

}
-(void)cancel;
-(id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(SCD_Struct_GE32)arg3 ;
-(void)findTransitGeometryWithHandler:(/*^block*/id)arg1 ;
@end
