/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;


@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@required
-(void)setParentOutputDeviceDiscoverySession:(id)arg1;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(id)arg1;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(BOOL)devicePresenceDetected;

@end
