/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSUReadChannel.h>

@protocol TSUReadChannel;
@class TSUZipEntry, TSUZipArchive, NSString;

@interface TSUZipReadChannel : NSObject <TSUReadChannel> {

	TSUZipEntry* _entry;
	TSUZipArchive* _archive;
	BOOL _validateCRC;
	id<TSUReadChannel> _archiveReadChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(BOOL)arg3 ;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2 ;
-(BOOL)processData:(id)arg1 CRC:(unsigned*)arg2 isDone:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)close;
-(BOOL)isValid;
@end
