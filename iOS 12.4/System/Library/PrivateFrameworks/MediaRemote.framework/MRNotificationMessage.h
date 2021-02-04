/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString, NSDictionary, _MRNowPlayingPlayerPathProtobuf;

@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * notification; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(NSDictionary *)userInfo;
-(unsigned long long)type;
-(id)initWithNotification:(id)arg1 ;
-(NSString *)notification;
@end
