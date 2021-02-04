/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject {

	NSString* _domain;
	SSKeyValueStore* _keyValueStore;

}
+(id)_checkOutStoreWithDomain:(id)arg1 ;
+(void)_popStoreWithDomain:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(void)getValueForKey:(id)arg1 usingFunction:(id)arg2 ;
-(void)removeValueForKey:(id)arg1 ;
-(void)setValueForKey:(id)arg1 value:(id)arg2 ;
-(id)_className;
-(void)removeAllValues;
-(void)dealloc;
-(id)valueForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 ;
@end
