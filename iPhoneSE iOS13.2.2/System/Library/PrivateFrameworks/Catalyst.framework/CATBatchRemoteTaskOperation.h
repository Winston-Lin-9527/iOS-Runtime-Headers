/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {

	NSArray* mRemoteTasks;
	NSOperationQueue* mQueue;

}

@property (nonatomic,copy,readonly) NSArray * remoteTaskOperations; 
-(id)init;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithRemoteTaskOperations:(id)arg1 ;
-(void)cancelSubOperations;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(id)initWithTaskClient:(id)arg1 requests:(id)arg2 ;
-(NSArray *)remoteTaskOperations;
@end
