/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKRequestPerformingProtocol, CRKEnableStudentCloudSyncingInteractionDelegate;
@class CATRemoteTaskOperation;

@interface CRKEnableStudentCloudSyncingInteraction : CATOperation {

	unsigned long long mLocalCourseCount;
	id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
	id<CRKEnableStudentCloudSyncingInteractionDelegate> mDelegate;
	CATRemoteTaskOperation* mEnableSyncingOperation;
	BOOL mIsPrompting;

}
-(void)run;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(void)enableSyncing;
-(void)stopPromptingToMerge;
-(void)promptToMerge;
-(id)makeEnableSyncingRequest;
-(void)enableSyncingOperationDidFinish:(id)arg1 ;
-(void)endOperationWithSyncingEnabledState:(BOOL)arg1 ;
-(void)processMergeDecision:(BOOL)arg1 ;
-(id)initWithLocalCourseCount:(unsigned long long)arg1 studentDaemonProxy:(id)arg2 delegate:(id)arg3 ;
@end
