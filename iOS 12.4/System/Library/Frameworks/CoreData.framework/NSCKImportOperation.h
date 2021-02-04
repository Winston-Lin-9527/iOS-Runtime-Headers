/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSUUID, NSData, NSSet;

@interface NSCKImportOperation : NSObject {

	NSDate* _importDate;
	NSUUID* _operationUUID;
	NSData* _changeTokenBytes;
	NSSet* _pendingRelationships;
	NSSet* _mirroredRelationships;

}

@property (nonatomic,readonly) NSDate * importDate;                        //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,readonly) NSUUID * operationUUID;                     //@synthesize operationUUID=_operationUUID - In the implementation block
@property (nonatomic,readonly) NSData * changeTokenBytes;                  //@synthesize changeTokenBytes=_changeTokenBytes - In the implementation block
@property (nonatomic,readonly) NSSet * pendingRelationships;               //@synthesize pendingRelationships=_pendingRelationships - In the implementation block
@property (nonatomic,readonly) NSSet * mirroredRelationships;              //@synthesize mirroredRelationships=_mirroredRelationships - In the implementation block
-(id)initWithFetchResult:(id)arg1 andSQLEntity:(id)arg2 ;
-(void)_addPendingRelationship:(id)arg1 ;
-(void)setBindValue:(id)arg1 ;
-(NSData *)changeTokenBytes;
-(NSSet *)pendingRelationships;
-(NSSet *)mirroredRelationships;
-(NSDate *)importDate;
-(void)setChangeToken:(id)arg1 ;
-(NSUUID *)operationUUID;
-(id)init;
-(void)dealloc;
-(id)description;
@end
