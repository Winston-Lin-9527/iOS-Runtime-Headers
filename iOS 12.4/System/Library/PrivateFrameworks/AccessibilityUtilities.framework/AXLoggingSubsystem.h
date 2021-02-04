/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXLoggingSubsystem : NSObject {

	BOOL _ignoreLogging;

}

@property (assign,nonatomic) BOOL ignoreLogging; 
+(void)initializeSubsytem;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)subsystems;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(BOOL)shouldIncludeBacktraceInLogs;
+(BOOL)shouldIncludeFileLineAndFunctionInLogs;
+(BOOL)shouldProcessMessageForLogs;
+(int)defaultLogLevel;
+(BOOL)willLog;
+(BOOL)willLogInfo;
+(BOOL)willLogDebug;
+(double)threshold;
+(id)errorWithDescription:(id)arg1 ;
+(id)identifier;
+(void)initialize;
+(id)sharedInstance;
-(BOOL)ignoreLogging;
-(void)setIgnoreLogging:(BOOL)arg1 ;
@end
