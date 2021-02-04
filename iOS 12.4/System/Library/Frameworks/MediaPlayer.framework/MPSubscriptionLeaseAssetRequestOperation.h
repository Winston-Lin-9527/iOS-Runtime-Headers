/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class SSVPlaybackLeaseRequest;

@interface MPSubscriptionLeaseAssetRequestOperation : MPAsyncOperation {

	SSVPlaybackLeaseRequest* _playbackLeaseRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) SSVPlaybackLeaseRequest * playbackLeaseRequest;              //@synthesize playbackLeaseRequest=_playbackLeaseRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
-(SSVPlaybackLeaseRequest *)playbackLeaseRequest;
-(void)setPlaybackLeaseRequest:(SSVPlaybackLeaseRequest *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end
