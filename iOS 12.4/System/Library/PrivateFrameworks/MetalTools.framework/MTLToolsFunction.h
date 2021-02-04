/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLFunctionSPI.h>

@class NSString, MTLType, NSArray, MTLToolsPointerArray, NSDictionary;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {

	MTLToolsPointerArray* _functions;
	MTLToolsPointerArray* _indirectArgumentEncoders;
	MTLToolsPointerArray* _argumentEncoders;

}

@property (nonatomic,readonly) MTLToolsPointerArray * indirectArgumentEncoders;              //@synthesize indirectArgumentEncoders=_indirectArgumentEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * argumentEncoders;                      //@synthesize argumentEncoders=_argumentEncoders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long functionType; 
@property (readonly) unsigned long long patchType; 
@property (readonly) long long patchControlPointCount; 
@property (readonly) NSArray * vertexAttributes; 
@property (readonly) NSArray * stageInputAttributes; 
@property (readonly) NSString * name; 
@property (readonly) NSDictionary * functionConstantsDictionary; 
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(long long)patchControlPointCount;
-(NSArray *)stageInputAttributes;
-(NSDictionary *)functionConstantsDictionary;
-(const SCD_Struct_MT7*)bitCodeHash;
-(id)reflectionWithOptions:(unsigned long long)arg1 ;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(id)bitcodeData;
-(NSString *)unpackedFilePath;
-(unsigned long long)renderTargetArrayIndexType;
-(long long)lineNumber;
-(MTLType *)returnType;
-(unsigned long long)functionType;
-(unsigned long long)patchType;
-(void)acceptVisitor:(id)arg1 ;
-(NSArray *)vertexAttributes;
-(NSArray *)arguments;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3 ;
-(MTLToolsPointerArray *)indirectArgumentEncoders;
-(MTLToolsPointerArray *)argumentEncoders;
-(void)dealloc;
-(NSString *)name;
-(NSString *)label;
-(NSString *)filePath;
-(void)setLabel:(NSString *)arg1 ;
@end
