/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface ISPlayerItemChef : NSObject {

	NSOperationQueue* __operationQueue;
	NSObject*<OS_dispatch_queue> __isolationQueue;
	NSMutableDictionary* __operationsByRequestID;
	long long __currentRequestID;

}

@property (nonatomic,readonly) NSOperationQueue * _operationQueue;                                  //@synthesize _operationQueue=__operationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _isolationQueue;                        //@synthesize _isolationQueue=__isolationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _operationsByRequestID;                        //@synthesize _operationsByRequestID=__operationsByRequestID - In the implementation block
@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
+(id)defaultChef;
-(void)_setCurrentRequestID:(long long)arg1 ;
-(long long)_currentRequestID;
-(NSOperationQueue *)_operationQueue;
-(NSMutableDictionary *)_operationsByRequestID;
-(long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS5)arg2 photoTime:(SCD_Struct_IS4)arg3 includeVideo:(BOOL)arg4 includeAudio:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(SCD_Struct_IS4)arg2 trimmedTimeRange:(SCD_Struct_IS5)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)_isolationQueue;
-(id)init;
@end
