/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CFXCameraViewController.h>

@interface CNKFaceTimeCameraViewController : CFXCameraViewController {

	 cameraDelegate;

}

@property (assign,__weak,nonatomic) id<CNKFaceTimeCameraViewControllerDelegate> cameraDelegate; 
-(id<CNKFaceTimeCameraViewControllerDelegate>)cameraDelegate;
-(void)setCameraDelegate:(id<CNKFaceTimeCameraViewControllerDelegate>)arg1 ;
-(id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 ;
-(void)effectBrowserViewController:(id)arg1 didSelectApp:(id)arg2 ;
@end
