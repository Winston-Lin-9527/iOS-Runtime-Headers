/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, EKSource, EKEventStore, CalDarwinNotificationListener;

@interface EKCalendarVisibilityManager : NSObject {

	NSArray* _invisibleCalendars;
	EKSource* _limitedToSource;
	EKEventStore* _eventStore;
	/*^block*/id _visibilityChangedCallback;
	CalDarwinNotificationListener* _notificationListener;

}

@property (nonatomic,retain) EKEventStore * eventStore;                                         //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,copy) id visibilityChangedCallback;                                        //@synthesize visibilityChangedCallback=_visibilityChangedCallback - In the implementation block
@property (nonatomic,retain) CalDarwinNotificationListener * notificationListener;              //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,readonly) NSArray * visibleCalendars; 
@property (nonatomic,readonly) NSArray * visibleCalendarsForAllIdentities; 
@property (nonatomic,readonly) NSArray * invisibleCalendarsForAllIdentities; 
@property (nonatomic,retain) NSArray * invisibleCalendars;                                      //@synthesize invisibleCalendars=_invisibleCalendars - In the implementation block
@property (nonatomic,retain) EKSource * limitedToSource;                                        //@synthesize limitedToSource=_limitedToSource - In the implementation block
+(id)visibilityChangedNotificationName;
-(id)init;
-(void)dealloc;
-(CalDarwinNotificationListener *)notificationListener;
-(void)setNotificationListener:(CalDarwinNotificationListener *)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)initWithEventStore:(id)arg1 limitedToSource:(id)arg2 visibilityChangedCallback:(/*^block*/id)arg3 ;
-(NSArray *)visibleCalendars;
-(EKSource *)limitedToSource;
-(void)setLimitedToSource:(EKSource *)arg1 ;
-(void)setVisibilityChangedCallback:(id)arg1 ;
-(id)visibilityChangedCallback;
-(id)_calendarsThatAreVisible:(BOOL)arg1 filteredByIdentity:(BOOL)arg2 ;
-(id)_deselectedCalendarIdentifiers;
-(id)initWithEventStore:(id)arg1 visibilityChangedCallback:(/*^block*/id)arg2 ;
-(NSArray *)invisibleCalendars;
-(NSArray *)visibleCalendarsForAllIdentities;
-(NSArray *)invisibleCalendarsForAllIdentities;
-(void)setInvisibleCalendars:(NSArray *)arg1 ;
@end
