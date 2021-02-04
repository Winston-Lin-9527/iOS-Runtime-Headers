/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPrivateDataSyncAvailability.h>

@protocol FCPrivateDataSyncAvailability
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) BOOL privateDataSyncingAllowed; 
@required
-(BOOL)isPrivateDataSyncingAllowed;

@end


@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability> {

	NSArray* _conditions;

}

@property (nonatomic,copy,readonly) NSArray * conditions;                                                      //@synthesize conditions=_conditions - In the implementation block
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) BOOL privateDataSyncingAllowed; 
+(id)defaultAvailability;
+(id)notAvailable;
-(BOOL)isPrivateDataSyncingAllowed;
-(id)initWithConditions:(id)arg1 ;
-(NSArray *)conditions;
@end
