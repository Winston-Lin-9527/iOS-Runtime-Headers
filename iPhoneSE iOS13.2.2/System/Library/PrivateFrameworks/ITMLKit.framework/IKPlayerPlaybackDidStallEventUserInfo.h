/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDictionary, NSString;

@interface IKPlayerPlaybackDidStallEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	double _elapsedTime;

}

@property (nonatomic,readonly) double elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(NSDictionary *)properties;
-(double)elapsedTime;
-(id)initWithElapsedTime:(double)arg1 ;
@end
