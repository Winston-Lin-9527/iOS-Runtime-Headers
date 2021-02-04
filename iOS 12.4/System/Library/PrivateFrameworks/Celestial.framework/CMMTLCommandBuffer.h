/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/MTLCommandBufferSPI.h>

@protocol MTLCommandBuffer;
@class NSDictionary, NSMutableDictionary, NSMutableString, CMMTLCommandQueue, NSString, NSError;

@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI> {

	NSMutableString* _cmLabel;
	CMMTLCommandQueue* _cmCommandQueue;
	id<MTLCommandBuffer> _commandBuffer;
	BOOL _unretained;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
-(void)waitUntilCompleted;
-(id)initWithCMMTLCommandQueue:(id)arg1 unretained:(BOOL)arg2 ;
-(void)waitUntilScheduled;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(id)computeCommandEncoder;
-(void)commit;
-(void)forwardInvocation:(id)arg1 ;
@end
