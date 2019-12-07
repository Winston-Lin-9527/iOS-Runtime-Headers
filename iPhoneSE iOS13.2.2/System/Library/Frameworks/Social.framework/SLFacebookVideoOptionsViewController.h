/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol SLFacebookVideoOptionsDelegate;
@class NSArray, NSURL, SLVideoQualityOption;

@interface SLFacebookVideoOptionsViewController : UITableViewController {

	NSArray* _qualityOptions;
	NSURL* _videoAssetURL;
	SLVideoQualityOption* _selectedOption;
	id<SLFacebookVideoOptionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookVideoOptionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SLFacebookVideoOptionsDelegate>)delegate;
-(void)setDelegate:(id<SLFacebookVideoOptionsDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)_generateQualityOptionsWithAssetURL:(id)arg1 ;
-(id)initWithVideoAssetURL:(id)arg1 ;
-(void)setSelectedQualityOption:(id)arg1 ;
@end
