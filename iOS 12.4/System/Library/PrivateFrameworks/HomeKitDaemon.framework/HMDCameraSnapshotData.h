/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSData, HMFOSTransaction, HMDVideoResolution;

@interface HMDCameraSnapshotData : HMFObject {

	NSData* _snapshotData;
	HMFOSTransaction* _snapshotDataTrasaction;
	HMDVideoResolution* _videoResolution;

}

@property (nonatomic,readonly) NSData * snapshotData;                                  //@synthesize snapshotData=_snapshotData - In the implementation block
@property (nonatomic,readonly) HMFOSTransaction * snapshotDataTrasaction;              //@synthesize snapshotDataTrasaction=_snapshotDataTrasaction - In the implementation block
@property (nonatomic,readonly) HMDVideoResolution * videoResolution;                   //@synthesize videoResolution=_videoResolution - In the implementation block
-(HMDVideoResolution *)videoResolution;
-(HMFOSTransaction *)snapshotDataTrasaction;
-(id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2 ;
-(void)dealloc;
@end
