/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NCAuxiliaryOptionsSupporting <NSObject>
@property (nonatomic,copy) NSString * optionsSummaryText; 
@property (assign,nonatomic) unsigned long long numberOfOptionButtons; 
@property (nonatomic,readonly) NSArray * optionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
@required
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)setOptionsSummaryText:(id)arg1;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1;
-(NSArray *)optionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1;

@end
