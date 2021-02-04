/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, NSString, NSObject, AVVideoComposition;

@interface AVVideoCompositionRenderContextInternal : NSObject {

	NSDictionary* _basisProperties;
	CGSize _size;
	CGAffineTransform _renderTransform;
	float _renderScale;
	SCD_Struct_AV82 _pixelAspectRatio;
	SCD_Struct_AV83 _edgeWidths;
	BOOL _highQualityRendering;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	NSDictionary* _destinationDesiredPixelBufferAttributes;
	NSString* _destinationDesiredPixelBufferYCbCrMatrix;
	NSString* _destinationDesiredPixelBufferColorPrimaries;
	NSString* _destinationDesiredPixelBufferTransferFunction;
	int pixelFormatFamily;
	CFDictionaryRef _pixelAspectRatioDict;
	CFDictionaryRef _cleanApertureDict;
	SCD_Struct_AV39 _destinationPixelBufferDimensions;
	NSObject*<OS_dispatch_queue> _pixelBufferPoolQ;
	CVPixelBufferPoolRef _pixelBufferPool;
	AVVideoComposition* _videoComposition;

}
-(void)_willDeallocOrFinalize;
-(void)finalize;
-(void)dealloc;
@end
