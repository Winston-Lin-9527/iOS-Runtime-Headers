/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem {

	BOOL _completed;
	NSString* _extensionID;
	unsigned long long _bytesUploaded;
	NSURLSessionUploadTask* _uploadTask;

}

@property (retain) NSString * extensionID;                           //@synthesize extensionID=_extensionID - In the implementation block
@property (assign) unsigned long long bytesUploaded;                 //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) BOOL completed;                                   //@synthesize completed=_completed - In the implementation block
@property (retain) NSURLSessionUploadTask * uploadTask;              //@synthesize uploadTask=_uploadTask - In the implementation block
+(id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3 ;
-(BOOL)completed;
-(NSString *)extensionID;
-(void)setExtensionID:(NSString *)arg1 ;
-(id)publicDescription;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(void)setUploadTask:(NSURLSessionUploadTask *)arg1 ;
-(id)promiseFilename;
-(NSURLSessionUploadTask *)uploadTask;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
@end
