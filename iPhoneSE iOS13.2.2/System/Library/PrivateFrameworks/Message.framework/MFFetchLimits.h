/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFFetchLimits : NSObject {

	unsigned long long _fetchMinBytes;
	unsigned long long _fetchMaxBytes;
	unsigned long long _minBytesLeft;

}

@property (assign,nonatomic) unsigned long long fetchMinBytes;              //@synthesize fetchMinBytes=_fetchMinBytes - In the implementation block
@property (assign,nonatomic) unsigned long long fetchMaxBytes;              //@synthesize fetchMaxBytes=_fetchMaxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long minBytesLeft;               //@synthesize minBytesLeft=_minBytesLeft - In the implementation block
-(id)init;
-(id)description;
-(void)setFetchMaxBytes:(unsigned long long)arg1 ;
-(unsigned long long)fetchMaxBytes;
-(unsigned long long)fetchMinBytes;
-(void)setFetchMinBytes:(unsigned long long)arg1 ;
-(unsigned long long)minBytesLeft;
-(void)setMinBytesLeft:(unsigned long long)arg1 ;
@end
