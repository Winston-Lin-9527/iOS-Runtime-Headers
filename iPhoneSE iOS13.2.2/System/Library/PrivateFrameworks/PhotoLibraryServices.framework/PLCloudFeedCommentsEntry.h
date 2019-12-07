/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSString, NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (nonatomic,retain) NSString * entryCloudAssetGUID; 
@property (nonatomic,retain) NSOrderedSet * entryLikeComments; 
@property (nonatomic,retain) NSOrderedSet * entryComments; 
@property (nonatomic,__weak,readonly) NSMutableOrderedSet * mutableEntryLikeComments; 
@property (nonatomic,__weak,readonly) NSMutableOrderedSet * mutableEntryComments; 
+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(NSMutableOrderedSet *)mutableEntryLikeComments;
-(NSMutableOrderedSet *)mutableEntryComments;
@end
