/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _bundleIDToPIDMap;

}
+(id)sharedCache;
-(id)init;
-(BOOL)hasEntitlement:(id)arg1 forPID:(int)arg2 ;
-(void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3 ;
@end
