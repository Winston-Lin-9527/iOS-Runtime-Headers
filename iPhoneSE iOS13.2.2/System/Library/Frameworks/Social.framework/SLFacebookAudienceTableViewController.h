/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SLFacebookAudienceViewController.h>

@protocol SLFacebookAudienceViewControllerDelegate;
@class NSArray, SLFacebookPostPrivacySetting, UINavigationItem;

@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController> {

	NSArray* _privacySettings;
	SLFacebookPostPrivacySetting* _selectedSetting;
	id<SLFacebookAudienceViewControllerDelegate> _selectionDelegate;
	UINavigationItem* _navigationItem;

}
-(void)loadView;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setSelectionDelegate:(id)arg1 ;
-(id)_privacySettingForIndexPath:(id)arg1 ;
-(void)setPrivacySettings:(id)arg1 ;
-(void)setCurrentPrivacySetting:(id)arg1 ;
@end
