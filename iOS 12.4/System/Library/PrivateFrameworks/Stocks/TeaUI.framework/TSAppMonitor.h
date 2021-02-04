/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSAppMonitorType.h>

@interface TSAppMonitor : NSObject <TSAppMonitorType> {

	 isActive;
	 onDidEnterBackgroundBlock;
	 onWillEnterForegroundBlock;

}

@property (assign,nonatomic) BOOL isActive; 
-(id)onDidEnterBackgroundWithBlock:(/*^block*/id)arg1 ;
-(id)onWillEnterForegroundWithBlock:(/*^block*/id)arg1 ;
-(void)triggerWithEvent:(long long)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
@end
