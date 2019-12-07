/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;

}

@property (retain) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
-(void)start;
-(PCSCKKSItemModifyContext *)context;
-(void)setContext:(PCSCKKSItemModifyContext *)arg1 ;
-(void)storePCSIdentity:(PCSIdentityDataRef)arg1 ;
-(void)createManateePCSIdentity;
-(void)setIdentityToCurrent;
-(int)addAndNotifyOnSync:(PCSIdentityDataRef)arg1 attributes:(CFDictionaryRef)arg2 returnAttributes:(const _CFDictionary*)arg3 complete:(/*^block*/id)arg4 ;
-(void)itemStored:(id)arg1 ;
-(id)initWithItemModifyContext:(id)arg1 ;
@end
