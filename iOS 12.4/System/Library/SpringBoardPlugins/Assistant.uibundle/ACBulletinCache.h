/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACBulletinCacheNode;

@interface ACBulletinCache : NSObject {

	unsigned long long _count;
	ACBulletinCacheNode* _oldestNode;
	ACBulletinCacheNode* _newestNode;

}
-(BOOL)_isFeedRelevant:(unsigned long long)arg1 ;
-(BOOL)_isBulletinFromRequiredDomain:(id)arg1 ;
-(id)_findNodeForBulletinID:(id)arg1 ;
-(BOOL)removeBulletinForID:(id)arg1 ;
-(void)_purgeOldestNodes;
-(void)_deleteNode:(id)arg1 ;
-(void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2 ;
-(id)allBulletins;
-(id)cachedBulletinForID:(id)arg1 ;
-(id)init;
@end
