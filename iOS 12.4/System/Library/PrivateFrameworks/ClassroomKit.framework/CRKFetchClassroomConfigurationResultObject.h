/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject {

	NSDictionary* _configuration;
	NSDictionary* _configurationsByType;

}

@property (nonatomic,copy) NSDictionary * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByType;              //@synthesize configurationsByType=_configurationsByType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)configurationsByType;
-(void)setConfigurationsByType:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end
