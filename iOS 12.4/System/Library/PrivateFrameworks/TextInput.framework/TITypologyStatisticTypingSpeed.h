/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatisticComposite.h>

@class TITypologyStatisticTimeElapsed, TITypologyStatisticBasicCounts;

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite {

	TITypologyStatisticTimeElapsed* _timeElapsed;
	TITypologyStatisticBasicCounts* _basicCounts;

}

@property (nonatomic,readonly) TITypologyStatisticTimeElapsed * timeElapsed;              //@synthesize timeElapsed=_timeElapsed - In the implementation block
@property (nonatomic,readonly) TITypologyStatisticBasicCounts * basicCounts;              //@synthesize basicCounts=_basicCounts - In the implementation block
@property (nonatomic,readonly) float typingSpeed; 
+(id)statisticCompositeWithStatistics:(id)arg1 ;
+(id)statistic;
-(id)initWithTimeElapsed:(id)arg1 basicCounts:(id)arg2 ;
-(float)typingSpeed;
-(TITypologyStatisticTimeElapsed *)timeElapsed;
-(TITypologyStatisticBasicCounts *)basicCounts;
-(id)aggregateReport;
@end
