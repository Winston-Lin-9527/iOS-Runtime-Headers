/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSMutableDictionary, UNSApplicationLauncher, NSObject;

@interface UNSApplicationService : NSObject {

	NSMutableSet* _foregroundBundleIdentifiers;
	NSMutableSet* _installedBundleIdentifiers;
	NSMutableDictionary* _bundleIdentifierToBundleURL;
	UNSApplicationLauncher* _applicationLauncher;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(void)_queue_notificationSourcesDidInstall:(id)arg1 ;
-(id)initWithApplicationLauncher:(id)arg1 ;
-(BOOL)isApplicationForeground:(id)arg1 ;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end
