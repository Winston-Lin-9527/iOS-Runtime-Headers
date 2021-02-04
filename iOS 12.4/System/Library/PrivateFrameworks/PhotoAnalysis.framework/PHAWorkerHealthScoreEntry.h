/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject {

	float _score;
	NSDate* _dateRecorded;

}

@property (nonatomic,readonly) float score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateRecorded;              //@synthesize dateRecorded=_dateRecorded - In the implementation block
-(float)score;
-(id)initWithScore:(float)arg1 ;
-(NSDate *)dateRecorded;
@end
