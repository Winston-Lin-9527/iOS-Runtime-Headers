/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(id)init;
-(void)dealloc;
-(id)inferenceProviderForType:(int)arg1 version:(SCD_Struct_BW94)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5 ;
-(VNProcessingDevice *)graphicsProcessingDevice;
-(VNProcessingDevice *)neuralProcessingDevice;
-(VNProcessingDevice *)espressoBasedRequestProcessingDevice;
-(VNProcessingDevice *)applicationProcessingDevice;
-(int)_executionTargetForProcessingDevice:(id)arg1 ;
@end
