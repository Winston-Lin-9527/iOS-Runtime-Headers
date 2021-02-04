/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, NSArray;

@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying> {

	BOOL _settingsEnabled;
	BOOL _setup;
	BOOL _enabled;
	NSSet* _usedFeedbacks;
	/*^block*/id _preparationBlock;
	Class _clientClass;
	NSString* _usage;
	long long _requiredSupportLevel;
	long long _activationStyle;
	long long _outputMode;
	NSString* __stats_key;

}

@property (nonatomic,copy) id preparationBlock;                           //@synthesize preparationBlock=_preparationBlock - In the implementation block
@property (nonatomic,copy) Class clientClass;                             //@synthesize clientClass=_clientClass - In the implementation block
@property (nonatomic,copy) NSString * usage;                              //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) long long requiredSupportLevel;              //@synthesize requiredSupportLevel=_requiredSupportLevel - In the implementation block
@property (assign,nonatomic) long long activationStyle;                   //@synthesize activationStyle=_activationStyle - In the implementation block
@property (assign,nonatomic) long long outputMode;                        //@synthesize outputMode=_outputMode - In the implementation block
@property (nonatomic,readonly) BOOL defaultEnabled; 
@property (assign,nonatomic) BOOL settingsEnabled;                        //@synthesize settingsEnabled=_settingsEnabled - In the implementation block
@property (assign,getter=isSetup,nonatomic) BOOL setup;                   //@synthesize setup=_setup - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * feedbackKeyPaths; 
@property (nonatomic,readonly) NSSet * usedFeedbacks;                     //@synthesize usedFeedbacks=_usedFeedbacks - In the implementation block
@property (nonatomic,readonly) NSString * descriptionKey; 
@property (nonatomic,copy) NSString * _stats_key;                         //@synthesize _stats_key=__stats_key - In the implementation block
+(id)defaultConfiguration;
+(id)_configurationWithKey:(id)arg1 preparationBlock:(/*^block*/id)arg2 ;
+(id)_configurationWithKey:(id)arg1 requiredSupportLevel:(long long)arg2 preparationBlock:(/*^block*/id)arg3 ;
+(id)_disabledConfiguration;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)tweakedConfigurationForClass:(Class)arg1 usage:(id)arg2 ;
-(BOOL)_setupRegardlessOfPreferences:(BOOL)arg1 ;
-(long long)activationStyle;
-(NSSet *)usedFeedbacks;
-(void)setOutputMode:(long long)arg1 ;
-(long long)outputMode;
-(NSString *)_stats_key;
-(NSArray *)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(void)set_stats_key:(NSString *)arg1 ;
-(void)setRequiredSupportLevel:(long long)arg1 ;
-(BOOL)defaultEnabled;
-(BOOL)isSetup;
-(BOOL)settingsEnabled;
-(BOOL)_shouldEnable;
-(void)setSetup:(BOOL)arg1 ;
-(void)setSettingsEnabled:(BOOL)arg1 ;
-(void)_preferencesUpdated:(id)arg1 ;
-(void)_updateEnabled;
-(void)setActivationStyle:(long long)arg1 ;
-(void)setPreparationBlock:(id)arg1 ;
-(NSString *)descriptionKey;
-(id)tweakedConfigurationForCaller:(id)arg1 usage:(id)arg2 ;
-(id)preparationBlock;
-(Class)clientClass;
-(void)setClientClass:(Class)arg1 ;
-(NSString *)usage;
-(void)setUsage:(NSString *)arg1 ;
@end
