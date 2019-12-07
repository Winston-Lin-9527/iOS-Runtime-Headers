/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying> {

	BOOL _handled;
	NSSet* _recordZoneIDs;

}

@property (assign,getter=wasHandled,nonatomic) BOOL handled;              //@synthesize handled=_handled - In the implementation block
@property (nonatomic,retain) NSSet * recordZoneIDs;                       //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wasHandled;
-(NSSet *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSSet *)arg1 ;
-(void)setHandled:(BOOL)arg1 ;
@end
