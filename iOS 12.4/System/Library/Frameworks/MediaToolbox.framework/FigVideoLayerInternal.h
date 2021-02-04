/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject;

@interface FigVideoLayerInternal : NSObject {

	BOOL isPresentationLayer;
	BOOL visible;
	OpaqueFigSimpleMutexRef serializationMutex;
	NSObject*<OS_dispatch_queue> notificationSerialQueue;

}
@end
