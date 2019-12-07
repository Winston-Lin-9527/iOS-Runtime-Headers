/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PPInternalServerProtocol
@required
-(void)sysdiagnoseInformationWithCompletion:(/*^block*/id)arg1;
-(void)abGroupInfoWithCompletion:(/*^block*/id)arg1;
-(void)assetVersionsWithCompletion:(/*^block*/id)arg1;
-(void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)downloadAssetMetadataWithCompletion:(/*^block*/id)arg1;
-(void)assetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1;
-(void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(/*^block*/id)arg2;

@end
