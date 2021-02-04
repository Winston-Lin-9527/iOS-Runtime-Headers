/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FLGroupViewModel.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {

	NSMutableArray* _mutableItems;
	NSString* _identifier;
	NSString* _rowTitle;
	NSString* _groupTitle;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * rowTitle;                     //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,copy) NSString * groupTitle;                   //@synthesize groupTitle=_groupTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)groupTitle;
-(void)setGroupTitle:(NSString *)arg1 ;
-(void)setRowTitle:(NSString *)arg1 ;
-(BOOL)shouldCoalesceItems;
-(BOOL)restrictionEnabled;
-(NSString *)rowTitle;
-(NSString *)identifier;
-(NSString *)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)items;
-(void)addItem:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end
