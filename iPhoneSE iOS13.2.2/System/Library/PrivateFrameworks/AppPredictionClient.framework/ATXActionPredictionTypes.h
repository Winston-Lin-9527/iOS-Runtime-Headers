/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXActionPredictionTypes : NSObject
+(id)engagementTypeToString:(unsigned long long)arg1 ;
+(id)actionExperienceToString:(unsigned long long)arg1 ;
+(id)actionTypeToString:(unsigned long long)arg1 ;
+(id)actionFeedbackStageToString:(unsigned long long)arg1 ;
+(id)actionFeedbackTypeToString:(unsigned long long)arg1 ;
+(unsigned long long)stringToActionExperience:(id)arg1 found:(BOOL*)arg2 ;
+(unsigned long long)stringToActionFeedbackStage:(id)arg1 found:(BOOL*)arg2 ;
+(id)inverseActionFeedbackTypeMapping;
+(id)actionTypeToPETString:(unsigned long long)arg1 ;
@end
