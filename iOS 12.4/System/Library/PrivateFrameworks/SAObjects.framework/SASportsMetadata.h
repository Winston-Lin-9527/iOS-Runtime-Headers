/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * average; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)metadata;
-(NSNumber *)average;
-(id)encodedClassName;
-(void)setAverage:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSelected:(NSNumber *)arg1 ;
-(NSNumber *)selected;
@end
