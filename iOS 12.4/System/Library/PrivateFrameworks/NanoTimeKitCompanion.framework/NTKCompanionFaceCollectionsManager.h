/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSMutableDictionary;

@interface NTKCompanionFaceCollectionsManager : NSObject {

	NSUUID* _activeDeviceUUID;
	NSMutableDictionary* _faceCollectionsForCollectionIdentifier;
	int _pairedDeviceVersionChangeNotificationToken;

}
+(id)sharedInstance;
-(id)sharedFaceCollectionForDevice:(id)arg1 forCollectionIdentifier:(id)arg2 ;
-(id)sharedLibraryFaceCollectionsForAllDevices;
-(id)init;
-(void)dealloc;
@end
