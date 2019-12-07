/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;
	BOOL healthDevice;
	BOOL ctkdDevice;

}
+(id)deviceWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(id)description;
-(id)name;
-(id)identifier;
-(void)disconnect;
-(BOOL)connect;
-(BOOL)connected;
-(BOOL)paired;
-(BOOL)setUserName:(id)arg1 ;
-(void)unpair;
-(BOOL)cloudPaired;
-(BOOL)ancsAuthorized;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(BOOL)supportsCTKD;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(void)setANCSAuthorization:(BOOL)arg1 ;
-(BOOL)supportsANCS;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(BOOL)connectApplePencil:(int)arg1 ;
@end
