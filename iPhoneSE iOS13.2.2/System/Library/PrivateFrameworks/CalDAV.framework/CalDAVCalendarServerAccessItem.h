/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _accessLevel;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(id)init;
-(CoreDAVItemWithNoChildren *)accessLevel;
-(void)setAccessLevel:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
-(id)initWithAccess:(int)arg1 ;
@end
