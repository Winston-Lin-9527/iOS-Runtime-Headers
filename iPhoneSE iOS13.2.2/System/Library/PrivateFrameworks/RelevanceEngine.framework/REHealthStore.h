/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class HKHealthStore, NSObject;

@interface REHealthStore : RESingleton {

	HKHealthStore* _healthStore;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_init;
-(void)accessHealthStore:(/*^block*/id)arg1 ;
-(id)_createStore;
-(BOOL)_isClockHostApp;
@end
