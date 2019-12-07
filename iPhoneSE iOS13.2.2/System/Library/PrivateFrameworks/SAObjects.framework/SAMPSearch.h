/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSArray * searchTypes; 
@property (assign,nonatomic) BOOL strict; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)constraints;
-(id)groupIdentifier;
-(void)setConstraints:(NSArray *)arg1 ;
-(long long)maxResults;
-(void)setMaxResults:(long long)arg1 ;
-(id)encodedClassName;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)searchTypes;
-(BOOL)strict;
-(void)setStrict:(BOOL)arg1 ;
@end
