/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface NURenderNodeCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _cache;

}
+(id)sharedInstance;
-(id)cachedNodeForNode:(id)arg1 ;
-(id)retrieveAndCacheNode:(id)arg1 ;
-(void)addNode:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)_addNode:(id)arg1 ;
@end
