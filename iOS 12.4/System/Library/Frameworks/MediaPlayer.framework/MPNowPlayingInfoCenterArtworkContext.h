/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPMediaItemArtwork, NSData;

@interface MPNowPlayingInfoCenterArtworkContext : NSObject {

	NSString* _artworkIdentifier;
	MPMediaItemArtwork* _artwork;
	NSData* _artworkData;

}

@property (nonatomic,copy) NSString * artworkIdentifier;                //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) MPMediaItemArtwork * artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSData * artworkData;                      //@synthesize artworkData=_artworkData - In the implementation block
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(MPMediaItemArtwork *)artwork;
-(NSString *)artworkIdentifier;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
@end
