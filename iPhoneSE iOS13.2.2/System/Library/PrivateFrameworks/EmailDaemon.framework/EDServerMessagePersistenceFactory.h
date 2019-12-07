/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabase, EDGmailLabelPersistence;

@interface EDServerMessagePersistenceFactory : NSObject {

	EDPersistenceDatabase* _database;
	EDGmailLabelPersistence* _gmailLabelPersistence;

}

@property (nonatomic,readonly) EDPersistenceDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDGmailLabelPersistence * gmailLabelPersistence;              //@synthesize gmailLabelPersistence=_gmailLabelPersistence - In the implementation block
-(id)init;
-(EDPersistenceDatabase *)database;
-(EDGmailLabelPersistence *)gmailLabelPersistence;
-(id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 ;
-(id)serverMessagePersistenceForMailboxURL:(id)arg1 ;
@end
