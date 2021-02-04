/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class CAStateController, CALayer, NSMutableArray, CAPackage, FACAPackageDescription;

@interface FACAPackageView : UIView <CAStateControllerDelegate> {

	CAStateController* _stateController;
	CALayer* _packageLayer;
	NSMutableArray* _registeredObservers;
	CAPackage* _package;
	FACAPackageDescription* _packageDescription;

}

@property (nonatomic,retain) CAPackage * package;                                      //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) FACAPackageDescription * packageDescription;              //@synthesize packageDescription=_packageDescription - In the implementation block
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(void)_setPackage:(id)arg1 ;
-(void)setPackageDescription:(FACAPackageDescription *)arg1 ;
-(void)setStateName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(FACAPackageDescription *)packageDescription;
-(void)setPackage:(CAPackage *)arg1 ;
-(CAPackage *)package;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
