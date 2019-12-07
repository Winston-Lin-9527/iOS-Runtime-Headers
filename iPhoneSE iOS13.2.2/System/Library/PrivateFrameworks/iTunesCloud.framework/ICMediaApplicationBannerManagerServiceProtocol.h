/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICMediaApplicationBannerManagerServiceProtocol <NSObject>
@required
-(void)serviceResetWithCompletion:(/*^block*/id)arg1;
-(void)serviceSyncWithCompletion:(/*^block*/id)arg1;
-(void)serviceProcessSyncCommands:(id)arg1 completion:(/*^block*/id)arg2;
-(void)serviceAllBannersWithCompletion:(/*^block*/id)arg1;
-(void)serviceBannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(/*^block*/id)arg3;
-(void)serviceUpdateBanner:(id)arg1 completion:(/*^block*/id)arg2;
-(void)serviceUpdateBanners:(id)arg1 completion:(/*^block*/id)arg2;

@end
