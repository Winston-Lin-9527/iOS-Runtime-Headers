/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSError, NSString, NSDictionary;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldStopDueToError;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL shouldStopDueToError;              //@synthesize shouldStopDueToError=_shouldStopDueToError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(id)initWithError:(id)arg1 shouldStopDueToError:(BOOL)arg2 ;
-(BOOL)shouldStopDueToError;
-(NSDictionary *)properties;
-(NSError *)error;
@end
