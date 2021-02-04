/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNContactPhotoViewDelegate.h>
#import <libobjc.A.dylib/CNUIReusableView.h>

@protocol CNPresenterDelegate, CNContactHeaderViewDelegate;
@class NSDictionary, UILabel, NSArray, CNContactPhotoView, NSString;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {

	BOOL _needsReload;
	BOOL _alwaysShowsMonogram;
	BOOL _visibleToScrollViews;
	NSDictionary* _nameTextAttributes;
	id<CNPresenterDelegate> _presenterDelegate;
	id<CNContactHeaderViewDelegate> _delegate;
	UILabel* _nameLabel;
	NSArray* _activatedConstraints;
	NSArray* _contacts;
	CNContactPhotoView* _photoView;

}

@property (nonatomic,retain) UILabel * nameLabel;                                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                                //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                            //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) CNContactPhotoView * photoView;                              //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsMonogram;                                      //@synthesize alwaysShowsMonogram=_alwaysShowsMonogram - In the implementation block
@property (assign,nonatomic) BOOL visibleToScrollViews;                                     //@synthesize visibleToScrollViews=_visibleToScrollViews - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                               //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presenterDelegate;              //@synthesize presenterDelegate=_presenterDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactHeaderViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 ;
+(CGSize)defaultPhotoSize;
+(id)descriptorForRequiredKeys;
+(BOOL)requiresConstraintBasedLayout;
-(void)updateFontSizes;
-(NSDictionary *)nameTextAttributes;
-(BOOL)alwaysShowsMonogram;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(void)setAlwaysShowsMonogram:(BOOL)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(id)contactViewCache;
-(void)updateWithNewContact:(id)arg1 ;
-(void)setPresenterDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)reloadDataIfNeeded;
-(void)photoViewDidUpdate:(id)arg1 ;
-(void)photoViewDidSaveEditsForImageDrop:(id)arg1 ;
-(id)viewControllerForPhotoView:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowTakePhotoAction:(BOOL)arg4 shouldAllowImageDrops:(BOOL)arg5 delegate:(id)arg6 ;
-(id<CNPresenterDelegate>)presenterDelegate;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(BOOL)visibleToScrollViews;
-(void)setVisibleToScrollViews:(BOOL)arg1 ;
-(void)updateWithContacts:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(CNContactPhotoView *)photoView;
-(id)descriptorForRequiredKeys;
-(void)setNeedsReload;
-(NSArray *)contacts;
-(void)dealloc;
-(void)setDelegate:(id<CNContactHeaderViewDelegate>)arg1 ;
-(id<CNContactHeaderViewDelegate>)delegate;
-(void)updateConstraints;
-(void)prepareForReuse;
-(BOOL)canBecomeFirstResponder;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
@end
