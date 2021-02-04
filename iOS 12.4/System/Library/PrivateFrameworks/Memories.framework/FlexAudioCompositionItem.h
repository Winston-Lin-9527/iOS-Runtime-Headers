/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class FlexAudioClip;

@interface FlexAudioCompositionItem : MovieCompositionItem

@property (nonatomic,retain) FlexAudioClip * clip; 
-(id)trackInfoDict;
-(id)segmentsForFMTrack:(id)arg1 andTimeRange:(SCD_Struct_Mi11)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)audioTrackSegmentsForDestinationTime:(SCD_Struct_Mi1)arg1 ;
@end
