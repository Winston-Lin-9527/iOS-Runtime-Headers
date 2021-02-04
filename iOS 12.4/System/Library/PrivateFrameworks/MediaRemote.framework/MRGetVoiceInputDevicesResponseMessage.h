/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (nonatomic,readonly) long long errorCode; 
-(long long)errorCode;
-(id)initWithDeviceIDs:(id)arg1 errorCode:(long long)arg2 ;
-(NSArray *)deviceIDs;
-(unsigned long long)type;
@end
