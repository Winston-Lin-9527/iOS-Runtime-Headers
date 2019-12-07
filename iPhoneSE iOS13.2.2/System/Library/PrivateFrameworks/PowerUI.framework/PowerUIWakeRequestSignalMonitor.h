/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log, _CDContext;
@class NSObject, _CDContextualChangeRegistration, NSString;

@interface PowerUIWakeRequestSignalMonitor : NSObject <PowerUISignalMonitor> {

	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;
	id<_CDContext> _context;
	_CDContextualChangeRegistration* _registration;

}

@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_CDContext> context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualChangeRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(id<_CDContext>)context;
-(void)setContext:(id<_CDContext>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(_CDContextualChangeRegistration *)registration;
-(void)setRegistration:(_CDContextualChangeRegistration *)arg1 ;
-(id)nextUserVisibleWakeDate;
-(unsigned long long)signalID;
-(id)requiredFullChargeDate;
@end
