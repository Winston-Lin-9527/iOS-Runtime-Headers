/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MailAccount.h>

@class NSURL, MFIMAPConnection, NSMutableDictionary, DeliveryAccount;

@interface MFFakeMailAccount : MailAccount {

	NSURL* _URL;
	MFIMAPConnection* _cachedConnection;
	NSMutableDictionary* _mailboxes;
	BOOL _managed;
	DeliveryAccount* _deliveryAccount;

}

@property (nonatomic,retain) DeliveryAccount * deliveryAccount;              //@synthesize deliveryAccount=_deliveryAccount - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                  //@synthesize managed=_managed - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isActive;
-(id)uniqueID;
-(id)displayName;
-(id)hostname;
-(id)username;
-(int)cachePolicy;
-(BOOL)isManaged;
-(void)setManaged:(BOOL)arg1 ;
-(DeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(DeliveryAccount *)arg1 ;
-(id)_URLScheme;
-(Class)storeClass;
-(BOOL)supportsRemoteAppend;
-(BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2 ;
-(BOOL)_shouldConfigureMailboxCache;
-(id)_mailboxPathPrefix;
-(BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3 ;
-(void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3 ;
-(id)powerAssertionIdentifierWithPrefix:(id)arg1 ;
-(BOOL)supportsFastRemoteBodySearch;
-(id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2 ;
-(void)setUnreadCount:(unsigned)arg1 forMailbox:(id)arg2 ;
-(id)_nameForMailboxUid:(id)arg1 ;
-(unsigned)minID;
-(void)setCachedConnection:(id)arg1 ;
-(id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 ;
-(id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned)arg2 connectTime:(double)arg3 ;
@end
