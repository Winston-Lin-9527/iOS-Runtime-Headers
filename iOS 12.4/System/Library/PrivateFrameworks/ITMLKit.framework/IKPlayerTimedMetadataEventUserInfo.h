/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerTimedMetadataEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	NSString* _key;
	NSDictionary* _value;

}

@property (nonatomic,copy,readonly) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * value;              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)value;
-(NSString *)key;
-(NSDictionary *)properties;
@end
