/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTSectionConfigurationInternal.h>
#import <libobjc.A.dylib/BLTWatchKitAppListDelegate.h>

@protocol BLTSectionConfigurationDelegate;
@class BLTWatchKitAppList, NSCondition, NSString;

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal <BLTWatchKitAppListDelegate> {

	BLTWatchKitAppList* _watchKitAppList;
	NSCondition* _watchKitAppListLoadedCondition;
	BOOL _watchKitAppListLoaded;
	id<BLTSectionConfigurationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)watchKitAppList:(id)arg1 added:(id)arg2 removed:(id)arg3 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
-(void)_waitForWatchKitAppListLoaded;
-(id)initWithWatchKitAppList:(id)arg1 ;
-(void)setDelegate:(id<BLTSectionConfigurationDelegate>)arg1 ;
-(id<BLTSectionConfigurationDelegate>)delegate;
@end
