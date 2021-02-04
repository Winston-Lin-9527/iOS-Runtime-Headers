/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaEntity.h>

@class NSNumber, MPMediaItem, NSString, NSURL, VUIMediaItemCredits, NSDate;

@interface VUIMediaItem : VUIMediaEntity {

	NSNumber* _isPlayable;

}

@property (nonatomic,readonly) MPMediaItem * mediaPlayerMediaItem; 
@property (nonatomic,copy,readonly) NSNumber * assetType; 
@property (nonatomic,copy,readonly) NSNumber * isPlayable;                                             //@synthesize isPlayable=_isPlayable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy,readonly) NSString * previewFrameImageIdentifier; 
@property (nonatomic,copy,readonly) NSURL * extrasURL; 
@property (nonatomic,copy,readonly) NSString * seasonTitle; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> seasonIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,copy,readonly) VUIMediaItemCredits * credits; 
@property (nonatomic,copy,readonly) NSNumber * rentalPlaybackDuration; 
@property (nonatomic,copy,readonly) NSDate * rentalExpirationDate; 
@property (nonatomic,copy,readonly) NSDate * downloadExpirationDate; 
@property (nonatomic,copy) NSNumber * hasBeenPlayed; 
@property (nonatomic,copy) NSNumber * playCount; 
@property (nonatomic,copy) NSNumber * bookmark; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_mediaItemWithMPMediaItem:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(id)lastPlayedDate;
-(NSNumber *)hasBeenPlayed;
-(NSNumber *)episodeNumber;
-(NSNumber *)playCount;
-(id)creationDate;
-(NSNumber *)isPlayable;
-(NSNumber *)bookmark;
-(void)setBookmark:(NSNumber *)arg1 ;
-(NSNumber *)assetType;
-(VUIMediaItemCredits *)credits;
-(id)modifiedDate;
-(id)description;
-(NSNumber *)duration;
-(MPMediaItem *)mediaPlayerMediaItem;
-(NSURL *)extrasURL;
-(NSString *)seasonTitle;
-(NSString *)studio;
-(NSDate *)rentalExpirationDate;
-(NSDate *)downloadExpirationDate;
-(NSNumber *)rentalPlaybackDuration;
-(NSString *)previewFrameImageIdentifier;
-(NSObject*<VUIMediaEntityIdentifier>)seasonIdentifier;
@end
