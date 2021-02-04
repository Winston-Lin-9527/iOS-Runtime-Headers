/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationResponse.h>

@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse {

	NSString* _userText;

}

@property (nonatomic,copy,readonly) NSString * userText;              //@synthesize userText=_userText - In the implementation block
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4 ;
-(id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)userText;
@end
