/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject {

	unsigned short _occurrencesInSource;
	PPScoredItem* _scoredTopic;

}

@property (nonatomic,readonly) PPScoredItem * scoredTopic;                      //@synthesize scoredTopic=_scoredTopic - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
-(id)init;
-(unsigned short)occurrencesInSource;
-(id)initWithScoredTopic:(PPScoredItem*)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(PPScoredItem *)scoredTopic;
@end
