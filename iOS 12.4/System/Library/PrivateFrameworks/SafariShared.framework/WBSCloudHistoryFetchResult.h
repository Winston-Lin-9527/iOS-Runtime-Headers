/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSData, NSArray, NSDictionary;

@interface WBSCloudHistoryFetchResult : NSObject {

	NSMutableArray* _mutableCloudHistoryVisits;
	NSMutableArray* _mutableHistoryTombstones;
	NSMutableDictionary* _mutableClientVersions;
	NSData* _serverChangeTokenData;

}

@property (nonatomic,readonly) NSArray * cloudHistoryVisits; 
@property (nonatomic,readonly) NSArray * historyTombstones; 
@property (nonatomic,readonly) NSDictionary * clientVersions; 
@property (nonatomic,readonly) NSData * serverChangeTokenData;              //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
-(NSArray *)cloudHistoryVisits;
-(NSArray *)historyTombstones;
-(void)_addCloudHistoryVisit:(id)arg1 ;
-(NSDictionary *)clientVersions;
-(void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2 ;
-(void)_addHistoryTombstone:(id)arg1 ;
-(void)_setServerChangeTokenData:(id)arg1 ;
-(NSData *)serverChangeTokenData;
-(id)init;
-(id)description;
@end
