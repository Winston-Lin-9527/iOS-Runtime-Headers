/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALocation.h>

@class NSNumber, SAPersonAttribute;

@interface SAFmfLocation : SALocation

@property (nonatomic,copy) NSNumber * distance; 
@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSNumber * locationDate; 
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)location;
-(id)encodedClassName;
-(SAPersonAttribute *)friend;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(void)setLocationDate:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)locationDate;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSNumber *)distance;
@end
