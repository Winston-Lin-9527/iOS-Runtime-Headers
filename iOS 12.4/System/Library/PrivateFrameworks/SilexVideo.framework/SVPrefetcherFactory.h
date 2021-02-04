/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPrefetcherFactory.h>

@protocol SVPrefetcherFactory <NSObject>
@required
-(id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;

@end


@protocol SVVideoBufferObserverFactory, SVPrefetchPolicyHandler, SVPlayerItemLoaderProviding, SVVideoLoadingStateObserverFactory, SVVideoLoadingProgressObserverFactory, SVVideoPlaybackProgressObserverFactory;
@class NSString;

@interface SVPrefetcherFactory : NSObject <SVPrefetcherFactory> {

	id<SVVideoBufferObserverFactory> _bufferObserverFactory;
	id<SVPrefetchPolicyHandler> _prefetchPolicyHandler;
	id<SVPlayerItemLoaderProviding> _playerItemLoaderProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
	id<SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoBufferObserverFactory> bufferObserverFactory;                                  //@synthesize bufferObserverFactory=_bufferObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVPrefetchPolicyHandler> prefetchPolicyHandler;                                       //@synthesize prefetchPolicyHandler=_prefetchPolicyHandler - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemLoaderProviding> playerItemLoaderProvider;                                //@synthesize playerItemLoaderProvider=_playerItemLoaderProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                      //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingProgressObserverFactory> loadingProgressObserverFactory;                //@synthesize loadingProgressObserverFactory=_loadingProgressObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;              //@synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPlaybackProgressObserverFactory>)playbackProgressObserverFactory;
-(id<SVPrefetchPolicyHandler>)prefetchPolicyHandler;
-(id<SVPlayerItemLoaderProviding>)playerItemLoaderProvider;
-(id<SVVideoBufferObserverFactory>)bufferObserverFactory;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id<SVVideoLoadingProgressObserverFactory>)loadingProgressObserverFactory;
-(id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2 ;
-(id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playerItemLoaderProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6 ;
@end
