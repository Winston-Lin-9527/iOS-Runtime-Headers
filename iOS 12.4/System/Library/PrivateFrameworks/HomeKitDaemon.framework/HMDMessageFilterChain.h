/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface HMDMessageFilterChain : HMFObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _messageFilters;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageFilters;                     //@synthesize messageFilters=_messageFilters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeMessageFilter:(id)arg1 ;
-(void)addMessageFilter:(id)arg1 ;
-(void)executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldCloudSyncData;
-(NSMutableArray *)messageFilters;
-(void)_executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMessageFilters:(NSMutableArray *)arg1 ;
-(id)init;
-(NSArray *)filters;
@end
