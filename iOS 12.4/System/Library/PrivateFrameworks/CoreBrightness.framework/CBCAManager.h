/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject, NSMutableArray;

@interface CBCAManager : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSMutableArray* _displays;

}
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)colorRampPropertyHandler:(id)arg1 ;
-(void)displayBrightnessPropertyHandler:(id)arg1 ;
-(void)nitsThresholdPLCPropertyHandler:(id)arg1 ;
-(id)initWithCADisplays:(id)arg1 ;
-(void)dealloc;
-(id)initWithCADisplay:(id)arg1 ;
@end
