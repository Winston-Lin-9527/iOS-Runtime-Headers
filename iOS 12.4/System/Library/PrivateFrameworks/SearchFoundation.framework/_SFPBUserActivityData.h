/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBUserActivityData.h>
@class NSString, NSArray, NSData;


@protocol _SFPBUserActivityData <NSObject>
@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSArray * userInfos; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)addUserInfo:(id)arg1;
-(id)userInfoAtIndex:(unsigned long long)arg1;
-(NSArray *)userInfos;
-(void)setUserInfos:(id)arg1;
-(void)clearUserInfo;
-(unsigned long long)userInfoCount;
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)activityType;
-(void)setActivityType:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding> {

	NSString* _activityType;
	NSArray* _userInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * activityType;                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSArray * userInfos;                     //@synthesize userInfos=_userInfos - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addUserInfo:(id)arg1 ;
-(id)userInfoAtIndex:(unsigned long long)arg1 ;
-(NSArray *)userInfos;
-(void)setUserInfos:(NSArray *)arg1 ;
-(void)clearUserInfo;
-(unsigned long long)userInfoCount;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)activityType;
-(id)dictionaryRepresentation;
-(void)setActivityType:(NSString *)arg1 ;
-(NSData *)jsonData;
@end
