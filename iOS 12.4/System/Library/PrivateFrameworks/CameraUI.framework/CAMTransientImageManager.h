/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PUTransientImageManager.h>

@class NSMutableDictionary, NSString;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager> {

	NSMutableDictionary* __pairedVideosByPairedUUID;
	NSMutableDictionary* __activeRequestsByPairedUUID;

}

@property (nonatomic,readonly) NSMutableDictionary * _pairedVideosByPairedUUID;                //@synthesize _pairedVideosByPairedUUID=__pairedVideosByPairedUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _activeRequestsByPairedUUID;              //@synthesize _activeRequestsByPairedUUID=__activeRequestsByPairedUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)insertPairedVideoWithConvertible:(id)arg1 filterType:(long long)arg2 ;
-(void)removePairedVideoForUUID:(id)arg1 ;
-(NSMutableDictionary *)_pairedVideosByPairedUUID;
-(NSMutableDictionary *)_activeRequestsByPairedUUID;
-(void)_handleRequestTimeout:(id)arg1 ;
-(id)existingPairedVideoForUUID:(id)arg1 ;
-(id)init;
@end
