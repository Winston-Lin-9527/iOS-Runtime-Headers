/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSConfigurationDataTransformer, NSURLSessionDataTask, NSURL, NSString;

@interface WBSConfigurationDownloader : NSObject {

	WBSConfigurationDataTransformer* _transformer;
	NSURLSessionDataTask* _dataTask;
	NSURL* _baseURL;
	NSString* _fileName;
	BOOL _isCancelled;

}
+(id)new;
-(id)initWithFileName:(id)arg1 dataTransformer:(id)arg2 ;
-(void)downloadConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)cancel;
@end
