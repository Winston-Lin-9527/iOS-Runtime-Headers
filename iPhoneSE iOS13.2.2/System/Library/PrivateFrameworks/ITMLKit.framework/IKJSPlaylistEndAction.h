/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylistEndAction.h>

@protocol IKJSPlaylistEndAction <JSExport>
@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
@required
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;

@end


@interface IKJSPlaylistEndAction : IKJSObject <IKJSPlaylistEndAction>

@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
-(id)init;
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;
@end
