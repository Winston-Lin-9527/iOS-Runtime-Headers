/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTKFaceSnapshottingWindow, NTKDelayedBlock;

@interface NTKFaceSnapshotter : NSObject {

	NTKFaceSnapshottingWindow* _snapshotWindow;
	NTKDelayedBlock* _hideSnapshotWindowBlock;

}
-(void)_mainQueue_takeSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)viewControllerForFace:(id)arg1 withOptions:(id)arg2 ;
-(void)_showSnapshotWindowForDevice:(id)arg1 ;
-(id)_mainQueue_renderSnapshot;
-(void)_hideSnapshotWindow;
-(void)provideSnapshotOfFace:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end
