/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
#import <CalDAV/CalDAVCalendarItemProtocol.h>

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol> {

	NSString* _scheduleTag;
	CalDAVCalendarServerScheduleChangesItem* _scheduleChanges;
	CalDAVUpdateOwnerItem* _createdBy;
	CalDAVUpdateOwnerItem* _updatedBy;

}

@property (nonatomic,retain) NSString * scheduleTag;                                                 //@synthesize scheduleTag=_scheduleTag - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy;                                      //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy;                                      //@synthesize updatedBy=_updatedBy - In the implementation block
-(void)setCreatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(CalDAVUpdateOwnerItem *)createdBy;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(NSString *)arg1 ;
-(void)setScheduleChanges:(CalDAVCalendarServerScheduleChangesItem *)arg1 ;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(void)setUpdatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
@end
