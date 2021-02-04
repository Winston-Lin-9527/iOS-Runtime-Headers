/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCPCNNBlock, VCPCNNMetalContext, VCPCNNData;

@interface VCPCNNModel : NSObject {

	VCPCNNBlock* _blocks[200];
	short _quantFactor;
	BOOL _useGPU;
	VCPCNNMetalContext* _context;
	VCPCNNData* _output;

}

@property (readonly) VCPCNNData * output;              //@synthesize output=_output - In the implementation block
-(VCPCNNData *)output;
-(id)initWithParameters:(short)arg1 useGPU:(BOOL)arg2 ;
-(id)getGPUContext;
-(int)initializeNetwork:(id)arg1 paramFileUrl:(id)arg2 ;
-(int)forward:(id)arg1 ;
-(int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)add:(id)arg1 ;
-(int)size;
-(id)init;
@end
