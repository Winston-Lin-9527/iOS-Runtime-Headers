/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray;

@interface _PPTState : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	int _enteredCount;
	BOOL _hasRendered;
	NSMutableArray* _renderStatistics;

}

@property (assign) BOOL hasRendered;                               //@synthesize hasRendered=_hasRendered - In the implementation block
@property (retain) NSMutableArray * renderStatistics;              //@synthesize renderStatistics=_renderStatistics - In the implementation block
-(void)enterDispatchGroup;
-(void)leaveDispatchGroup;
-(void)groupNotifyOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setHasRendered:(BOOL)arg1 ;
-(NSMutableArray *)renderStatistics;
-(void)setRenderStatistics:(NSMutableArray *)arg1 ;
-(id)init;
-(BOOL)hasRendered;
@end
