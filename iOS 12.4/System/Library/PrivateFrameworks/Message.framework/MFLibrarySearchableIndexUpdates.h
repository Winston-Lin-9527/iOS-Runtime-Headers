/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFLibrarySearchableIndexUpdates : NSObject {

	NSArray* _itemsRequiringIndexing;
	NSArray* _removedIdentifiers;
	NSArray* _removedDomainIdentifiers;

}

@property (nonatomic,copy) NSArray * itemsRequiringIndexing;                //@synthesize itemsRequiringIndexing=_itemsRequiringIndexing - In the implementation block
@property (nonatomic,copy) NSArray * removedIdentifiers;                    //@synthesize removedIdentifiers=_removedIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * removedDomainIdentifiers;              //@synthesize removedDomainIdentifiers=_removedDomainIdentifiers - In the implementation block
+(id)updates;
-(void)setItemsRequiringIndexing:(NSArray *)arg1 ;
-(NSArray *)itemsRequiringIndexing;
-(NSArray *)removedIdentifiers;
-(NSArray *)removedDomainIdentifiers;
-(void)setRemovedDomainIdentifiers:(NSArray *)arg1 ;
-(void)setRemovedIdentifiers:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
@end
