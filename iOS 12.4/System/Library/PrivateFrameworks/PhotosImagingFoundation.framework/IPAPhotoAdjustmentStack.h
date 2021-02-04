/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAAdjustmentStack.h>

@class IPAPhotoAdjustmentPipeline;

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack {

	long long _orientation;
	IPAPhotoAdjustmentPipeline* _pipeline;
	PFIntSize_st _inputSize;

}

@property (assign,nonatomic) PFIntSize_st inputSize;                             //@synthesize inputSize=_inputSize - In the implementation block
@property (assign,nonatomic) long long orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) IPAPhotoAdjustmentPipeline * pipeline;              //@synthesize pipeline=_pipeline - In the implementation block
-(id)maskUUIDs;
-(void)setInputSize:(PFIntSize_st)arg1 ;
-(PFIntSize_st)inputSize;
-(IPAPhotoAdjustmentPipeline *)pipeline;
-(void)setPipeline:(IPAPhotoAdjustmentPipeline *)arg1 ;
-(id)minimumVersionForFormat:(id)arg1 ;
-(id)_debugDescriptionSuffix;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
@end
