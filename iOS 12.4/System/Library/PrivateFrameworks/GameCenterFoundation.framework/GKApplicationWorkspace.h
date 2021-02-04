/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(void)openGameCenterSettings;
-(void)openSettings;
-(void)openICloudSettings;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1 ;
-(LSApplicationWorkspace *)lsWorkspace;
-(id)initWithWorkspace:(id)arg1 ;
-(void)dealloc;
-(void)openURL:(id)arg1 ;
@end
