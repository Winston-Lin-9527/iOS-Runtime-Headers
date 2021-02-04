/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/TSUZipArchive.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUZipFileDescriptorWrapper, NSURL;

@interface TSUZipFileArchive : TSUZipArchive {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _archiveLength;
	TSUZipFileDescriptorWrapper* _fdWrapper;
	NSURL* _temporaryDirectoryURL;

}
+(BOOL)isZipArchiveAtFD:(int)arg1 ;
+(BOOL)isZipArchiveAtURL:(id)arg1 error:(id*)arg2 ;
+(void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)removeTemporaryDirectory;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
-(id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)openWithURL:(id)arg1 error:(id*)arg2 ;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg1 ;
-(BOOL)reopenWithTemporaryURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(BOOL)isValid;
@end
