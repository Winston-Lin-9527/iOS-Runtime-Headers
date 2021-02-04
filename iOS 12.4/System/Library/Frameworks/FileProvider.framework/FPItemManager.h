/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <FileProvider/FileProvider-Structs.h>
@class NSOperationQueue, NSObject, NSMutableSet;

@interface FPItemManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableSet* _activeCollections;

}
+(id)defaultManager;
-(void)fetchURLForItem:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchRemoteOperationServiceForProvider:(id)arg1 handler:(/*^block*/id)arg2 connectionErrorHandler:(/*^block*/id)arg3 ;
-(void)fetchItemForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchRemoteFileProviderVendorWithIdentifier:(id)arg1 remoteObjectInterface:(id)arg2 messageInterface:(id)arg3 handler:(/*^block*/id)arg4 connectionErrorHandler:(/*^block*/id)arg5 ;
-(void)scheduleAction:(id)arg1 ;
-(id)rootCollectionForProvider:(id)arg1 fileTypes:(id)arg2 ;
-(void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_thumbnailsFetchOperationForProviderIdentifier:(id)arg1 itemIDs:(id)arg2 withSize:(CGSize)arg3 scale:(double)arg4 ;
-(void)_fetchURLForItemID:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchRemoteFileProviderWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchRemoteFileProviderEndpointWithIdentifier:(id)arg1 remoteObjectInterface:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchRequestProxyFactoryEndpointForMessageInterface:(id)arg1 providerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(id)arg1 itemURL:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_isValidDestination:(id)arg1 ;
-(id)newRootCollectionForProviderIdentifier:(id)arg1 ;
-(id)collectionForFolderItem:(id)arg1 fileTypes:(id)arg2 ;
-(id)collectionWithIdentifier:(id)arg1 providerIdentifier:(id)arg2 fileTypes:(id)arg3 ;
-(id)recursiveFolderCollectionForProvider:(id)arg1 ;
-(id)thumbnailsFetchOperationForItems:(id)arg1 withSize:(CGSize)arg2 scale:(double)arg3 ;
-(void)extendBookmarkForItem:(id)arg1 receivingBundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchParentForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchRootItemForProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDefaultLocationForApplication:(id)arg1 defaultProvider:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchFileProviderServices:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchServiceEndpointCreatingForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)eligibleActionsForItems:(id)arg1 ;
-(id)eligibleActionsForDroppingItems:(id)arg1 underItem:(id)arg2 ;
-(id)eligibleActionsForDroppingUTIs:(id)arg1 underItem:(id)arg2 ;
-(id)operationForAction:(id)arg1 items:(id)arg2 ;
-(void)recursivelyExportItem:(id)arg1 toURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 fileTypes:(id)arg4 ;
-(void)fetchURLForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchURLForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)addOperation:(id)arg1 ;
@end
