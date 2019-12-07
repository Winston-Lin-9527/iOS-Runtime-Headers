/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) float volume; 
-(unsigned long long)type;
-(float)volume;
-(NSString *)outputDeviceUID;
-(id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(id)initWithVolume:(float)arg1 ;
@end
