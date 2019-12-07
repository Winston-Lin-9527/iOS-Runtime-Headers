/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EDPersistenceDatabaseConnection.h>

@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {

	void* _ICUSearchContext;
	_MFSearchMatcherContext* _CPSearchContext;

}
-(void)dealloc;
-(void)handleSQLResult:(int)arg1 message:(id)arg2 ;
-(int)configureSQLConnection;
-(void)_handleCorruptDatabase;
-(void)_handleFullDatabase;
-(void)_handleProtectedDataIOError;
-(void)_handleInvalidDatabaseIOError;
-(void)_handleDetachedDatabaseIOError;
-(void)_handleIOError;
-(void)_handleBusyError;
-(void)_logFileSystemStats;
-(long long)transactionTypeForWriting;
@end
