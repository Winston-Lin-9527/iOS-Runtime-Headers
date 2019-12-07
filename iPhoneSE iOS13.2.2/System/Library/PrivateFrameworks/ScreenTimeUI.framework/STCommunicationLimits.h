/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/ScreenTimeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface STCommunicationLimits : NSObject <NSCopying> {

	BOOL _contactsEditable;
	long long _screenTimeCommunicationLimit;
	long long _downtimeCommunicationLimit;
	long long _contactManagementState;

}

@property (assign) long long screenTimeCommunicationLimit;              //@synthesize screenTimeCommunicationLimit=_screenTimeCommunicationLimit - In the implementation block
@property (assign) long long downtimeCommunicationLimit;                //@synthesize downtimeCommunicationLimit=_downtimeCommunicationLimit - In the implementation block
@property (assign) long long contactManagementState;                    //@synthesize contactManagementState=_contactManagementState - In the implementation block
@property (assign) BOOL contactsEditable;                               //@synthesize contactsEditable=_contactsEditable - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)screenTimeCommunicationLimit;
-(long long)downtimeCommunicationLimit;
-(long long)contactManagementState;
-(BOOL)contactsEditable;
-(void)setDowntimeCommunicationLimit:(long long)arg1 ;
-(void)setContactManagementState:(long long)arg1 ;
-(void)setContactsEditable:(BOOL)arg1 ;
-(void)setScreenTimeCommunicationLimit:(long long)arg1 ;
@end
