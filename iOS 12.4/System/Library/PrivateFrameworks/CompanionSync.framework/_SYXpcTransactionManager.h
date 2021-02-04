/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableSet;

@interface _SYXpcTransactionManager : NSObject {

	NSMutableDictionary* _table;
	NSObject*<OS_dispatch_queue> _syncQ;
	NSMutableSet* _errorsForStateDump;
	unsigned long long _stateHandle;

}
+(id)sharedInstance;
-(void)_logBacktraceForStateDump:(id)arg1 name:(id)arg2 message:(id)arg3 ;
-(void)beginTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4 ;
-(void)endTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4 ;
-(void)logOpenTransactions;
-(id)init;
-(void)dealloc;
@end
