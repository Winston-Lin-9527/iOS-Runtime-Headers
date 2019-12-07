/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation {

	HMCameraClip* _cameraClip;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;              //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)main;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(HMCameraClip *)cameraClip;
-(id)initWithCameraClip:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
@end
