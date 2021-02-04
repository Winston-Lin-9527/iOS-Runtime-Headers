/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@class NSMutableDictionary;

@interface MFError : NSError {

	NSMutableDictionary* _moreUserInfo;

}
+(id)errorWithException:(id)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 ;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setShortDescription:(id)arg1 ;
-(id)mf_moreInfo;
-(void)setMoreInfo:(id)arg1 ;
-(void)useGenericDescription:(id)arg1 ;
-(id)mf_shortDescription;
-(void)dealloc;
-(id)userInfo;
-(id)localizedDescription;
-(id)recoveryAttempter;
@end
