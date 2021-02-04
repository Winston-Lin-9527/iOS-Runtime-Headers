/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKUIAccountErrorsPETTracker : NSObject
+(id)_rootUIErrorEventTracker;
+(id)_actionableErrorDisplayedTracker;
+(id)_unknownErrorDisplayedTracker;
+(id)_offlineErrorDisplayedTracker;
+(id)_otherErrorDisplayedTracker;
+(id)_actionableErrorInteractedTracker;
+(id)_refreshedWhileOfflineTracker;
+(void)trackRootUIDisplayedError;
+(void)trackRootUIInteractedWithError;
+(void)trackCalendarListDisplayedActionableError;
+(void)trackCalendarListDisplayedUnknownError;
+(void)trackCalendarListDisplayedOfflineError;
+(void)trackCalendarListDisplayedOtherError;
+(void)trackCalendarListInteractedWithError;
+(void)trackRefreshedWhileOffline;
@end
