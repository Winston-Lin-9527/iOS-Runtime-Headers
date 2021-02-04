/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPhoneNumberResolving.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface GEOPhoneNumberResolverRemoteProxy : NSObject <GEOPhoneNumberResolving> {

	NSObject*<OS_dispatch_queue> _xcpWorkQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)init;
@end
