/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@class AEProgressViewModelSnapshot, PXAssetsDataSourceManager, NSDictionary, NSString;

@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver> {

	AEProgressViewModelSnapshot* _currentSnapshot;
	PXAssetsDataSourceManager* __dataSourceManager;
	NSDictionary* __progressByAsset;

}

@property (nonatomic,readonly) PXAssetsDataSourceManager * _dataSourceManager;                         //@synthesize _dataSourceManager=__dataSourceManager - In the implementation block
@property (setter=_setProgressByAsset:,nonatomic,retain) NSDictionary * _progressByAsset;              //@synthesize _progressByAsset=__progressByAsset - In the implementation block
@property (nonatomic,readonly) AEProgressViewModelSnapshot * progressSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXAssetsDataSourceManager *)_dataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(id)mutableChangeObject;
-(id)initWithDataSourceManager:(id)arg1 ;
-(AEProgressViewModelSnapshot *)progressSnapshot;
-(void)setProgress:(id)arg1 forAssetReference:(id)arg2 ;
-(id)_createSnapshot;
-(NSDictionary *)_progressByAsset;
-(void)_setProgressByAsset:(id)arg1 ;
-(void)dealloc;
@end
