/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,retain) SASource * groupSource; 
+(id)contactGroup;
+(id)contactGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(SASource *)groupSource;
-(void)setGroupSource:(SASource *)arg1 ;
-(id)groupIdentifier;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
@end
