/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLSearchResult.h>

@class PSICollectionResult, NSString, NSDate, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult {

	PSICollectionResult* _collectionResult;

}

@property (nonatomic,readonly) PSICollectionResult * collectionResult;              //@synthesize collectionResult=_collectionResult - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) PSIDate * startDate; 
@property (nonatomic,readonly) PSIDate * endDate; 
@property (nonatomic,readonly) unsigned long long collectionType; 
-(id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2 ;
-(PSICollectionResult *)collectionResult;
-(PSIDate *)startDate;
-(PSIDate *)endDate;
-(id)keyAssetUUID;
-(unsigned long long)collectionType;
-(unsigned long long)assetCount;
-(NSDate *)sortDate;
-(NSString *)uuid;
-(NSString *)title;
-(NSString *)subtitle;
-(unsigned long long)type;
@end
