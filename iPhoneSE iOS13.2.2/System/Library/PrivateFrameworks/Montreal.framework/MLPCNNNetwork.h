/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MLPNetwork.h>

@interface MLPCNNNetwork : MLPNetwork
-(id)initWithLayers:(id)arg1 ;
-(void)setOptimizerParams:(id)arg1 ;
-(void)createLayerKernels;
-(void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(/*^block*/id)arg4 semaphore:(id)arg5 ;
-(unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4 ;
-(id)computeInference:(id)arg1 ;
-(float)computeLoss:(id)arg1 ;
@end
