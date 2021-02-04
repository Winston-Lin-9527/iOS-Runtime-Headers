/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>
#import <libobjc.A.dylib/NUVideoPlaybackCounter.h>

@protocol NUVideoPlaybackCounter <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedInSession; 
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedSinceLastAd; 
@required
-(unsigned long long)numberOfVideosPlayedInSession;
-(unsigned long long)numberOfVideosPlayedSinceLastAd;

@end

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSString;

@interface NUVideoPlaybackCounter : NSObject <NUVideoPlayerEventTracker, NUVideoPlaybackCounter, NUAdContextProvider> {

	unsigned long long numberOfVideosPlayedSinceLastAd;
	unsigned long long numberOfVideosPlayedInSession;

}

@property (assign,nonatomic) unsigned long long numberOfVideosPlayedInSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedSinceLastAd; 
-(id)adContextValueForKeyPath:(id)arg1 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedForVideoAdWithMetadata:(id)arg1 ;
-(unsigned long long)numberOfVideosPlayedInSession;
-(unsigned long long)numberOfVideosPlayedSinceLastAd;
-(void)resetNumberOfVideosPlayedSinceLastAd;
-(void)incrementNumberOfVideosPlayedSinceLastAd;
-(void)incrementNumberOfVideosPlayedInSession;
-(void)setNumberOfVideosPlayedInSession:(unsigned long long)arg1 ;
-(void)setNumberOfVideosPlayedSinceLastAd:(unsigned long long)arg1 ;
@end
