/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheDeleteShareGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheShareGroup* _record;

}

@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * record;              //@synthesize record=_record - In the implementation block
-(HMDBackingStoreCacheShareGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithShareGroup:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
@end
