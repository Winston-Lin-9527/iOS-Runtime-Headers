/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFDailyStatusEvent : WFEvent {

	BOOL _installed;
	BOOL _sharingEnabled;
	BOOL _personalAutomationsEnabled;
	BOOL _homeAutomationsEnabled;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL installed;                               //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL sharingEnabled;                          //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL personalAutomationsEnabled;              //@synthesize personalAutomationsEnabled=_personalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL homeAutomationsEnabled;                  //@synthesize homeAutomationsEnabled=_homeAutomationsEnabled - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setHomeAutomationsEnabled:(BOOL)arg1 ;
-(void)setPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)personalAutomationsEnabled;
-(BOOL)homeAutomationsEnabled;
@end
