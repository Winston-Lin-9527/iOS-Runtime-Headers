/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSData, TRIFile;

@interface TRILevel : TRIPBMessage

@property (nonatomic,readonly) int levelOneOfCase; 
@property (assign,nonatomic) BOOL booleanValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) int intValue; 
@property (assign,nonatomic) long long longValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,copy) NSData * binaryValue; 
@property (nonatomic,retain) TRIFile * fileValue; 
+(id)descriptor;
-(id)object;
@end
