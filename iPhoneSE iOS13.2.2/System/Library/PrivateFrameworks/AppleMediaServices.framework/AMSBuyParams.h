/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface AMSBuyParams : NSObject <NSCopying> {

	NSMutableDictionary* _backingDictionary;

}

@property (readonly) NSDictionary * dictionary; 
+(id)buyParamsWithString:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(id)stringValue;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithString:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)_parseBuyParams:(id)arg1 ;
-(void)importURLEncodedBuyParams:(id)arg1 ;
@end
