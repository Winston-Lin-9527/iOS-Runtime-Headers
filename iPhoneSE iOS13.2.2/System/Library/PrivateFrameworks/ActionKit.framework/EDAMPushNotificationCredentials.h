/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSData, NSString;

@interface EDAMPushNotificationCredentials : FATObject {

	NSData* _iosDeviceToken;
	NSString* _gcmRegistrationId;

}

@property (nonatomic,retain) NSData * iosDeviceToken;                   //@synthesize iosDeviceToken=_iosDeviceToken - In the implementation block
@property (nonatomic,retain) NSString * gcmRegistrationId;              //@synthesize gcmRegistrationId=_gcmRegistrationId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSData *)iosDeviceToken;
-(void)setIosDeviceToken:(NSData *)arg1 ;
-(NSString *)gcmRegistrationId;
-(void)setGcmRegistrationId:(NSString *)arg1 ;
@end
