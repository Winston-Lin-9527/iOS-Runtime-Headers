/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationLaunchCompatibilityInfo, XBLaunchStateRequest, NSString;

@interface XBApplicationSnapshotGenerationContext : NSObject <BSDescriptionProviding> {

	XBApplicationLaunchCompatibilityInfo* _applicationCompatibilityInfo;
	XBLaunchStateRequest* _launchRequest;
	double _timeout;

}

@property (nonatomic,readonly) XBApplicationLaunchCompatibilityInfo * applicationCompatibilityInfo;              //@synthesize applicationCompatibilityInfo=_applicationCompatibilityInfo - In the implementation block
@property (nonatomic,copy,readonly) XBLaunchStateRequest * launchRequest;                                        //@synthesize launchRequest=_launchRequest - In the implementation block
@property (nonatomic,readonly) double timeout;                                                                   //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(XBLaunchStateRequest *)launchRequest;
-(XBApplicationLaunchCompatibilityInfo *)applicationCompatibilityInfo;
-(id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 timeout:(double)arg3 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)description;
@end
