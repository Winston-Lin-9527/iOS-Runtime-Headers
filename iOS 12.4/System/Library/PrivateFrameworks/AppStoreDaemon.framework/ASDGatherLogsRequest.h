/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDGatherLogsRequestOptions;

@interface ASDGatherLogsRequest : ASDEphemeralRequest {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _connection;
	ASDGatherLogsRequestOptions* _options;

}
+(long long)requestType;
-(void)_sendRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendHarFileRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendGatherRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_combineLogs:(id)arg1 toDir:(id)arg2 ;
-(void)_copyDB:(id)arg1 fullSourcePath:(id)arg2 toDir:(id)arg3 datbaseBase:(id)arg4 ;
-(id)_appstoredContainerPath;
-(id)_zippedDataForURL:(id)arg1 ;
-(id)_combineAllLogs;
-(id)_createCombinedHarFile;
-(void)createLogFileArchiveWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)createHarFileArchiveWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)gatherLogsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
@end
