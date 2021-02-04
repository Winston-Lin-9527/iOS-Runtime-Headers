/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BLTPingSubscribing.h>

@protocol BLTPingService;
@class NSMutableDictionary, NSString;

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing> {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _pingHandlers;
	id<BLTPingService> _service;

}

@property (nonatomic,retain) NSMutableDictionary * pingHandlers;              //@synthesize pingHandlers=_pingHandlers - In the implementation block
@property (nonatomic,retain) id<BLTPingService> service;                      //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BLTPingService>)service;
-(void)setService:(id<BLTPingService>)arg1 ;
-(id)sectionIDs;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(id)subscriptionInfos;
-(void)pingSubscriberDidLoad;
-(id)sectionIDsForBulletins;
-(void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(BOOL)arg4 ;
-(void)subscribeToSectionID:(id)arg1 withPingHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withPingAckHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withPingAckForwardHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinAckHandler:(/*^block*/id)arg2 ;
-(void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3 ;
-(NSMutableDictionary *)pingHandlers;
-(void)setPingHandlers:(NSMutableDictionary *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinAckForwardHandler:(/*^block*/id)arg2 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
@end
