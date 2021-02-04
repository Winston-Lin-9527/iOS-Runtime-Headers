/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <MPSRayIntersector/MPSAccelerationStructure.h>

@protocol MTLBuffer, OS_dispatch_semaphore;
@class NSObject, NSArray;

@interface MPSInstanceAccelerationStructure : MPSAccelerationStructure {

	MPSBufferRange* _innerNodeBufferRange;
	MPSBufferRange* _leafNodeBufferRange;
	MPSBufferRange* _pageTable0BufferRange;
	MPSBufferRange* _pageTable1BufferRange;
	MPSBufferRange* _pageBufferRange;
	id<MTLBuffer> _instanceOffsetBuffer;
	id<MTLBuffer> _inverseTransformBuffer;
	unsigned long long _instanceOffsetBufferIdx;
	unsigned long long _instanceOffsetBufferOffset;
	NSObject*<OS_dispatch_semaphore> _instanceOffsetSem;
	BOOL _needFlushInstanceOffsets;
	unsigned long long _transformType;
	int _rootNodeType;
	unsigned long long _leafNodeCount;
	unsigned long long _innerNodeCount;
	NSArray* _accelerationStructures;
	id<MTLBuffer> _instanceBuffer;
	unsigned long long _instanceBufferOffset;
	id<MTLBuffer> _transformBuffer;
	unsigned long long _transformBufferOffset;
	id<MTLBuffer> _maskBuffer;
	unsigned long long _maskBufferOffset;
	unsigned long long _instanceCount;

}

@property (nonatomic,retain) NSArray * accelerationStructures;                      //@synthesize accelerationStructures=_accelerationStructures - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> instanceBuffer;                          //@synthesize instanceBuffer=_instanceBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long instanceBufferOffset;               //@synthesize instanceBufferOffset=_instanceBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> transformBuffer;                         //@synthesize transformBuffer=_transformBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long transformBufferOffset;              //@synthesize transformBufferOffset=_transformBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long transformType; 
@property (nonatomic,retain) id<MTLBuffer> maskBuffer;                              //@synthesize maskBuffer=_maskBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long maskBufferOffset;                   //@synthesize maskBufferOffset=_maskBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                      //@synthesize instanceCount=_instanceCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setTransformType:(unsigned long long)arg1 ;
-(unsigned long long)transformType;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)instanceCount;
-(void)rebuild;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(void)sharedInitInstanceAccelerationStructure;
-(void)decodeInstanceAccelerationStructureWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 group:(id)arg2 ;
-(id<MTLBuffer>)maskBuffer;
-(void)flushInstanceOffsetsWithCommandBuffer:(id)arg1 ;
-(MPSBufferRange*)innerNodeBufferRange;
-(MPSBufferRange*)leafNodeBufferRange;
-(MPSBufferRange*)pageTable0BufferRange;
-(MPSBufferRange*)pageTable1BufferRange;
-(MPSBufferRange*)pageBufferRange;
-(unsigned long long)maskBufferOffset;
-(int)rootNodeType;
-(void)bindResourcesWithEncoder:(id)arg1 commandBuffer:(id)arg2 retainedResources:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 group:(id)arg2 ;
-(id)copyInstanceAccelerationStructureWithZone:(NSZone*)arg1 device:(id)arg2 group:(id)arg3 ;
-(void)setInnerNodeBufferRange:(MPSBufferRange*)arg1 ;
-(void)setLeafNodeBufferRange:(MPSBufferRange*)arg1 ;
-(id)instanceOffsetBuffer;
-(void)setInstanceOffsetBuffer:(id)arg1 ;
-(void)setRootNodeType:(int)arg1 ;
-(unsigned long long)leafNodeCount;
-(void)setLeafNodeCount:(unsigned long long)arg1 ;
-(unsigned long long)innerNodeCount;
-(void)setInnerNodeCount:(unsigned long long)arg1 ;
-(void)rebuildWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeRefitToCommandBuffer:(id)arg1 ;
-(NSArray *)accelerationStructures;
-(void)setAccelerationStructures:(NSArray *)arg1 ;
-(void)setInstanceBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)instanceBufferOffset;
-(void)setInstanceBufferOffset:(unsigned long long)arg1 ;
-(id<MTLBuffer>)transformBuffer;
-(void)setTransformBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)transformBufferOffset;
-(void)setTransformBufferOffset:(unsigned long long)arg1 ;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(id<MTLBuffer>)instanceBuffer;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(void)validate;
@end
