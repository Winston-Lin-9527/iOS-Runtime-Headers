/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSegment : NSObject {

	float _sumOfScore;
	float _curationScore;
	unsigned long long _numOfFrames;
	unsigned long long _numOfValidFrames;
	SCD_Struct_VC28 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_VC28 timeRange;                          //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;                   //@synthesize numOfFrames=_numOfFrames - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfValidFrames;              //@synthesize numOfValidFrames=_numOfValidFrames - In the implementation block
@property (assign,nonatomic) float curationScore;                                //@synthesize curationScore=_curationScore - In the implementation block
-(id)init;
-(float)score;
-(void)setTimeRange:(SCD_Struct_VC28)arg1 ;
-(SCD_Struct_VC28)timeRange;
-(float)curationScore;
-(void)setCurationScore:(float)arg1 ;
-(void)updateDuration:(SCD_Struct_VC6)arg1 ;
-(void)mergeSegment:(id)arg1 ;
-(unsigned long long)numOfFrames;
-(void)copyFrom:(id)arg1 ;
-(unsigned long long)numOfValidFrames;
-(float)sumOfScore;
-(id)initWithTimestamp:(SCD_Struct_VC6)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)updateWithFirstFrame:(SCD_Struct_VC28)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)updateSegment:(SCD_Struct_VC28)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)trimSegment:(SCD_Struct_VC6)arg1 fromStart:(BOOL)arg2 ;
-(BOOL)isContentTooShort;
@end
