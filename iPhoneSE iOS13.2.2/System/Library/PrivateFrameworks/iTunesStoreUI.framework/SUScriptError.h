/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject {

	NSError* _error;

}

@property (readonly) long long code; 
@property (readonly) NSString * domain; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSString * localizedFailureReason; 
@property (readonly) NSString * localizedRecoverySuggestion; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedDescription;
-(NSString *)localizedFailureReason;
-(NSString *)localizedRecoverySuggestion;
-(id)_className;
-(id)initWithError:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
@end
