/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface WBSParsecSubscriptionInfo : NSObject {

	NSDate* _expirationDate;
	NSString* _type;

}

@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(BOOL)isExpired;
-(id)initWithString:(id)arg1 ;
-(NSString *)type;
-(NSDate *)expirationDate;
-(id)_initWithDictionary:(id)arg1 ;
@end
