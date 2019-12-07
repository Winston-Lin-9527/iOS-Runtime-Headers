/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface ATXPredictionSetReader : NSObject {

	NSData* _data;
	Class _predictedItemClass;
	const char* _perPredictionDataStart;
	int _predictionCount;

}
+(id)bundleIdReader:(id)arg1 ;
+(id)actionReader:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 predictedItemClass:(Class)arg2 ;
-(id)_scoredPredictionFromData:(id)arg1 score:(float)arg2 ;
-(id)readScoredPredictionsWithLimit:(int)arg1 ;
-(id)readScoredPredictionsWithLimit:(int)arg1 filterPredicate:(id)arg2 ;
@end
