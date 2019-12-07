/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentScript.h>

@class WKUserScript, NSString;

@interface SXWebContentRefreshScript : NSObject <SXWebContentScript> {

	WKUserScript* userScript;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
-(NSString *)identifier;
-(WKUserScript *)userScript;
-(NSString *)executableScript;
-(BOOL)queueable;
@end
