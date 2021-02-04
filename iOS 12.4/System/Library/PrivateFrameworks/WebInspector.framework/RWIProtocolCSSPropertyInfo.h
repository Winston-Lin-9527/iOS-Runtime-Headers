/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * aliases; 
@property (nonatomic,copy) NSArray * longhands; 
@property (nonatomic,copy) NSArray * values; 
@property (assign,nonatomic) BOOL inherited; 
-(NSArray *)aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(BOOL)inherited;
-(void)setInherited:(BOOL)arg1 ;
-(void)setLonghands:(NSArray *)arg1 ;
-(NSArray *)longhands;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSArray *)values;
@end
