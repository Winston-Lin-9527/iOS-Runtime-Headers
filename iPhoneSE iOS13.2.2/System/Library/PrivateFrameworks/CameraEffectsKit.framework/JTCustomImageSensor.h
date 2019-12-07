/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ARSensor.h>

@protocol ARSensorDelegate;
@class NSString;

@interface JTCustomImageSensor : NSObject <ARSensor> {

	id<ARSensorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(unsigned long long)providedDataTypes;
-(void)createImageDataFromFrameSet:(id)arg1 captureDevice:(id)arg2 captureSession:(id)arg3 trackedFacesMetadata:(id)arg4 faceObjectsMetadata:(id)arg5 ;
-(void)outputSensorData:(id)arg1 ;
@end
