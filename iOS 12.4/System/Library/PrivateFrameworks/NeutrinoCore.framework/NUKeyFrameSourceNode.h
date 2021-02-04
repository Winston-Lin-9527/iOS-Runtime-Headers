/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NUVideoSourceNode;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	NUVideoSourceNode* _videoSourceNode;
	SCD_Struct_NU7 _frameTime;
	CVBufferRef _pixelBuffer;

}
-(id)initWithVideoSource:(id)arg1 time:(SCD_Struct_NU7)arg2 settings:(id)arg3 orientation:(long long)arg4 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 orientation:(long long)arg2 ;
-(CVBufferRef)_pixelBuffer:(out id*)arg1 ;
-(void)dealloc;
-(SCD_Struct_NU5)pixelSize;
@end
