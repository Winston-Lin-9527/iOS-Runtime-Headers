/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNRegulatoryLogger.h>

@class NSString;

@interface _CNRegulatoryLogger : NSObject <CNRegulatoryLogger> {

	ct_green_tea_logger_sRef _log;

}

@property (nonatomic,readonly) ct_green_tea_logger_sRef log;              //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(ct_green_tea_logger_sRef)log;
-(void)readingContactsData;
-(void)modifyingContactsData;
-(void)readAndTransmittingContactsData;
@end
