/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKConnection : NSObject <WKObject> {

	WeakObjCPtr<id<WKConnectionDelegate> > _delegate;

}

@property (assign) id<WKConnectionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(WebConnection*)_connection;
-(id<WKConnectionDelegate>)delegate;
-(void)setDelegate:(id<WKConnectionDelegate>)arg1 ;
-(Object*)_apiObject;
-(void)sendMessageWithName:(id)arg1 body:(id)arg2 ;
@end
