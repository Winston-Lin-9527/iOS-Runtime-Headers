/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIApplicationSceneSettings.h>
#import <libobjc.A.dylib/SPUILegibilitySceneSettings.h>
@class _UILegibilitySettings;


@protocol SPUILegibilitySceneSettings <NSObject>
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@required
-(_UILegibilitySettings *)legibilitySettings;

@end


@class _UILegibilitySettings, NSString;

@interface SPUILegibilitySceneSettings : UIApplicationSceneSettings <SPUILegibilitySceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
-(id)keyDescriptionForSetting:(long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(_UILegibilitySettings *)legibilitySettings;
@end
