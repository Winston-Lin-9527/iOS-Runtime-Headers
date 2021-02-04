/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface VCMediaNegotiatorResults : NSObject {

	BOOL _supportsDynamicMaxBitrate;
	NSString* _remoteUserAgent;
	NSString* _remoteBasebandCodec;
	unsigned _remoteBasebandCodecSampleRate;
	NSMutableDictionary* _bandwidthSettings;
	BOOL _SIPDisabled;
	BOOL _secureMessagingRequired;

}

@property (assign,nonatomic) BOOL supportsDynamicMaxBitrate;                       //@synthesize supportsDynamicMaxBitrate=_supportsDynamicMaxBitrate - In the implementation block
@property (nonatomic,retain) NSString * remoteUserAgent;                           //@synthesize remoteUserAgent=_remoteUserAgent - In the implementation block
@property (nonatomic,retain) NSString * remoteBasebandCodec;                       //@synthesize remoteBasebandCodec=_remoteBasebandCodec - In the implementation block
@property (assign,nonatomic) unsigned remoteBasebandCodecSampleRate;               //@synthesize remoteBasebandCodecSampleRate=_remoteBasebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bandwidthSettings;              //@synthesize bandwidthSettings=_bandwidthSettings - In the implementation block
@property (assign,setter=IPDisabled,nonatomic) BOOL SIPDisabled;                   //@synthesize SIPDisabled=_SIPDisabled - In the implementation block
@property (assign,nonatomic) BOOL secureMessagingRequired;                         //@synthesize secureMessagingRequired=_secureMessagingRequired - In the implementation block
-(BOOL)supportsDynamicMaxBitrate;
-(BOOL)secureMessagingRequired;
-(void)setSupportsDynamicMaxBitrate:(BOOL)arg1 ;
-(NSString *)remoteBasebandCodec;
-(unsigned)remoteBasebandCodecSampleRate;
-(NSString *)remoteUserAgent;
-(void)setBandwidthSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)bandwidthSettings;
-(void)setRemoteUserAgent:(NSString *)arg1 ;
-(void)setRemoteBasebandCodec:(NSString *)arg1 ;
-(void)setRemoteBasebandCodecSampleRate:(unsigned)arg1 ;
-(BOOL)SIPDisabled;
-(void)setSIPDisabled:(BOOL)arg1 ;
-(void)setSecureMessagingRequired:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end
