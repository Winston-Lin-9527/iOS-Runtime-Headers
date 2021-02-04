/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPModelStoreBrowseSectionUniformContentItemTypeResolver : NSObject {

	BOOL _hasValidUniformContentItemType;
	map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long> > >* _contentItemTypeOccurrences;
	unsigned long long _totalNumberOfOccurrences;
	long long _uniformContentItemType;

}
-(void)addContentItemType:(long long)arg1 ;
-(long long)uniformContentItemType;
@end
