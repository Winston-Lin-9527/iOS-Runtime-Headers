/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(void)fullyPopulateConfigurationOptions:(id)arg1 ;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)_analyzePixelBuffer:(CVBufferRef)arg1 sceneprintOutputBuffer:(SCD_Struct_VN35*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)_analyzeRegionOfInterest:(CGRect)arg1 sceneprintOutputBuffer:(SCD_Struct_VN35*)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id*)arg5 ;
-(id)_observationsForSceneprintOutput:(const SCD_Struct_VN35*)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
@end
