/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface CRKFetchDevicesRequest : CATTaskRequest {

	NSArray* _deviceIdentifiers;

}

@property (nonatomic,copy) NSArray * deviceIdentifiers;              //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(Class)whitelistedClassForResultObject;
+(BOOL)supportsSecureCoding;
-(NSArray *)deviceIdentifiers;
-(void)setDeviceIdentifiers:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
