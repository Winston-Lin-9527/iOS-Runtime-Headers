/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol PLSearchableAssetCollection <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@required
-(id)uuid;
-(NSString *)title;
-(NSString *)subtitle;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
-(NSString *)keyAssetUUID;
-(unsigned long long)numberOfAssets;
-(id)searchIndexContents;
-(unsigned long long)searchIndexCategory;
-(NSDate *)keyAssetCreationDate;
-(NSDate *)searchableStartDate;
-(NSDate *)searchableEndDate;

@end
