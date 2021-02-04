/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString;

@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality> {

	long long _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;

}

@property (nonatomic,readonly) long long artworkType;                         //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken;              //@synthesize availableArtworkToken=_availableArtworkToken - In the implementation block
@property (nonatomic,readonly) NSString * fetchableArtworkToken;              //@synthesize fetchableArtworkToken=_fetchableArtworkToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)artworkType;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
@end
