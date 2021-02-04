/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/BFFRestoreProgressView.h>

@class NSString, NSDateComponentsFormatter, MBDeviceTransferConnectionInfo, MBDeviceTransferProgress;

@interface BFFMigrationProgressView : BFFRestoreProgressView {

	NSString* _internalProgressText;
	NSDateComponentsFormatter* _elapsedDurationFormatter;
	MBDeviceTransferConnectionInfo* _connectionInfo;
	MBDeviceTransferProgress* _migrationProgress;

}

@property (nonatomic,retain) NSDateComponentsFormatter * elapsedDurationFormatter;              //@synthesize elapsedDurationFormatter=_elapsedDurationFormatter - In the implementation block
@property (nonatomic,retain) MBDeviceTransferConnectionInfo * connectionInfo;                   //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (nonatomic,retain) MBDeviceTransferProgress * migrationProgress;                      //@synthesize migrationProgress=_migrationProgress - In the implementation block
@property (retain) NSString * internalProgressText;                                             //@synthesize internalProgressText=_internalProgressText - In the implementation block
-(MBDeviceTransferProgress *)migrationProgress;
-(void)setConnectionInfo:(MBDeviceTransferConnectionInfo *)arg1 ;
-(MBDeviceTransferConnectionInfo *)connectionInfo;
-(void)updateProgressSubtext;
-(void)setMigrationProgress:(MBDeviceTransferProgress *)arg1 ;
-(id)timeRemainingString:(double)arg1 ;
-(void)setInternalProgressText:(NSString *)arg1 ;
-(NSDateComponentsFormatter *)elapsedDurationFormatter;
-(NSString *)internalProgressText;
-(void)setDeviceConnectionInformation:(id)arg1 ;
-(void)setDeviceTransferProgress:(id)arg1 ;
-(void)setElapsedDurationFormatter:(NSDateComponentsFormatter *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
@end
