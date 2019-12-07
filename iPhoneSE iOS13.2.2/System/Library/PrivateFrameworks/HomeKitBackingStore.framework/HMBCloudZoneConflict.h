/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class CKRecord;

@interface HMBCloudZoneConflict : HMFObject {

	CKRecord* _client;
	CKRecord* _server;
	CKRecord* _ancestor;

}

@property (nonatomic,readonly) CKRecord * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) CKRecord * server;                //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) CKRecord * ancestor;              //@synthesize ancestor=_ancestor - In the implementation block
-(CKRecord *)client;
-(CKRecord *)server;
-(id)initWithError:(id)arg1 ;
-(id)initWithClientRecord:(id)arg1 serverRecord:(id)arg2 ancestorRecord:(id)arg3 ;
-(CKRecord *)ancestor;
@end
