/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RMSAudioRoute : NSObject {

	BOOL _supportsVideo;
	BOOL _selected;
	NSString* _displayName;
	unsigned long long _macAddress;

}

@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL supportsVideo;                           //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(id)audioRoutesFromProtobufs:(id)arg1 ;
+(id)protobufsFromAudioRoutes:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isSelected;
-(unsigned long long)macAddress;
-(void)setSelected:(BOOL)arg1 ;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)supportsVideo;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(void)setMacAddress:(unsigned long long)arg1 ;
-(BOOL)isEqualToAudioRoute:(id)arg1 ;
@end
