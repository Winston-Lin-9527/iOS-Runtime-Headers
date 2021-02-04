/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWPreviewTimeMachineProcessor <NSObject>
@property (readonly) SCD_Struct_BW9 frameDimensions; 
@required
-(SCD_Struct_BW9)frameDimensions;
-(void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)suspendWithPTSRange:(SCD_Struct_BW10)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resume;

@end
