/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {

	unsigned long long _status;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;              //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDisplay;
-(id)titleStringWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(id)initWithType:(long long)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)inviteReplyNotificationFromEventStore:(id)arg1 ;
@end
