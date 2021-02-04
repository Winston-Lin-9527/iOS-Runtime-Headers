/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject {

	MPMediaLibraryView* _libraryView;
	BOOL _shouldExcludePurchaseHistoryContent;

}
+(id)sharedSystemFilters;
-(BOOL)shouldExcludePurchaseHistoryContentForLibrary:(id)arg1 ;
-(void)_cloudLibraryAvailabilityDidChange:(id)arg1 ;
-(void)_updateFilters;
-(id)_init;
@end
