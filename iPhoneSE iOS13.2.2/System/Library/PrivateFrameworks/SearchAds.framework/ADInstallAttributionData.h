/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface ADInstallAttributionData : NSObject {

	NSString* _adNetworkID;
	NSNumber* _campaignID;
	NSString* _uuid;
	NSNumber* _adamID;
	NSNumber* _timestamp;
	NSString* _signature;

}

@property (nonatomic,copy,readonly) NSString * adNetworkID;              //@synthesize adNetworkID=_adNetworkID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * campaignID;               //@synthesize campaignID=_campaignID - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * adamID;                   //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                //@synthesize signature=_signature - In the implementation block
-(NSString *)uuid;
-(NSNumber *)timestamp;
-(NSString *)signature;
-(id)initWithDict:(id)arg1 ;
-(NSNumber *)adamID;
-(NSNumber *)campaignID;
-(NSString *)adNetworkID;
@end
