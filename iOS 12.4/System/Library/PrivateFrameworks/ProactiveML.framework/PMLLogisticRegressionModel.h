/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLRegressionModelProtocol.h>
#import <libobjc.A.dylib/PMLClassifierModelProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLGradientSolver, NSString;

@interface PMLLogisticRegressionModel : NSObject <PMLRegressionModelProtocol, PMLClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {

	PMLGradientSolver* _solver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)solverWithWeights:(id)arg1 andIntercept:(BOOL)arg2 ;
+(id)solverWithWeights:(id)arg1 andIntercept:(BOOL)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5 ;
+(id)withWeights:(id)arg1 andIntercept:(BOOL)arg2 ;
+(id)solverWithWeights:(id)arg1 ;
+(id)withWeights:(id)arg1 ;
-(id)weights;
-(float)predict:(id)arg1 ;
-(id)initWithSolver:(id)arg1 ;
-(BOOL)classify:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
@end
