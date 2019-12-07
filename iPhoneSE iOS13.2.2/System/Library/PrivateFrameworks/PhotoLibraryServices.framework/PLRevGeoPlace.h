/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PLRevGeoPlace : NSObject <NSSecureCoding> {

	NSDictionary* _placeInfosForOrderType;

}

@property (nonatomic,readonly) NSDictionary * placeInfosForOrderType;              //@synthesize placeInfosForOrderType=_placeInfosForOrderType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long*)arg3 outPreviousOrderType:(unsigned long long*)arg4 ;
+(id)placeWithMapItem:(id)arg1 placeAnnotation:(id)arg2 ;
+(unsigned long long)_dominantOrderTypeForPlaceType:(id)arg1 lastOrderType:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlaceInfosForOrderType:(id)arg1 ;
-(id)bestPlaceInfoForOrderType:(unsigned long long)arg1 ;
-(NSDictionary *)placeInfosForOrderType;
@end
