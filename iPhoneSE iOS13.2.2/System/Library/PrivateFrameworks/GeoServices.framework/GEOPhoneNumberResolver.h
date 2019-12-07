/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOPhoneNumberResolving;
@interface GEOPhoneNumberResolver : NSObject {

	id<GEOPhoneNumberResolving> _resolver;

}
+(void)useProxy:(Class)arg1 ;
+(void)useRemoteResolver;
+(id)sharedResolver;
+(void)useLocalResolver;
-(id)init;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_alePackResolution:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
@end
