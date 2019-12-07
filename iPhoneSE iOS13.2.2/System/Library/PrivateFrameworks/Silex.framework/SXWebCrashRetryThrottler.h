/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentProcessTerminationPolicyDecider.h>

@class NSString;

@interface SXWebCrashRetryThrottler : NSObject <SXWebContentProcessTerminationPolicyDecider> {

	BOOL _crashed;
	unsigned long long retryPolicy;

}

@property (assign,nonatomic) BOOL crashed;                                  //@synthesize crashed=_crashed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long retryPolicy; 
-(BOOL)shouldReloadAfterWebProcessCrash;
-(unsigned long long)retryPolicy;
-(BOOL)crashed;
-(void)setCrashed:(BOOL)arg1 ;
@end
