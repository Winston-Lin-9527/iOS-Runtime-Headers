/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter, PTTestRecipe;

@interface UNSExampleUserNotificationCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;
	PTTestRecipe* _basicTestRecipe;

}
-(id)init;
-(void)publish;
-(void)update;
-(id)sectionIdentifier;
-(void)removeAllNotifications;
-(id)_userNotificationCenter;
-(id)_basicPostUpdateRecipe;
-(void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1 ;
-(void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2 ;
-(void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_existingNotificationRequestForIdentifier:(id)arg1 ;
-(id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2 ;
-(id)latestNotificationRequestIdentifier;
-(void)publish:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end
