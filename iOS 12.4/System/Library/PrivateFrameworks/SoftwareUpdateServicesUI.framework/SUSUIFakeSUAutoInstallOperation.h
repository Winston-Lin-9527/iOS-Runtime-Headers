/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUAutoInstallOperation.h>

@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {

	BOOL _cancelled;
	NSUUID* _uuid;

}
-(id)forecast;
-(BOOL)isCanceled;
-(BOOL)isExpired;
-(id)id;
-(void)cancel;
@end
