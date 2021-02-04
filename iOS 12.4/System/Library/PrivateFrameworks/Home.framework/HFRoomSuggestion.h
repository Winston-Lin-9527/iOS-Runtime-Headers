/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface HFRoomSuggestion : NSObject {

	NSString* _name;
	NSSet* _aliases;
	long long _priority;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSSet * aliases;              //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,readonly) long long priority;                //@synthesize priority=_priority - In the implementation block
+(id)suggestionWithName:(id)arg1 priority:(long long)arg2 aliases:(id)arg3 ;
+(id)suggestionWithName:(id)arg1 priority:(long long)arg2 ;
+(/*^block*/id)priorityComparator;
-(NSSet *)aliases;
-(NSString *)name;
-(long long)priority;
@end
