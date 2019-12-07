/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringImportRequest.h>

@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {

	NSArray* _objectIDsToFetch;
	NSDictionary* _entityNameToAttributesToFetch;
	NSDictionary* _entityNameToAttributeNamesToFetch;
	BOOL _editable;

}

@property (nonatomic,copy) NSArray * objectIDsToFetch;                                         //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entityNameToAttributesToFetch; 
-(void)dealloc;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_isEditable;
-(void)throwNotEditable:(SEL)arg1 ;
-(BOOL)validateForUseWithStore:(id)arg1 error:(id*)arg2 ;
-(id)_entityNameToAttributeNamesToFetch;
-(NSDictionary *)entityNameToAttributesToFetch;
-(void)setEntityNameToAttributesToFetch:(NSDictionary *)arg1 ;
-(void)setEntityNameToAttributeNamesToFetch:(id)arg1 ;
-(void)setObjectIDsToFetch:(NSArray *)arg1 ;
-(NSArray *)objectIDsToFetch;
@end
