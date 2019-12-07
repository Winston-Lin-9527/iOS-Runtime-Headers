/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMLMetricsProvider.h>

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {

	NSMutableDictionary* metricsIndex;
	NSMutableSet* metricsSet;

}
-(id)init;
-(id)name;
-(void)reset;
-(BOOL)addMetrics:(id)arg1 ;
-(void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3 ;
-(id)getMetricsByName:(id)arg1 ;
@end
