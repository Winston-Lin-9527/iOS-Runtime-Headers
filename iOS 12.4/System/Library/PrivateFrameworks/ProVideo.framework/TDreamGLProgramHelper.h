/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TDreamGLProgramHelper : NSObject {

	NSMutableArray* attributes;
	NSMutableArray* uniforms;
	unsigned program;
	unsigned vertShader;
	unsigned fragShader;
	BOOL _initialized;

}

@property (assign,nonatomic) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
-(BOOL)initialized;
-(void)setInitialized:(BOOL)arg1 ;
-(unsigned)attributeIndex:(id)arg1 ;
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 string:(id)arg3 ;
-(id)logForOpenGLObject:(unsigned)arg1 infoCallback:(/*function pointer*/void*)arg2 logFunc:(/*function pointer*/void*)arg3 ;
-(unsigned)uniformIndex:(id)arg1 ;
-(id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2 ;
-(id)programLog;
-(id)fragmentShaderLog;
-(id)vertexShaderLog;
-(void)dealloc;
-(void)addAttribute:(id)arg1 ;
-(void)use;
-(BOOL)link;
@end
