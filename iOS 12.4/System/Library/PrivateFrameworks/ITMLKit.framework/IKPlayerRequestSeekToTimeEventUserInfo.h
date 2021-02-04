/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerRequestSeekToTimeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldSeek;
	double _requestedTime;
	double _currentTime;
	double _proposedTime;

}

@property (nonatomic,readonly) double requestedTime;                   //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,readonly) double currentTime;                     //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldSeek;                        //@synthesize shouldSeek=_shouldSeek - In the implementation block
@property (nonatomic,readonly) double proposedTime;                    //@synthesize proposedTime=_proposedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(id)initWithRequestedTime:(double)arg1 currentTime:(double)arg2 ;
-(BOOL)shouldSeek;
-(double)proposedTime;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(double)requestedTime;
-(double)currentTime;
-(NSDictionary *)properties;
@end
