/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CRKSystemInfo : NSObject {

	NSString* _buildVersion;
	NSString* _systemVersion;

}

@property (nonatomic,copy,readonly) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,copy,readonly) NSDate * bootDate; 
+(id)sharedSystemInfo;
-(void)populateVersions;
-(NSDate *)bootDate;
-(unsigned long long)platform;
-(id)init;
-(NSString *)systemVersion;
-(NSString *)buildVersion;
@end
