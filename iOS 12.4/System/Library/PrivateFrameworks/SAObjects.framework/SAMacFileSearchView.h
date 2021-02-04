/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView

@property (nonatomic,copy) NSArray * entities; 
@property (assign,nonatomic) long long numResults; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * searchTitle; 
+(id)fileSearchView;
+(id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntities:(NSArray *)arg1 ;
-(void)setNumResults:(long long)arg1 ;
-(long long)numResults;
-(id)encodedClassName;
-(NSString *)searchTitle;
-(void)setSearchTitle:(NSString *)arg1 ;
-(NSArray *)entities;
-(id)groupIdentifier;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
@end
