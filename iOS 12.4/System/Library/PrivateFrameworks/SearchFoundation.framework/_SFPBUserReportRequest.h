/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBUserReportRequest.h>
@class NSString, NSArray, NSData;


@protocol _SFPBUserReportRequest <NSObject>
@property (nonatomic,copy) NSString * affordanceText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * dismissText; 
@property (nonatomic,copy) NSArray * userReportOptions; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setAffordanceText:(id)arg1;
-(void)setDismissText:(id)arg1;
-(void)setUserReportOptions:(id)arg1;
-(void)addUserReportOptions:(id)arg1;
-(void)clearUserReportOptions;
-(unsigned long long)userReportOptionsCount;
-(id)userReportOptionsAtIndex:(unsigned long long)arg1;
-(NSString *)affordanceText;
-(NSArray *)userReportOptions;
-(NSString *)dismissText;
-(id)initWithJSON:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding> {

	NSString* _affordanceText;
	NSString* _title;
	NSString* _dismissText;
	NSArray* _userReportOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * affordanceText;                //@synthesize affordanceText=_affordanceText - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * dismissText;                   //@synthesize dismissText=_dismissText - In the implementation block
@property (nonatomic,copy) NSArray * userReportOptions;              //@synthesize userReportOptions=_userReportOptions - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAffordanceText:(NSString *)arg1 ;
-(void)setDismissText:(NSString *)arg1 ;
-(void)setUserReportOptions:(NSArray *)arg1 ;
-(void)addUserReportOptions:(id)arg1 ;
-(void)clearUserReportOptions;
-(unsigned long long)userReportOptionsCount;
-(id)userReportOptionsAtIndex:(unsigned long long)arg1 ;
-(NSString *)affordanceText;
-(NSArray *)userReportOptions;
-(NSString *)dismissText;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
@end
