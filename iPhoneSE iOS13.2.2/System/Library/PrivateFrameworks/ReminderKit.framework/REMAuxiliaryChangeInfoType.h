/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMAuxiliaryChangeInfoObject.h>

@class NSDictionary, REMObjectID, NSString;

@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject> {

	REMObjectID* remObjectID;
	NSDictionary* _storage;

}

@property (nonatomic,retain) REMObjectID * remObjectID; 
@property (nonatomic,retain) NSDictionary * storage;                 //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
-(NSDictionary *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setStorage:(NSDictionary *)arg1 ;
-(REMObjectID *)remObjectID;
-(void)setRemObjectID:(REMObjectID *)arg1 ;
-(id)initWithREMObjectID:(id)arg1 ;
@end
