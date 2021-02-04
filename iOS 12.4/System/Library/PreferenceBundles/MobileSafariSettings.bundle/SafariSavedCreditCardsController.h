/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/_SFSettingsAuthenticationRequiring.h>

@class NSArray, NSString;

@interface SafariSavedCreditCardsController : SafariAutoFillListController <_SFSettingsAuthenticationRequiring> {

	NSArray* _specifiersForAddItem;
	NSArray* _virtualCards;
	NSArray* _specifiersForVirtualCardSection;
	BOOL _hasBeenAuthenticated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated;                            //@synthesize hasBeenAuthenticated=_hasBeenAuthenticated - In the implementation block
-(void)setHasBeenAuthenticated:(BOOL)arg1 ;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;
-(id)specifiers;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(BOOL)hasBeenAuthenticated;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(id)_specifiersForVirtualCardSection;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
-(id)_specifiersForAddItem;
-(void)_createVirtualCardSectionSpecifiers;
-(id)_specifiersToAddOrRemoveWhenTogglingEditButton;
-(void)_viewVirtualCardInWallet:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_addItem:(id)arg1 ;
@end
