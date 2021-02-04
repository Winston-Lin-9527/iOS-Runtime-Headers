/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableDictionary;

@interface MFMailMessageStoreSearchResult : NSObject {

	NSDate* _continueOffset;
	NSMutableDictionary* _mailboxToRemoteIdDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * mailboxToRemoteIdDictionary;              //@synthesize mailboxToRemoteIdDictionary=_mailboxToRemoteIdDictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,retain) NSDate * continueOffset;                                        //@synthesize continueOffset=_continueOffset - In the implementation block
-(void)setContinueOffset:(NSDate *)arg1 ;
-(void)addRemoteID:(id)arg1 mailbox:(id)arg2 ;
-(NSMutableDictionary *)mailboxToRemoteIdDictionary;
-(void)enumerateMailboxesAndRemoteIDsUsingBlock:(/*^block*/id)arg1 ;
-(NSDate *)continueOffset;
-(void)setMailboxToRemoteIdDictionary:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
@end
