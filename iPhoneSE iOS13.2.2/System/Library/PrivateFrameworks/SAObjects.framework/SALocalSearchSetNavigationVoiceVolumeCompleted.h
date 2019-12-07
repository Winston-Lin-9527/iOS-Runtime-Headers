/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SALocalSearchSetNavigationVoiceVolumeCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setNavigationVoiceVolumeCompleted;
+(id)setNavigationVoiceVolumeCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
