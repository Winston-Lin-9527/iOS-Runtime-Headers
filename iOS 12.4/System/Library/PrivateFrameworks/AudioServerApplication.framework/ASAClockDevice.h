/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSArray;

@interface ASAClockDevice : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * deviceUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) unsigned clockDomain; 
@property (getter=isAlive,nonatomic,readonly) BOOL alive; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) double nominalSampleRate; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned inputLatency; 
@property (nonatomic,readonly) unsigned outputLatency; 
@property (nonatomic,readonly) unsigned zeroTimestampPeriod; 
@property (nonatomic,copy,readonly) NSArray * nominalSampleRates; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * controls; 
-(unsigned)outputLatency;
-(unsigned)inputLatency;
-(unsigned)transportType;
-(NSString *)manufacturer;
-(NSString *)deviceUID;
-(BOOL)isAlive;
-(NSArray *)controls;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(double)nominalSampleRate;
-(NSArray *)nominalSampleRates;
-(unsigned)zeroTimestampPeriod;
-(void)setNominalSampleRate:(double)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)clockDomain;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isHidden;
-(BOOL)isRunning;
@end
