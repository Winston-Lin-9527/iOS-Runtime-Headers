/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface TSUTraceableResourceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _knownTraceableResources;

}
+(id)sharedManager;
-(void)registerTraceableResource:(id)arg1 ;
-(id)serializationDescription;
-(id)init;
-(id)description;
@end
