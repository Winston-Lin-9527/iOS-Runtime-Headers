/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUCubemapHistogram : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapHistogramPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(ARLabHistogram)colorHistogramForCubemap:(id)arg1 ;
@end
