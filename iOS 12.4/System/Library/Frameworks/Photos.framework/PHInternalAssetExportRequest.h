/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, PHResourceDownloadRequest;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {

	NSObject*<OS_dispatch_queue> _serialQueue;
	PHResourceDownloadRequest* _downloadRequest;

}
+(id)_variantsForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
-(id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3 ;
-(void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(BOOL*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
