/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerControllerQueue.h>

@class NSMutableDictionary, NSMutableArray, NSArray, NSDictionary;

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue {

	NSMutableDictionary* _insertions;
	NSMutableArray* _queueDescriptorsToPrepend;
	NSMutableArray* _itemsToRemove;

}

@property (nonatomic,copy,readonly) NSArray * queueDescriptorsToPrepend; 
@property (nonatomic,copy,readonly) NSDictionary * queueInsertions; 
@property (nonatomic,copy,readonly) NSArray * removals; 
@property (nonatomic,readonly) BOOL hasModifications; 
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(NSArray *)removals;
-(NSDictionary *)queueInsertions;
-(NSArray *)queueDescriptorsToPrepend;
-(void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2 ;
-(BOOL)hasModifications;
@end
