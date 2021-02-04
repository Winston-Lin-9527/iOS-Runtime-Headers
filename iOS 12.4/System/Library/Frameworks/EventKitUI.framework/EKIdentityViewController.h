/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKIdentityProtocol;
@class CNContactViewController, CNContactStore;

@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol> {

	id<EKIdentityProtocol> _identity;
	CNContactViewController* _personViewController;
	CNContactStore* _store;

}

@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(Class)_CNContactStoreClass;
-(Class)_CNContactClass;
-(Class)_CNContactViewControllerClass;
-(id)contactForIdentity:(id)arg1 ;
-(void)updateControllerWithContact:(id)arg1 isNew:(BOOL)arg2 ;
-(id)CNContactPhoneNumbersKey;
-(id)CNContactEmailAddressesKey;
-(Class)_CNMutableContactClass;
-(Class)_CNLabeledValueClass;
-(id)CNLabelWork;
-(id)initWithIdentity:(id)arg1 ;
-(void)loadView;
-(void)setIdentity:(id)arg1 ;
@end
