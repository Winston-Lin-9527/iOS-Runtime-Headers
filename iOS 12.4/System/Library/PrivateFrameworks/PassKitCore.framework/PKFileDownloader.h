/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSURLSession;

@interface PKFileDownloader : NSObject {

	NSMutableDictionary* _downloads;
	NSMutableOrderedSet* _pendingURLs;
	NSMutableSet* _downloadingURLs;
	NSObject*<OS_dispatch_queue> _queue;
	NSURLSession* _session;
	long long _concurrentRequests;

}

@property (retain) NSURLSession * session;                    //@synthesize session=_session - In the implementation block
@property (assign) long long concurrentRequests;              //@synthesize concurrentRequests=_concurrentRequests - In the implementation block
+(id)sharedImageAssetDownloader;
-(void)_schedulePendingDownloads;
-(long long)concurrentRequests;
-(void)_scheduleDownload:(id)arg1 forURL:(id)arg2 ;
-(void)downloadWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResponseForURL:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4 ;
-(void)setConcurrentRequests:(long long)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)cachedDataForURL:(id)arg1 ;
-(void)downloadFromUrl:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)invalidate;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
@end
