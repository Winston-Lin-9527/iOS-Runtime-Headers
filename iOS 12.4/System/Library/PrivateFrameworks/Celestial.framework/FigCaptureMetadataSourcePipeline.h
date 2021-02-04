/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCapturePipeline.h>

@class NSString, BWNode, BWSynchronizerNode, BWNodeOutput;

@interface FigCaptureMetadataSourcePipeline : FigCapturePipeline {

	NSString* _sourceID;
	BWNode* _sourceNode;
	BWSynchronizerNode* _synchronizerNode;
	OpaqueCMClockRef _masterClock;

}

@property (assign,nonatomic) OpaqueCMClockRef masterClock;                                        //@synthesize masterClock=_masterClock - In the implementation block
@property (nonatomic,readonly) NSString * sourceID;                                               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatDescription; 
@property (nonatomic,readonly) BWNodeOutput * output; 
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 errorOut:(int*)arg3 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(int)_buildMetadataSourcePipeline:(id)arg1 graph:(id)arg2 ;
-(OpaqueCMClockRef)masterClock;
-(BWNodeOutput *)output;
-(NSString *)sourceID;
-(void)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end
