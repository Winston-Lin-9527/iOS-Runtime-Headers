/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUURLHandling.h>
#import <libobjc.A.dylib/SXURLHandling.h>

@class NSExtensionContext, NSString;

@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling> {

	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithExtensionContext:(id)arg1 ;
-(void)openURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSExtensionContext *)extensionContext;
-(void)openURL:(id)arg1 ;
@end
