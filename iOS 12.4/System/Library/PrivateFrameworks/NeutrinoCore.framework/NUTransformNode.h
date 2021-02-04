/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderNode.h>

@interface NUTransformNode : NURenderNode
+(id)transformNodeWithInput:(id)arg1 transform:(id)arg2 error:(out id*)arg3 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)isGeometryNode;
-(id)_evaluateGeometrySpaceMap:(out id*)arg1 ;
-(id)_transformWithError:(out id*)arg1 ;
-(id)descriptionSubClassHook;
@end
