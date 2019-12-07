/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem {

	long long _batteryLevel;
	NSString* _accessoryName;

}
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)wakeDisplay;
-(id)initWithAccessory:(id)arg1 batteryLevel:(long long)arg2 ;
@end
