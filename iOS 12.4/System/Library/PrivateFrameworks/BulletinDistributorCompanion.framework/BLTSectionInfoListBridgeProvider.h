/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BLTSectionInfoListProvider.h>

@protocol BLTSectionInfoListProviderDelegate;
@class NSDate, BLTSectionConfiguration, NSString;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListProvider> {

	opaque_pthread_mutex_t _lock;
	NSDate* _lastKnownBridgeSettingsChangeDate;
	id<BLTSectionInfoListProviderDelegate> _delegate;
	BLTSectionConfiguration* _sectionConfiguration;

}

@property (nonatomic,retain) BLTSectionConfiguration * sectionConfiguration;                      //@synthesize sectionConfiguration=_sectionConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadUpdatedOverrides;
-(void)_reloadUpdatedOverridesWithCompletion:(/*^block*/id)arg1 ;
-(id)_loadOverridesChangedSince:(id)arg1 ;
-(BLTSectionConfiguration *)sectionConfiguration;
-(id)initWithSectionConfiguration:(id)arg1 ;
-(void)setNotificationsLevel:(int)arg1 sectionID:(id)arg2 forceCustom:(BOOL)arg3 ;
-(void)setSectionConfiguration:(BLTSectionConfiguration *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<BLTSectionInfoListProviderDelegate>)arg1 ;
-(id<BLTSectionInfoListProviderDelegate>)delegate;
@end
