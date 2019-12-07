/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableSet;

@interface _TVRCMediaRemoteCommandParser : NSObject {

	NSArray* _allCommands;
	NSMutableSet* _enabledCommandNames;

}
-(void)_gatherEnabledCommands;
-(BOOL)_containsAnySkipCommands;
-(id)_skipButtons;
-(BOOL)_containsAnyTrackCommands;
-(id)_trackAndSpeedButtons;
-(BOOL)_containsEnabledCommand:(unsigned)arg1 ;
-(id)buttonsForCommands:(id)arg1 ;
@end
