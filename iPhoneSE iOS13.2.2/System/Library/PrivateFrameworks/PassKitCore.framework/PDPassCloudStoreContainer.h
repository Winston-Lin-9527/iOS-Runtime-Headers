/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDCloudStoreContainer.h>

@protocol PDCloudStorePassManager;
@interface PDPassCloudStoreContainer : PDCloudStoreContainer {

	id<PDCloudStorePassManager> _passManager;
	BOOL _canInitializeContainer;

}
-(void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)saveCachedContainerValues;
-(void)readCachedContainerValues;
-(void)invalidateServerChangeTokens;
-(void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(/*^block*/id)arg1 ;
-(id)recordTypeForRecordID:(id)arg1 ;
-(BOOL)canInitializeContainer;
-(void)cloudStoreAccountChanged:(id)arg1 ;
-(void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_canInitializeContainer;
-(id)_ubiquitousCatalogOfRecord;
-(BOOL)_isPassItemFromRecordType:(id)arg1 ;
-(BOOL)_isRemoteAssetItemFromRecordType:(id)arg1 ;
-(BOOL)_isPassCatalogItemFromRecordType:(id)arg1 ;
-(id)_catalogOfRecord;
-(id)initWithDataSource:(id)arg1 passManager:(id)arg2 ;
@end
