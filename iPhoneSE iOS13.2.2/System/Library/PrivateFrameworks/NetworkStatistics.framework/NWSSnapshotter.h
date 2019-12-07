/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWSSnapshotSource;

@interface NWSSnapshotter : NSObject {

	unsigned long long _kernelSourceRef;
	NWSSnapshotSource* _snapshotSource;

}

@property (assign) unsigned long long kernelSourceRef;              //@synthesize kernelSourceRef=_kernelSourceRef - In the implementation block
@property (retain) NWSSnapshotSource * snapshotSource;              //@synthesize snapshotSource=_snapshotSource - In the implementation block
-(id)snapshot;
-(unsigned long long)kernelSourceRef;
-(void)setKernelSourceRef:(unsigned long long)arg1 ;
-(NWSSnapshotSource *)snapshotSource;
-(void)setSnapshotSource:(NWSSnapshotSource *)arg1 ;
@end
