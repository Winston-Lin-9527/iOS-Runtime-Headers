/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INPauseTimerIntentExport.h>

@class INTimer, NSNumber, NSString;

@interface INPauseTimerIntent : INIntent <INPauseTimerIntentExport>

@property (nonatomic,copy,readonly) INTimer * targetTimer; 
@property (nonatomic,copy,readonly) NSNumber * pauseMultiple; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(id)_metadata;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(void)setParametersByName:(id)arg1 ;
-(void)setTargetTimer:(INTimer *)arg1 ;
-(INTimer *)targetTimer;
-(void)setPauseMultiple:(NSNumber *)arg1 ;
-(NSNumber *)pauseMultiple;
-(id)initWithTargetTimer:(id)arg1 pauseMultiple:(id)arg2 ;
-(id)verb;
-(id)parametersByName;
-(void)setDomain:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
@end
