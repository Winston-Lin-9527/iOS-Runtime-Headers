/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@class NSNumber;

@interface VNCreateImageprintRequest : VNImageBasedRequest

@property (nonatomic,retain) NSNumber * timeStamp; 
+(Class)configurationClass;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(NSNumber *)timeStamp;
-(void)setTimeStamp:(NSNumber *)arg1 ;
@end
