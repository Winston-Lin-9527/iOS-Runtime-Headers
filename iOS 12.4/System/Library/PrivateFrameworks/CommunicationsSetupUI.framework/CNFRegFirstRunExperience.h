/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBarButtonItem;


@protocol CNFRegFirstRunExperience <NSObject>
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate; 
@property (nonatomic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,retain) UIBarButtonItem * customRightButton; 
@required
-(long long)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2;
-(void)setCustomLeftButton:(id)arg1;
-(void)setCustomRightButton:(id)arg1;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;
-(void)setDelegate:(id)arg1;
-(id<CNFRegFirstRunDelegate>)delegate;

@end
