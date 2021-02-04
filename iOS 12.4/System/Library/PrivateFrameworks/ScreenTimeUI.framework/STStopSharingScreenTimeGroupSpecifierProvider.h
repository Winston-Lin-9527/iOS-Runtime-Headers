/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _stopSharingScreenTimeSpecifier;

}

@property (nonatomic,retain) PSSpecifier * stopSharingScreenTimeSpecifier;              //@synthesize stopSharingScreenTimeSpecifier=_stopSharingScreenTimeSpecifier - In the implementation block
-(void)disableScreenTime:(id)arg1 ;
-(void)confirmStopSharingScreenTime:(id)arg1 ;
-(void)setStopSharingScreenTimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)stopSharingScreenTimeSpecifier;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
@end
