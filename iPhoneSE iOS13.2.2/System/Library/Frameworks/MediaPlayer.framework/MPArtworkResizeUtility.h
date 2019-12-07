/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSOperationQueue, NSMapTable;

@interface MPArtworkResizeUtility : NSObject {

	NSObject*<OS_dispatch_queue> _artworkResizingAccessQueue;
	NSOperationQueue* _artworkResizingOperationQueue;
	NSMapTable* _artworkResizingOperations;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> artworkResizingAccessQueue;              //@synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * artworkResizingOperationQueue;                     //@synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * artworkResizingOperations;                               //@synthesize artworkResizingOperations=_artworkResizingOperations - In the implementation block
-(id)init;
-(id)resizeImage:(id)arg1 scaledFittingSize:(CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 saveToDestinationURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cancelResizeImage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)artworkResizingAccessQueue;
-(void)setArtworkResizingAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSOperationQueue *)artworkResizingOperationQueue;
-(void)setArtworkResizingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSMapTable *)artworkResizingOperations;
-(void)setArtworkResizingOperations:(NSMapTable *)arg1 ;
@end
