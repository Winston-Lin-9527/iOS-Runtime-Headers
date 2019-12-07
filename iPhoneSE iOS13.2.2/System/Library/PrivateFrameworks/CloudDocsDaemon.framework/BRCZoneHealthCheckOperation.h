/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKServerChangeToken, NSMutableDictionary, NSMutableArray, NSString;

@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass> {

	CKServerChangeToken* _changeToken;
	NSMutableDictionary* _recordsByID;
	NSMutableArray* _deletedRecordIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2 ;
-(id)initWithSession:(id)arg1 changeToken:(id)arg2 ;
@end
