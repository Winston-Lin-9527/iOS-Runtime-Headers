/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SXMapSnapShotter : NSObject {

	NSMutableArray* _snapshotters;

}

@property (nonatomic,retain) NSMutableArray * snapshotters;              //@synthesize snapshotters=_snapshotters - In the implementation block
+(id)serialQueue;
-(id)init;
-(NSMutableArray *)snapshotters;
-(/*^block*/id)snapShotWithOptions:(id)arg1 annotations:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSnapshotters:(NSMutableArray *)arg1 ;
@end
