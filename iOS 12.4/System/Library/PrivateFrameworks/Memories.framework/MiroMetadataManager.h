/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/VEiOSSharedObject.h>

@class NSCache;

@interface MiroMetadataManager : VEiOSSharedObject {

	NSCache* _assetMetadataCache;

}
+(id)sharedManager;
-(void)clearCaches;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 ;
-(id)metadataForAssetID:(id)arg1 ;
-(void)setMetadata:(id)arg1 forAssetID:(id)arg2 ;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)analyzeAssets:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)analyzeAsset:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)analyzeColorForAsset:(id)arg1 ;
-(void)analyzeColorForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end
