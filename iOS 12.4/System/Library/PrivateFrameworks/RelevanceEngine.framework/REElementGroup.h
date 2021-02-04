/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REIndentedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REElementGroup : NSObject <REIndentedDescription, NSCopying> {

	NSString* _groupIdentifier;
	unsigned long long _behavior;
	long long _maxElementCount;

}

@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                 //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)topElementGroupWithIdentifier:(id)arg1 ;
+(id)adjoiningElementGroupWithIdentifier:(id)arg1 ;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(NSString *)groupIdentifier;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBehavior:(unsigned long long)arg1 ;
-(unsigned long long)behavior;
@end
