/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDashboardDataSource <NSObject>
@optional
-(void)setDataSourceDelegate:(id)arg1;
-(id)navigationBarTitle;

@required
-(id)titleForSection:(unsigned long long)arg1;
-(id)footerTextForSection:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;

@end
