/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATSessionMessage.h>

@class NSUUID, NSDictionary, NSArray;

@interface CATSessionMessageResumed : CATSessionMessage {

	NSUUID* _sessionUUID;
	NSDictionary* _serverUserInfo;
	NSArray* _pendingRemoteTaskUUIDs;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                          //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * serverUserInfo;                 //@synthesize serverUserInfo=_serverUserInfo - In the implementation block
@property (nonatomic,copy) NSArray * pendingRemoteTaskUUIDs;              //@synthesize pendingRemoteTaskUUIDs=_pendingRemoteTaskUUIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSessionUUID:(id)arg1 ;
-(NSArray *)pendingRemoteTaskUUIDs;
-(NSDictionary *)serverUserInfo;
-(void)setServerUserInfo:(NSDictionary *)arg1 ;
-(void)setPendingRemoteTaskUUIDs:(NSArray *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
