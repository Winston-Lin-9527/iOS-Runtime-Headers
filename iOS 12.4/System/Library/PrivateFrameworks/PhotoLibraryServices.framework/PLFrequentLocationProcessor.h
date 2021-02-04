/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFrequentLocationProcessor : NSObject
+(id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(/*^block*/id)arg4 ;
+(id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_dateIntervalForItems:(id)arg1 ;
+(id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end
