/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWDeepFusionProcessorInputDelegate.h>

@class BWDeepFusionProcessorControllerConfiguration, NSSet, FigStateMachine, DeepFusionProcessor, DeepFusionPrepareDescriptor, NSMutableArray, BWDeepFusionProcessorRequest, NSString;

@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate> {

	BWDeepFusionProcessorControllerConfiguration* _configuration;
	NSSet* _supportedPortTypes;
	FigStateMachine* _stateMachine;
	DeepFusionProcessor* _deepFusionProcessor;
	DeepFusionPrepareDescriptor* _prepareDescriptor;
	Class _deepFusionOutputClass;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSMutableArray* _requestQueue;
	BWDeepFusionProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(unsigned long long)type;
-(void)_process;
-(id)initWithConfiguration:(id)arg1 ;
-(void)cancelProcessing;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)input:(id)arg1 addType:(unsigned long long)arg2 ;
-(void)addInferencesForInput:(id)arg1 ;
-(int)_loadSetupAndPrepareDeepFusionProcessor;
-(void)_resetProcessor;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(int)_setupProcessor;
@end
