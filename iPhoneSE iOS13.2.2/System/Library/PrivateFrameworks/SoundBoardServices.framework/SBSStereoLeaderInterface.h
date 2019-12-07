/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSStereoLeaderRoleImplementer;
@class NSXPCConnection;

@interface SBSStereoLeaderInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSStereoLeaderRoleImplementer> _sbProxy;

}
-(id)init;
-(void)setDeviceAsStereoLeader:(BOOL)arg1 withOptions:(id)arg2 ;
@end
