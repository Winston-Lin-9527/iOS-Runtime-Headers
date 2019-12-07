/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <TrialServer/TRITreatmentBaseTask.h>

@interface TRIFetchTreatmentTask : TRITreatmentBaseTask
+(id)taskWithExperimentId:(NSString*)arg1 treatmentId:(NSString*)arg2 ;
-(id)dependencies;
-(int)runTask;
-(int)processTreatment:(id)arg1 ;
@end
