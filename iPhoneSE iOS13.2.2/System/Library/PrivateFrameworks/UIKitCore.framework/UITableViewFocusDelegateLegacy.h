/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewFocusDelegateLegacy <UITableViewDelegate>
@optional
-(BOOL)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;
-(id)indexPathForPreferredFocusedItemForTableView:(id)arg1;

@end
