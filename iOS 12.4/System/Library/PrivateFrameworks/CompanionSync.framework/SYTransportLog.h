/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface SYTransportLog : NSObject {

	NSObject*<OS_os_log> _log;
	NSString* _facility;
	NSObject*<OS_os_log> _oslog;

}

@property (nonatomic,copy) NSString * facility;                         //@synthesize facility=_facility - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> oslog;              //@synthesize oslog=_oslog - In the implementation block
+(id)sharedInstance;
-(void)logMessage:(id)arg1 ;
-(NSString *)facility;
-(NSObject*<OS_os_log>)oslog;
-(void)_createLog;
-(void)logMessage:(id)arg1 args:(char*)arg2 ;
-(void)_logOSMessage:(const char*)arg1 args:(char*)arg2 returnAddress:(void*)arg3 ;
-(void)setFacility:(NSString *)arg1 ;
-(id)init;
@end
