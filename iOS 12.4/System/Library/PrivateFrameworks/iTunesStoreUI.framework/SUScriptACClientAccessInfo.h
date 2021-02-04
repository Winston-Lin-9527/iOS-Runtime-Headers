/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccountType, NSMutableDictionary, NSDictionary, NSString;

@interface SUScriptACClientAccessInfo : SUScriptObject {

	SUScriptAppleAccountType* _accountType;
	NSMutableDictionary* _dictionary;

}

@property (readonly) NSDictionary * accessInfoDictionary; 
@property (retain) SUScriptAppleAccountType * accountType; 
@property (readonly) NSString * accessKeyFacebookAppID; 
@property (readonly) NSString * accessKeyFacebookPermissions; 
@property (readonly) NSString * accessKeyPurposeStatement; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(NSDictionary *)accessInfoDictionary;
-(id)valueForAccessKey:(id)arg1 ;
-(void)setValue:(id)arg1 forAccessKey:(id)arg2 ;
-(NSString *)accessKeyFacebookAppID;
-(NSString *)accessKeyFacebookPermissions;
-(NSString *)accessKeyPurposeStatement;
-(id)scriptAttributeKeys;
-(id)_className;
-(SUScriptAppleAccountType *)accountType;
-(void)setAccountType:(SUScriptAppleAccountType *)arg1 ;
-(id)init;
-(void)dealloc;
@end
