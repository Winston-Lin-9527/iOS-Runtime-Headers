/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * securityOrigin; 
@property (assign,nonatomic) BOOL isLocalStorage; 
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setIsLocalStorage:(BOOL)arg1 ;
-(id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(BOOL)arg2 ;
-(BOOL)isLocalStorage;
-(NSString *)securityOrigin;
@end
