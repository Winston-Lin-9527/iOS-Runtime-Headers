/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, ML3DatabaseConnection;

@interface ML3ContainerItemDiffOperation : NSOperation {

	long long _containerPersistentID;
	NSArray* _updatedItemsPersistentIDs;
	ML3DatabaseConnection* _connection;
	NSArray* _containerItemsToUpdate;
	NSArray* _containerItemsToDelete;

}

@property (nonatomic,retain) NSArray * containerItemsToUpdate;              //@synthesize containerItemsToUpdate=_containerItemsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * containerItemsToDelete;              //@synthesize containerItemsToDelete=_containerItemsToDelete - In the implementation block
-(void)main;
-(id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3 ;
-(NSArray *)containerItemsToDelete;
-(NSArray *)containerItemsToUpdate;
-(void)setContainerItemsToUpdate:(NSArray *)arg1 ;
-(void)setContainerItemsToDelete:(NSArray *)arg1 ;
@end
