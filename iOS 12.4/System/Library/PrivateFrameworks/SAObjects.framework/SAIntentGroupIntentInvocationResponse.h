/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL backgroundLaunch; 
@property (nonatomic,copy) NSString * launchId; 
@property (nonatomic,copy) NSArray * parameters; 
@property (nonatomic,copy) NSString * utterance; 
+(id)intentInvocationResponse;
+(id)intentInvocationResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUtterance:(NSString *)arg1 ;
-(NSString *)utterance;
-(void)setLaunchId:(NSString *)arg1 ;
-(void)setBackgroundLaunch:(BOOL)arg1 ;
-(BOOL)backgroundLaunch;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)groupIdentifier;
-(NSString *)launchId;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
@end
