/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBSServiceFacilityClient, NSString;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable> {

	SBSServiceFacilityClient* _client;

}

@property (nonatomic,readonly) SBSServiceFacilityClient * client; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)serviceFacilityClientClass;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(SBSServiceFacilityClient *)client;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end
