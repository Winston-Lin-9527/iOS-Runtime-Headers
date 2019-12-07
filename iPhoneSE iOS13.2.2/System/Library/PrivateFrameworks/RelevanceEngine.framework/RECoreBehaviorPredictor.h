/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPredictorObserver.h>

@class BMBehaviorRetriever, NSArray, NSMapTable, NSString;

@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver> {

	BMBehaviorRetriever* _retriever;
	NSArray* _rules;
	NSMapTable* _locations;
	unsigned long long _dayValue;
	unsigned long long _hourValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(void)pause;
-(void)resume;
-(void)update;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(id)_bmtypeForShortcutType:(unsigned long long)arg1 filterLevel:(unsigned long long)arg2 ;
-(id)_retrieveFeatureValueForItemType:(id)arg1 shortcutIdentifier:(NSString*)arg2 antecedentType:(id)arg3 antecedentValue:(id)arg4 ;
@end
