/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARResultData <ARData>
@optional
-(double)timestamp;
-(CVBufferRef)segmentationBuffer;
-(id)worldTrackingState;
-(/*function pointer*/void**)cameraTransform;
-(/*function pointer*/void**)worldAlignmentTransform;
-(unsigned long long)worldAlignmentModifiers;
-(id)lightEstimate;
-(id)featurePoints;
-(id)anchorsForCameraWithTransform:(/*function pointer*/void*)arg1 referenceOriginTransform:(/*function pointer*/void*)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;

@end
