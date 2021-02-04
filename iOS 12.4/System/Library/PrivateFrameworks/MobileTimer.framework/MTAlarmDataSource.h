/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTAlarmManager, NSHashTable, NSMutableArray, MTAlarm;

@interface MTAlarmDataSource : NSObject {

	MTAlarmManager* _alarmManager;
	NSHashTable* _observers;
	NSMutableArray* _alarms;
	MTAlarm* _sleepAlarm;

}

@property (nonatomic,retain) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * alarms;                    //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                       //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
-(NSMutableArray *)alarms;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(void)_registerForNotifications;
-(void)registerObserver:(id)arg1 ;
-(MTAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(MTAlarmManager *)alarmManager;
-(id)initWithAlarmManager:(id)arg1 ;
-(void)_iterateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_handleAlarmNotification:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_stateReset;
-(id)reloadAlarms;
-(unsigned long long)rowForAlarmWithID:(id)arg1 ;
-(unsigned long long)rowForAlarm:(id)arg1 ;
-(unsigned long long)numberOfAlarms;
-(id)alarmAtRow:(unsigned long long)arg1 ;
-(id)updateAlarm:(id)arg1 ;
-(id)removeAlarm:(id)arg1 ;
-(id)addAlarm:(id)arg1 ;
-(void)dealloc;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
@end
