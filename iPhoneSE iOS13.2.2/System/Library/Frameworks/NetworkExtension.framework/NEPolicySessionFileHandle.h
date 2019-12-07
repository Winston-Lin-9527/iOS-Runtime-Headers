/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle {

	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(id)dictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithPolicySession:(id)arg1 name:(id)arg2 ;
-(id)initWithPolicySession:(id)arg1 ;
@end
