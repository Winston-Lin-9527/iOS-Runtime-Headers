/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOUtilityServiceProxy.h>

@protocol GEOUtilityServiceProxy;
@class NSString;

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy> {

	id<GEOUtilityServiceProxy> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(void)useProxy:(Class)arg1 ;
-(id)init;
-(id)getHomeDirectoryPath;
-(id)getGeoServicesCacheDirectoryPath;
-(void)getCurrentGeoServicesState:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
