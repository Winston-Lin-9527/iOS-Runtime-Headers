/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SFDevice, NSUUID;

@interface TRNearbyDevice : NSObject {

	unsigned long long _supportedService;
	SFDevice* _representedDevice;

}

@property (assign,nonatomic) unsigned long long supportedService;              //@synthesize supportedService=_supportedService - In the implementation block
@property (nonatomic,readonly) SFDevice * representedDevice;                   //@synthesize representedDevice=_representedDevice - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier; 
-(id)initWithRepresentedDevice:(id)arg1 supportedService:(unsigned long long)arg2 ;
-(SFDevice *)representedDevice;
-(unsigned long long)supportedService;
-(void)setSupportedService:(unsigned long long)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(id)description;
@end
