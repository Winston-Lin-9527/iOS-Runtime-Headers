/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, UIMenuController, UICalloutBar;

@interface AXQSMenuHelper : NSObject {

	BOOL _showingLanguageChoices;
	NSArray* _thirdPartyMenuItems;

}

@property (nonatomic,retain) NSArray * thirdPartyMenuItems;                                            //@synthesize thirdPartyMenuItems=_thirdPartyMenuItems - In the implementation block
@property (nonatomic,readonly) UIMenuController * menuController; 
@property (nonatomic,readonly) UICalloutBar * calloutBar; 
@property (assign,getter=isShowingLanguageChoices,nonatomic) BOOL showingLanguageChoices;              //@synthesize showingLanguageChoices=_showingLanguageChoices - In the implementation block
+(id)sharedInstance;
-(UICalloutBar *)calloutBar;
-(void)restoreMenu;
-(id)menuItemForCalloutBarButton:(id)arg1 ;
-(void)saveThirdPartyMenuItemsIfNeeded:(id)arg1 ;
-(void)setShowingLanguageChoices:(BOOL)arg1 ;
-(BOOL)isShowingLanguageChoices;
-(NSArray *)thirdPartyMenuItems;
-(UIMenuController *)menuController;
-(void)setThirdPartyMenuItems:(NSArray *)arg1 ;
@end
