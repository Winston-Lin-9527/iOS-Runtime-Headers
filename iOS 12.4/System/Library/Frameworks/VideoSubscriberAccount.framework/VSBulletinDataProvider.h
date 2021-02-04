/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSBulletinServiceProtocol.h>
#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class BBDataProviderConnection, BBDataProviderProxy, NSObject, NSMutableDictionary, NSString;

@interface VSBulletinDataProvider : NSObject <VSBulletinServiceProtocol, BBRemoteDataProvider> {

	BBDataProviderConnection* _dataProviderConnection;
	BBDataProviderProxy* _dataProviderProxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _bulletins;
	NSString* _authenticationBulletinRecordID;

}

@property (nonatomic,retain) BBDataProviderConnection * dataProviderConnection;              //@synthesize dataProviderConnection=_dataProviderConnection - In the implementation block
@property (nonatomic,retain) BBDataProviderProxy * dataProviderProxy;                        //@synthesize dataProviderProxy=_dataProviderProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletins;                                //@synthesize bulletins=_bulletins - In the implementation block
@property (nonatomic,copy) NSString * authenticationBulletinRecordID;                        //@synthesize authenticationBulletinRecordID=_authenticationBulletinRecordID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataProviderConnection:(BBDataProviderConnection *)arg1 ;
-(BBDataProviderConnection *)dataProviderConnection;
-(id)sectionIdentifier;
-(void)postAuthenticationBulletinWithAppStoreRoomURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BBDataProviderProxy *)dataProviderProxy;
-(void)setDataProviderProxy:(BBDataProviderProxy *)arg1 ;
-(void)_removeBulletinWithRecordID:(id)arg1 ;
-(NSString *)authenticationBulletinRecordID;
-(void)setAuthenticationBulletinRecordID:(NSString *)arg1 ;
-(id)_bulletinRequestWithMessage:(id)arg1 actionURL:(id)arg2 ;
-(void)_addBulletinRequest:(id)arg1 ;
-(void)_prepareDataProviderProxyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_removeBulletin:(id)arg1 ;
-(NSMutableDictionary *)bulletins;
-(void)setBulletins:(NSMutableDictionary *)arg1 ;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
