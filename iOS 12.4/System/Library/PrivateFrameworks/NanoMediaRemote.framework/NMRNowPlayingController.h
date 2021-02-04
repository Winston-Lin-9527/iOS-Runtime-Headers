/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <libobjc.A.dylib/NMROriginObserverDelegate.h>

@protocol NMRNowPlayingControllerDelegate, OS_dispatch_queue;
@class NSMapTable, NSHashTable, NMROrigin, NSString, NSArray, NSObject;

@interface NMRNowPlayingController : NSObject <NMROriginObserverDelegate> {

	unsigned long long _registeredObserversCount;
	NSMapTable* _originControllers;
	NSHashTable* _observerDelegates;
	NMROrigin* _activeNowPlayingOrigin;
	NSString* _activeNowPlayingOriginExplanationLog;
	NSArray* _nowPlayingOrigins;
	BOOL _shouldObserveArtwork;
	BOOL _shouldObservePlaybackQueue;
	id<NMRNowPlayingControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _observerLock;
	unsigned long long _filteringOptions;

}

@property (assign,nonatomic,__weak) id<NMRNowPlayingControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldObservePlaybackQueue; 
@property (assign,nonatomic) BOOL shouldObserveArtwork; 
@property (nonatomic,readonly) NMROrigin * activeNowPlayingOrigin; 
@property (nonatomic,readonly) NSArray * nowPlayingOrigins; 
@property (nonatomic,readonly) unsigned long long filteringOptions;                            //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)filteringOptions;
-(void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2 ;
-(BOOL)shouldObservePlaybackQueue;
-(void)setShouldObservePlaybackQueue:(BOOL)arg1 ;
-(BOOL)shouldObserveArtwork;
-(void)setShouldObserveArtwork:(BOOL)arg1 ;
-(void)_setupOriginControllers;
-(id)_nowPlayingStateForOrigin:(id)arg1 ;
-(id)_originControllerForOrigin:(id)arg1 ;
-(void)_updateNowPlayingStateForOrigin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_evaluateNowPlayingOrigins;
-(id)nowPlayingStateForOrigin:(id)arg1 ;
-(void)_enumerateObserverDelegates:(/*^block*/id)arg1 ;
-(void)_updateOriginControllers:(id)arg1 ;
-(void)_addOriginControllerWithOrigin:(id)arg1 ;
-(void)_removeOriginControllerWithOrigin:(id)arg1 ;
-(id)_evaluateNowPlayingOriginsFromOrigins:(id)arg1 ;
-(id)_evaluateActiveNowPlayingOriginForOrderedOrigins:(id)arg1 ;
-(NMROrigin *)activeNowPlayingOrigin;
-(NSArray *)nowPlayingOrigins;
-(id)playbackQueueForOrigin:(id)arg1 ;
-(void)updateNowPlayingStateForOrigin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateNowPlayingStateForAllOriginsWithCompletion:(/*^block*/id)arg1 ;
-(id)launchNowPlayingURLForOrigin:(id)arg1 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 toOrigin:(id)arg2 options:(id)arg3 launchApp:(BOOL)arg4 ;
-(void)addObserverDelegate:(id)arg1 ;
-(void)removeObserverDelegate:(id)arg1 ;
-(void)beginObservingOrigins;
-(void)endObservingOrigins;
-(void)setOriginObserver:(id)arg1 forOrigin:(id)arg2 ;
-(void)setOriginCommandHandler:(id)arg1 forOrigin:(id)arg2 ;
-(void)prepareLocalOriginObserverForNewPlaybackIntent;
-(void)dealloc;
-(void)setDelegate:(id<NMRNowPlayingControllerDelegate>)arg1 ;
-(id<NMRNowPlayingControllerDelegate>)delegate;
-(id)initWithOptions:(unsigned long long)arg1 ;
@end
