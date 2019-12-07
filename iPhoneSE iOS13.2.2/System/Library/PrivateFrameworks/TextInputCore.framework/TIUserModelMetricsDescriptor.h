/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TIUserModelMetricsDescriptor : NSObject {

	NSString* _name;
	NSArray* _counterNames;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * counterNames;              //@synthesize counterNames=_counterNames - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithMetricName:(id)arg1 counterNames:(id)arg2 ;
-(NSArray *)counterNames;
@end
