/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface RTDevice : NSObject {

	NSUUID* _identifier;
	NSString* _deviceName;
	NSString* _deviceClass;
	NSString* _deviceModel;

}

@property (nonatomic,readonly) NSUUID * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceClass;              //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
-(NSString *)deviceClass;
-(NSString *)deviceName;
-(NSString *)deviceModel;
-(id)initWithDeviceMO:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
@end
