/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>

@class NSString;

@interface AMSAnisette : NSObject <AMSBagConsumer_Project>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(BOOL)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5 ;
+(id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 ;
+(void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
+(unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2 ;
+(BOOL)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(BOOL)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(BOOL)_eraseProvisioningForType:(long long)arg1 account:(id)arg2 ;
+(BOOL)_shouldRetryAfterError:(id)arg1 ;
+(BOOL)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
+(id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
@end
