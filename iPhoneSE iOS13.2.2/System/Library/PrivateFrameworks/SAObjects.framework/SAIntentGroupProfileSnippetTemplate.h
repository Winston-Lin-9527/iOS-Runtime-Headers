/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, NSArray;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * imageStyle; 
@property (nonatomic,copy) NSString * imageURI; 
@property (nonatomic,copy) NSArray * labelComponents; 
+(id)profileSnippetTemplate;
+(id)profileSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(NSString *)imageStyle;
-(void)setImageStyle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)labelComponents;
-(void)setLabelComponents:(NSArray *)arg1 ;
-(NSString *)imageURI;
-(void)setImageURI:(NSString *)arg1 ;
@end
