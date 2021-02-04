/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPass, NSString;

@interface SUScriptPassbookPass : SUScriptObject {

	PKPass* _pass;

}

@property (readonly) NSString * passTypeIdentifier; 
@property (readonly) NSString * passURL; 
@property (readonly) NSString * serialNumber; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)passURL;
-(id)initWithPass:(id)arg1 ;
-(NSString *)passTypeIdentifier;
-(NSString *)serialNumber;
-(void)dealloc;
@end
