/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetalTools/MetalTools-Structs.h>
@class NSString;

@interface MTLCountersTraceCommandEncoder : NSObject {

	BinaryBuffer* _stream;
	NSString* _label;
	unsigned long long _flags;
	NSRange _segment;

}

@property (nonatomic,readonly) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSRange segment;                       //@synthesize segment=_segment - In the implementation block
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)insertDebugSignpost:(id)arg1 ;
-(unsigned long long)flags;
-(id)init:(BinaryBuffer*)arg1 flags:(unsigned long long)arg2 ;
-(void)endEncoding;
-(void)dealloc;
-(NSString *)label;
-(NSRange)segment;
-(void)setLabel:(NSString *)arg1 ;
@end
