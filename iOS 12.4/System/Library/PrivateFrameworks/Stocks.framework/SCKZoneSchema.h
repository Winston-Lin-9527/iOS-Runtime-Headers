/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordZoneID, NSString, NSArray;

@interface SCKZoneSchema : NSObject {

	BOOL _atomic;
	CKRecordZoneID* _zoneID;
	NSString* _zoneName;
	NSArray* _recordSchemas;

}

@property (nonatomic,copy) NSArray * recordSchemas;                             //@synthesize recordSchemas=_recordSchemas - In the implementation block
@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID;                    //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy,readonly) NSString * zoneName;                        //@synthesize zoneName=_zoneName - In the implementation block
@property (getter=isAtomic,nonatomic,readonly) BOOL atomic;                     //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allRecordFieldNames; 
-(BOOL)isValidRecord:(id)arg1 ;
-(id)schemaForRecordType:(id)arg1 ;
-(NSArray *)recordSchemas;
-(id)initWithName:(id)arg1 atomic:(BOOL)arg2 recordSchemas:(id)arg3 ;
-(NSArray *)allRecordFieldNames;
-(id)validateRecords:(id)arg1 ;
-(void)setRecordSchemas:(NSArray *)arg1 ;
-(BOOL)isAtomic;
-(CKRecordZoneID *)zoneID;
-(NSString *)zoneName;
@end
