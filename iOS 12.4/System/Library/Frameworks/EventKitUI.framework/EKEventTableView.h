/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableView.h>

@class EKEventViewController;

@interface EKEventTableView : UITableView {

	EKEventViewController* _controller;

}

@property (assign,nonatomic,__weak) EKEventViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)reloadData;
-(EKEventViewController *)controller;
-(void)setController:(EKEventViewController *)arg1 ;
@end
