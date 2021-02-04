/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FAAcceptFamilyInviteRequest : AAFamilyRequest {

	NSString* _inviteCode;

}

@property (nonatomic,copy) NSString * inviteCode;              //@synthesize inviteCode=_inviteCode - In the implementation block
-(id)urlRequest;
-(id)urlString;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(BOOL)isUserInitiated;
@end
