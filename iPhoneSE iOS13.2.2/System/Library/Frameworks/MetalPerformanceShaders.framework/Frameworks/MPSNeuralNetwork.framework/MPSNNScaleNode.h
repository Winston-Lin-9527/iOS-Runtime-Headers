/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSImageTransformProvider;
@interface MPSNNScaleNode : MPSNNFilterNode {

	id<MPSImageTransformProvider> _transformProvider;
	MPSImageCoordinate _size;

}
+(id)nodeWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
+(id)nodeWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(id)privateInitWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(id)initWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
@end
