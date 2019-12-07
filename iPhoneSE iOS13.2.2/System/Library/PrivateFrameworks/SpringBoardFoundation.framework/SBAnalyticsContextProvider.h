/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventContextProviding.h>

@class SBSAnalyticsState, SBFAnalyticsBackend, NSString;

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding> {

	SBSAnalyticsState* _eventPayload;
	SBFAnalyticsBackend* _backend;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSAnalyticsState * eventPayload; 
-(NSString *)description;
-(SBSAnalyticsState *)eventPayload;
-(void)stateForQueryName:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEventPayload:(id)arg1 backend:(id)arg2 ;
@end
