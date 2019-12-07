/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKSimpleDataEntryItem.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <libobjc.A.dylib/HKSimpleDataEntryCellDelegate.h>

@class HKOrganDonationAddressCell, NSString, UIPickerView, NSDictionary, NSArray;

@interface HKOrganDonationAddressEntryItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource, HKSimpleDataEntryCellDelegate> {

	HKOrganDonationAddressCell* _cell;
	NSString* _address1;
	NSString* _address2;
	NSString* _city;
	NSString* _state;
	NSString* _zipcode;
	UIPickerView* _statePicker;
	NSDictionary* _statesDict;
	NSArray* _sortedStateKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cell;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)formattedKeyAndValue;
-(void)updateCellDisplay;
-(void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2 ;
-(id)initWithRegistrant:(id)arg1 ;
@end
