/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LAErrorHelper : NSObject
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
+(id)parameterErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 moreInfo:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3 ;
+(id)missingEntitlementError:(id)arg1 ;
+(id)errorNotSupported;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 subcode:(long long)arg3 ;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 ;
+(void)raiseExceptionOnError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)internalErrorWithMessage:(id)arg1 ;
+(id)silentInternalErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 subcode:(long long)arg2 message:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
@end
