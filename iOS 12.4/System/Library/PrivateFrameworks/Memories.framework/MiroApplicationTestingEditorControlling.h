/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MiroTimelineClipCollectionViewController;


@protocol MiroApplicationTestingEditorControlling <NSObject>
@property (assign,nonatomic,__weak) MiroTimelineClipCollectionViewController * timelineViewController; 
@required
-(MiroTimelineClipCollectionViewController *)timelineViewController;
-(void)setTimelineViewController:(id)arg1;
-(void)addWithCompletion:(/*^block*/id)arg1;
-(void)removeClipAtIndexPath:(id)arg1;

@end
