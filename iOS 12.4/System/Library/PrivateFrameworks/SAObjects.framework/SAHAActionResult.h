/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAHAEntity, NSString, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject

@property (nonatomic,retain) SAHAEntity * entity; 
@property (nonatomic,copy) NSString * outcome; 
@property (nonatomic,copy) NSString * resultAttribute; 
@property (nonatomic,retain) SAHAAttributeValue * resultValue; 
+(id)actionResultWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)actionResult;
-(SAHAEntity *)entity;
-(void)setEntity:(SAHAEntity *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setResultAttribute:(NSString *)arg1 ;
-(NSString *)outcome;
-(NSString *)resultAttribute;
-(void)setResultValue:(SAHAAttributeValue *)arg1 ;
-(SAHAAttributeValue *)resultValue;
-(void)setOutcome:(NSString *)arg1 ;
@end
