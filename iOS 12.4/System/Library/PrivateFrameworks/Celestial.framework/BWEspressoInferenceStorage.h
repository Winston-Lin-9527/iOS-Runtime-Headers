/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceProviderStorage.h>

@class NSDictionary, NSMapTable, NSMutableSet;

@interface BWEspressoInferenceStorage : BWInferenceProviderStorage {

	NSDictionary* _bindingNameByRequirement;
	NSMapTable* _tensorByRequirement;
	NSMutableSet* _requirementsUsingTensors;
	NSMutableSet* _requirementsUsingPixelBuffers;

}
+(void)initialize;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(SCD_Struct_BW39*)tensorForRequirement:(id)arg1 ;
-(id)initWithBindingNameByRequirement:(id)arg1 requirementsNeedingPixelBuffers:(id)arg2 requirementsNeedingPixelBufferPools:(id)arg3 requirementsNeedingTensors:(id)arg4 ;
-(id)bindingNameForRequirement:(id)arg1 ;
-(void)addTensorInUseRequirement:(id)arg1 ;
-(void)addPixelBufferInUseRequirement:(id)arg1 ;
-(void)dealloc;
-(void)clear;
@end
