/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNLaunchServicesAdapter, OS_os_log;
@class NSObject;

@interface CNLaunchServices : NSObject {

	id<CNLaunchServicesAdapter> _adapter;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) id<CNLaunchServicesAdapter> adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                         //@synthesize log=_log - In the implementation block
-(id<CNLaunchServicesAdapter>)adapter;
-(id)initWithAdapter:(id)arg1 ;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAdapter:(id<CNLaunchServicesAdapter>)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)applicationsForUserActivityType:(id)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
@end
