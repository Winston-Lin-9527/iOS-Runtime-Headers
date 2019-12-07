/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSArray;

@interface _HDLocationInsertionJournalEntry : HDJournalEntry {

	NSUUID* _seriesIdentifier;
	NSArray* _data;

}

@property (nonatomic,readonly) NSUUID * seriesIdentifier;              //@synthesize seriesIdentifier=_seriesIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * data;                         //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)data;
-(id)initWithSeriesPersistentID:(id)arg1 locationData:(id)arg2 ;
-(NSUUID *)seriesIdentifier;
@end
