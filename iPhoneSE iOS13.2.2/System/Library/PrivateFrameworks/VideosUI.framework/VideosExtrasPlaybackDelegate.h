/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideosExtrasPlaybackDelegate <NSObject>
@optional
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)extrasBackButtonPressed;

@required
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2;
-(void)extrasRequestReloadWithContext:(id)arg1;
-(void)extrasRequestsPlaybackStop;

@end
