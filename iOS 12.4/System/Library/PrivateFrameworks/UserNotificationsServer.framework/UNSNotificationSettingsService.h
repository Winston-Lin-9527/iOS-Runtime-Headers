/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSDefaultDataProviderFactory, UNSCriticalAlertAuthorizationAlertController, UNSNotificationAuthorizationAlertController, NSObject;

@interface UNSNotificationSettingsService : NSObject {

	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSCriticalAlertAuthorizationAlertController* _criticalAlertAuthorizationAlertController;
	UNSNotificationAuthorizationAlertController* _notificationAuthorizationAlertController;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)notificationSettingsForBundleIdentifier:(id)arg1 ;
-(id)initWithDataProviderFactory:(id)arg1 ;
-(id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 ;
-(void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queue_requestAuthorizationWithTopics:(id)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 topics:(id)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_queue_isCarPlayAvailableForApplication:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestAuthorizationWithTopics:(id)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
