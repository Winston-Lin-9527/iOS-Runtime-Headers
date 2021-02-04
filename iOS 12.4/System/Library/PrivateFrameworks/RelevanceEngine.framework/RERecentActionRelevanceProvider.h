/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString, RERecentAction;

@interface RERecentActionRelevanceProvider : RERelevanceProvider {

	NSString* _bundleIdentifier;
	unsigned long long _actionIdentifier;

}

@property (nonatomic,readonly) RERecentAction * recentAction; 
@property (nonatomic,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(RERecentAction *)recentAction;
-(id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)actionIdentifier;
-(unsigned long long)_hash;
@end
