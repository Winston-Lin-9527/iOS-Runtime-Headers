/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_TaskMetrics, NSArray, NSDateInterval;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding> {

	__CFN_TaskMetrics* __metrics;

}

@property (nonatomic,readonly) __CFN_TaskMetrics * _metrics;              //@synthesize _metrics=__metrics - In the implementation block
@property (copy,readonly) NSArray * transactionMetrics; 
@property (copy,readonly) NSDateInterval * taskInterval; 
@property (readonly) unsigned long long redirectCount; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)_geo_clientMetrics;
-(id)_geo_remoteAddressAndPort;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(__CFN_TaskMetrics *)_metrics;
-(id)initWithMetrics:(id)arg1 ;
-(NSArray *)transactionMetrics;
-(NSDateInterval *)taskInterval;
-(unsigned long long)redirectCount;
@end
