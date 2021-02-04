/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSLogger.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOutputStream, NSObject, NSDate, NSTimer, NSString;

@interface WBSFileLogger : NSObject <WBSLogger> {

	NSURL* _directoryURL;
	NSOutputStream* _outputStream;
	NSObject*<OS_dispatch_queue> _logQueue;
	unsigned long long _maximumLogAgeInDays;
	NSDate* _logStartDate;
	NSTimer* _closeStreamTimer;
	NSString* _logName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)collectLogsInDirectory:(id)arg1 withName:(id)arg2 intoFile:(id)arg3 error:(id*)arg4 ;
-(void)logMessage:(id)arg1 ;
-(void)_removeOldLogs;
-(void)_logMessage:(id)arg1 date:(id)arg2 ;
-(void)_closeStream;
-(id)initWithDirectoryURL:(id)arg1 logName:(id)arg2 maximumLogAge:(unsigned long long)arg3 ;
-(void)logFormat:(id)arg1 ;
-(void)tearDown;
-(void)dealloc;
@end
