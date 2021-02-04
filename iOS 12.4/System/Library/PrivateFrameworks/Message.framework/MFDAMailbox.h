/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid {

	NSString* _folderID;

}

@property (copy) NSString * folderID; 
-(id)_privacySafeDescription;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 account:(id)arg3 folderID:(id)arg4 ;
-(void)setFolderID:(NSString *)arg1 ;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)_folderID;
-(id)URLStringWithAccount:(id)arg1 ;
-(NSString *)folderID;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(id)displayName;
@end
