/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCalloutView : SUScriptObject {

	BOOL _isVisible;
	NSString* _subtitle;
	NSString* _title;

}

@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_menuDidHideNotification:(id)arg1 ;
-(void)_reloadUntructedString;
-(void)_setupCalloutBar;
-(void)_resetCalloutBar;
-(void)setTargetX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
@end
