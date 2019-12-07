/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface EMListUnsubscribeCommandMessageHeaders : NSObject <NSSecureCoding> {

	NSString* _firstRecipient;
	NSString* _subject;
	NSString* _firstSenderAddress;
	NSString* _listID;

}

@property (nonatomic,readonly) NSString * firstRecipient;                  //@synthesize firstRecipient=_firstRecipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * firstSenderAddress;              //@synthesize firstSenderAddress=_firstSenderAddress - In the implementation block
@property (nonatomic,readonly) NSString * listID;                          //@synthesize listID=_listID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subject;
-(NSString *)firstSenderAddress;
-(NSString *)listID;
-(NSString *)firstRecipient;
-(id)initWithHeaders:(id)arg1 ;
@end
