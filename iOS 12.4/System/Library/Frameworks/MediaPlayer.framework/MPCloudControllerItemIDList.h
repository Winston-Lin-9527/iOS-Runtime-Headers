/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HSCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject {

	HSCloudItemIDList* _cloudItemIDList;

}
+(id)cloudItemIDListForPlaylist:(id)arg1 ;
-(id)HSCloudItemIDList;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)init;
@end
