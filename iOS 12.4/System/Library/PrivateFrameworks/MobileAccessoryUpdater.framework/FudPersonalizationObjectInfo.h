/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary;

@interface FudPersonalizationObjectInfo : NSObject {

	BOOL _esecSet;
	BOOL _eproSet;
	BOOL _trustedSet;
	BOOL _trusted;
	BOOL _effectiveProductionMode;
	BOOL _effectiveSecurityMode;
	NSString* _objectTag;
	NSData* _digest;
	NSDictionary* _customObjectProperties;

}

@property (nonatomic,copy,readonly) NSString * objectTag;                        //@synthesize objectTag=_objectTag - In the implementation block
@property (nonatomic,retain) NSData * digest;                                    //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) BOOL trusted;                                       //@synthesize trusted=_trusted - In the implementation block
@property (assign,nonatomic) BOOL effectiveProductionMode;                       //@synthesize effectiveProductionMode=_effectiveProductionMode - In the implementation block
@property (assign,nonatomic) BOOL effectiveSecurityMode;                         //@synthesize effectiveSecurityMode=_effectiveSecurityMode - In the implementation block
@property (nonatomic,retain) NSDictionary * customObjectProperties;              //@synthesize customObjectProperties=_customObjectProperties - In the implementation block
-(id)initWithTag:(id)arg1 ;
-(BOOL)trusted;
-(void)setDigest:(NSData *)arg1 ;
-(void)setTrusted:(BOOL)arg1 ;
-(NSData *)digest;
-(void)setEffectiveProductionMode:(BOOL)arg1 ;
-(void)setEffectiveSecurityMode:(BOOL)arg1 ;
-(BOOL)isTrustedSet;
-(BOOL)isEffectiveProductionModeSet;
-(BOOL)isEffectiveSecurityModeSet;
-(NSString *)objectTag;
-(BOOL)effectiveProductionMode;
-(BOOL)effectiveSecurityMode;
-(NSDictionary *)customObjectProperties;
-(void)setCustomObjectProperties:(NSDictionary *)arg1 ;
-(void)dealloc;
@end
