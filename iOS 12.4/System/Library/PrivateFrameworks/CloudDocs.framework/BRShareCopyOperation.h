/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyOperation : BROperation {

	NSURL* _url;
	/*^block*/id _shareCopyCompletionBlock;
	/*^block*/id _rootShareCopyCompletionBlock;

}

@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (copy) id shareCopyCompletionBlock;                  //@synthesize shareCopyCompletionBlock=_shareCopyCompletionBlock - In the implementation block
@property (copy) id rootShareCopyCompletionBlock;              //@synthesize rootShareCopyCompletionBlock=_rootShareCopyCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setRootShareCopyCompletionBlock:(id)arg1 ;
-(id)shareCopyCompletionBlock;
-(void)setShareCopyCompletionBlock:(id)arg1 ;
-(id)rootShareCopyCompletionBlock;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)main;
@end
