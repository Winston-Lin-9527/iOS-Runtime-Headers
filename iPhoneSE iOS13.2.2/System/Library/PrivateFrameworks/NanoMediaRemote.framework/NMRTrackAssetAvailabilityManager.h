/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface NMRTrackAssetAvailabilityManager : NSObject {

	NSCache* _assetAvailabilityCache;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(long long)availabilityForTrackPID:(id)arg1 ;
@end
