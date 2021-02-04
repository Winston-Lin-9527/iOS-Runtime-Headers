/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSDate, NSArray;

@interface WBSDeviceEligibilityInformation : NSObject {

	BOOL _hasWindowsDevices;
	NSDate* _dateOfLatestDAVAccessByIneligibleWindowsDevice;
	NSArray* _devices;

}

@property (nonatomic,readonly) NSDate * dateOfLatestDAVAccessByIneligibleWindowsDevice;              //@synthesize dateOfLatestDAVAccessByIneligibleWindowsDevice=_dateOfLatestDAVAccessByIneligibleWindowsDevice - In the implementation block
@property (nonatomic,readonly) NSArray * devices;                                                    //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) BOOL hasWindowsDevices;                                               //@synthesize hasWindowsDevices=_hasWindowsDevices - In the implementation block
-(id)initWithDateOfLatestDAVAccessByIneligibleWindowsDevice:(id)arg1 devices:(id)arg2 hasWindowsDevices:(BOOL)arg3 ;
-(id)initWithDeviceListResponseDictionary:(id)arg1 ;
-(SCD_Struct_WB6)potentiallyEligibleDevicesWithEligibleOperatingSystemVersionRanges:(id)arg1 ;
-(NSDate *)dateOfLatestDAVAccessByIneligibleWindowsDevice;
-(BOOL)hasWindowsDevices;
-(NSArray *)devices;
-(id)description;
@end
