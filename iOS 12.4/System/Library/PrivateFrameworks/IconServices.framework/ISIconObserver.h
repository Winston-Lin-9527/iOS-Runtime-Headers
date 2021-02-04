/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISIconManagerObserver.h>

@interface ISIconObserver : NSObject <ISIconManagerObserver> {

	id _delegate;

}

@property (__weak,readonly) id<ISIconObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2 ;
-(void)dealloc;
-(id<ISIconObserverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
