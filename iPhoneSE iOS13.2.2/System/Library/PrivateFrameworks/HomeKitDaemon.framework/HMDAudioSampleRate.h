/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDAudioSampleRate : HMDNumberParser <NSSecureCoding> {

	unsigned long long _sampleRate;

}

@property (nonatomic,readonly) unsigned long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithRates:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)sampleRate;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithSampleRate:(unsigned long long)arg1 ;
@end
