/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setLoading:(BOOL)arg1 ;
-(void)setReallyChecked:(BOOL)arg1 ;
-(void)_removeSpinner;
-(void)_addSpinner;
-(void)setRow:(int)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
@end
