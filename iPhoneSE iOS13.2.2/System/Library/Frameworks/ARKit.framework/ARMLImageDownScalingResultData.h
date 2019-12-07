/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARResultData.h>

@class NSArray, ARImageData, NSString;

@interface ARMLImageDownScalingResultData : NSObject <ARResultData> {

	double _timestamp;
	long long _rotationOfResultTensor;
	NSArray* _downScalingResults;
	ARImageData* _originalImageData;

}

@property (nonatomic,readonly) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long rotationOfResultTensor;               //@synthesize rotationOfResultTensor=_rotationOfResultTensor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * downScalingResults;              //@synthesize downScalingResults=_downScalingResults - In the implementation block
@property (nonatomic,readonly) ARImageData * originalImageData;                //@synthesize originalImageData=_originalImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(ARImageData *)originalImageData;
-(id)initWithResultDataArray:(id)arg1 timestamp:(double)arg2 rotationOfResultTensor:(long long)arg3 originalImageData:(id)arg4 ;
-(long long)rotationOfResultTensor;
-(NSArray *)downScalingResults;
@end
