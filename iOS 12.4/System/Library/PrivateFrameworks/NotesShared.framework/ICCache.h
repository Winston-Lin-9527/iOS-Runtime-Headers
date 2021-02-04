/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSCache.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface ICCache : NSCache {

	NSObject*<OS_dispatch_source> _memoryWarningEventSource;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryWarningEventSource;              //@synthesize memoryWarningEventSource=_memoryWarningEventSource - In the implementation block
+(id)cacheCollection;
+(void)purgeAllCaches;
-(void)registerForMemoryWarnings;
-(void)unregisterForMemoryWarnings;
-(void)setMemoryWarningEventSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryWarningEventSource;
-(void)receivedMemoryWarning;
-(id)init;
-(void)dealloc;
@end
