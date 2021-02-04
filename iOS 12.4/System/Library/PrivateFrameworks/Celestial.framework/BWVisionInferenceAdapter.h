/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class VNProcessingDevice;

@interface BWVisionInferenceAdapter : NSObject {

	VNProcessingDevice* _applicationProcessingDevice;
	VNProcessingDevice* _graphicsProcessingDevice;
	VNProcessingDevice* _neuralProcessingDevice;

}

@property (nonatomic,readonly) VNProcessingDevice * applicationProcessingDevice;                       //@synthesize applicationProcessingDevice=_applicationProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * graphicsProcessingDevice;                          //@synthesize graphicsProcessingDevice=_graphicsProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * neuralProcessingDevice;                            //@synthesize neuralProcessingDevice=_neuralProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * espressoBasedRequestProcessingDevice; 
+(void)initialize;
-(id)inferenceProviderForType:(int)arg1 version:(SCD_Struct_BW85)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5 ;
-(VNProcessingDevice *)graphicsProcessingDevice;
-(VNProcessingDevice *)neuralProcessingDevice;
-(VNProcessingDevice *)espressoBasedRequestProcessingDevice;
-(VNProcessingDevice *)applicationProcessingDevice;
-(int)_executionTargetForProcessingDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
