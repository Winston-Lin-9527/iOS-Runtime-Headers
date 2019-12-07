/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMHTTPHandler.h>

@class NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {

	NSString* _policyVersion;
	NSDate* _startInvocationDate;
	NSString* _realm;

}

@property (nonatomic,readonly) NSString * policyVersion; 
@property (nonatomic,readonly) NSString * realm;                      //@synthesize realm=_realm - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(NSString *)realm;
-(id)requestBody;
-(NSString *)policyVersion;
-(BOOL)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2 ;
-(BOOL)shouldValidateTGTs;
@end
