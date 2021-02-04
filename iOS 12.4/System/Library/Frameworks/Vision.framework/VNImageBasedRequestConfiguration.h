/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSArray;

@interface VNImageBasedRequestConfiguration : VNRequestConfiguration {

	NSArray* _inputFaceObservations;
	CGRect _regionOfInterest;

}

@property (assign,nonatomic) CGRect regionOfInterest;                    //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (nonatomic,copy) NSArray * inputFaceObservations;              //@synthesize inputFaceObservations=_inputFaceObservations - In the implementation block
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(NSArray *)inputFaceObservations;
-(id)initWithRequestClass:(Class)arg1 ;
-(CGRect)regionOfInterest;
-(void)setRegionOfInterest:(CGRect)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
