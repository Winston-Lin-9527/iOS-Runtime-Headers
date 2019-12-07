/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSHashTable, NSObject;

@interface _GEOExperimentConfigurationObserverProxy : NSObject {

	NSHashTable* _observers;
	os_unfair_lock_s _observersLock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)forEachObserver:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)observersCount;
@end
