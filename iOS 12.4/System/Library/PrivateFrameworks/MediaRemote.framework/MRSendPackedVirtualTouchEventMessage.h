/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendPackedVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDTouchEvent event; 
@property (nonatomic,readonly) unsigned long long virtualDeviceID; 
-(unsigned long long)virtualDeviceID;
-(id)initWithTouchEvent:(MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)priority;
-(MRHIDTouchEvent)event;
@end
