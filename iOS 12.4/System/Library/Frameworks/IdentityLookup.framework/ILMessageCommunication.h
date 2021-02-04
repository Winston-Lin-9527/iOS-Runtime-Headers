/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IdentityLookup/ILCommunication.h>

@class NSString;

@interface ILMessageCommunication : ILCommunication {

	NSString* _messageBody;

}

@property (nonatomic,copy,readonly) NSString * messageBody;              //@synthesize messageBody=_messageBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)messageBody;
-(id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3 ;
-(BOOL)isEqualToMessageCommunication:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
