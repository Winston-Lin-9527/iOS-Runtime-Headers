/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLAssetContainer.h>
#import <libobjc.A.dylib/PLMomentData_Private.h>

@class PLMomentNameInfo, CLLocation, NSString, NSDate, NSOrderedSet, PLMomentList, NSData, PLManagedAsset, NSArray;

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private> {

	PLMomentNameInfo* _cachedNameInfo;
	BOOL _loadedNameInfo;
	CLLocation* _cachedApproximateLocation;
	BOOL _didCacheApproximateLocation;
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * title2; 
@property (nonatomic,retain) NSString * title3; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (nonatomic,retain) NSOrderedSet * assets; 
@property (nonatomic,retain) PLMomentList * yearMomentList; 
@property (nonatomic,retain) PLMomentList * megaMomentList; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (assign,nonatomic) BOOL reverseLocationDataContainsLocation; 
@property (assign,nonatomic) short generationType; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (assign,nonatomic) BOOL usedLocationsOfInterest; 
@property (assign,nonatomic) double approximateLatitude; 
@property (assign,nonatomic) double approximateLongitude; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) CLLocation * approximateLocation; 
@property (nonatomic,retain,readonly) NSArray * batchedAssets; 
@property (nonatomic,retain) NSArray * userTitles; 
+(id)baseSearchIndexPredicate;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(BOOL)arg2 error:(id*)arg3 ;
+(id)predicateForAssetsIncludedInMoments;
+(unsigned long long)numberOfMomentsGeneratedWithoutLocationsOfInterestInformation:(id)arg1 error:(id*)arg2 ;
+(id)sortByTimeSortDescriptors;
+(id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)entityName;
+(id)allAssetsIncludedInMomentsInLibrary:(id)arg1 ;
-(void)delete;
-(id)bestAsset;
-(void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4 ;
-(void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomyProxy:(id)arg3 ;
-(void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendHolidays:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3 ;
-(void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendWorkText:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendHomeToCollection:(id)arg1 ;
-(id)displayTitleWithDateFormatter:(id)arg1 ;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5 ;
-(NSArray *)batchedAssets;
-(void)willSave;
-(void)awakeFromInsert;
-(CLLocation *)pl_location;
-(BOOL)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(void)registerForChanges;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(NSObject*<NSCopying>)uniqueObjectID;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(unsigned long long)pl_numberOfAssets;
-(CLLocation *)approximateLocation;
-(void)setUserTitles:(NSArray *)arg1 ;
-(NSArray *)userTitles;
-(NSDate *)pl_endDate;
-(NSDate *)pl_startDate;
-(unsigned long long)fetchedAssetsCount;
-(void)_updateCachedNameInfoIfNeeded;
-(BOOL)_validateForInsertOrUpdate:(id*)arg1 ;
-(void)replaceObjectInAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeAssetsObject:(id)arg1 ;
-(void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id)arg2 ;
-(void)removeAssetData:(id)arg1 ;
-(void)setApproximateLocation:(CLLocation *)arg1 ;
-(void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromAssetsAtIndex:(unsigned long long)arg1 ;
-(void)addAssetsObject:(id)arg1 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(void)removeAssets:(id)arg1 ;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)addAssets:(id)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)approximateCount;
-(CGImageRef)posterImage;
-(BOOL)supportsDiagnosticInformation;
-(id)diagnosticInformation;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;
-(id)mutableAssets;
-(BOOL)isCloudSharedAlbum;
-(id)groupURL;
-(void)invalidateNameInfo;
-(void)dealloc;
-(NSString *)localizedTitle;
-(BOOL)isEmpty;
@end
