/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FCDemoGroupConfig : NSObject <NSCopying> {

	unsigned long long _demoGroupType;
	NSString* _topicID;
	NSArray* _articleIDs;

}

@property (nonatomic,readonly) unsigned long long demoGroupType;              //@synthesize demoGroupType=_demoGroupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicID;                       //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * articleIDs;                     //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tagIDs; 
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)topicID;
-(NSArray *)tagIDs;
-(NSArray *)articleIDs;
-(unsigned long long)demoGroupType;
@end
