/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SALogNumericEvent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * eventName; 
@property (nonatomic,copy) NSString * eventOperation; 
@property (nonatomic,copy) NSNumber * eventValue; 
+(id)logNumericEvent;
+(id)logNumericEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setEventValue:(NSNumber *)arg1 ;
-(NSNumber *)eventValue;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)eventOperation;
-(void)setEventOperation:(NSString *)arg1 ;
@end
