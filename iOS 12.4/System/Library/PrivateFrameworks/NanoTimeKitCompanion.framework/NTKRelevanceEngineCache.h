/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>
#import <libobjc.A.dylib/RERelevanceEngineObserver.h>

@class NSLock, RERelevanceEngine, NTKFaceCollection, NSString;

@interface NTKRelevanceEngineCache : NSObject <NTKFaceCollectionObserver, RERelevanceEngineObserver> {

	NSLock* _coordinatorLock;
	RERelevanceEngine* _coordinator;
	RERelevanceEngine* _staticCoordinator;
	NTKFaceCollection* _libraryCollection;
	BOOL _isEditing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dataSourceLoaderForRelevanceEngineDataSourcesForKey:(id)arg1 ;
+(id)sampleConfiguration;
+(id)_globallyCachedCanonicalRelevanceEngine;
+(id)_modelFileLocation;
+(id)sharedCache;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(BOOL)_needsLiveElementCoordinator;
-(void)_unloadCoordinatorIfNeeded;
-(void)_loadCoordinatorIfNeeded;
-(BOOL)_faceNeedsElementCoordinator:(id)arg1 ;
-(BOOL)_faceCollectionContainsFaceNeedingElementCoordinator:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 ;
-(BOOL)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2 ;
-(void)setLibraryCollection:(id)arg1 ;
-(id)sharedRelevanceEngine;
-(id)canonicalRelevanceEngine;
-(void)_clockViewControllerDidBeginEditing;
-(void)_clockViewControllerDidEndEditing;
-(void)prewarm;
-(void)_beginLoadingDataForEngine:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
