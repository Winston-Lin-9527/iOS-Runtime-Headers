/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOServiceRequestConfiguring.h>

@class NSString;

@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)urlType;
-(SCD_Struct_GE94)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1 ;
@end
