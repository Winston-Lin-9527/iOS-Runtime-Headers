/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {

	NSString* _nameAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
-(id)init;
-(void)write:(id)arg1 ;
-(NSString *)nameAttribute;
-(void)setNameAttribute:(NSString *)arg1 ;
-(void)parserFoundAttributes:(id)arg1 ;
@end
