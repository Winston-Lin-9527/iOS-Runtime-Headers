/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISVitalitySettings;
@interface ISLivePhotoVitalityFilter : NSObject {

	BOOL _isPerformingInputChanges;
	BOOL __shouldUpdateOutput;
	id<ISVitalitySettings> _settings;
	long long _state;
	/*^block*/id _outputChangeHandler;

}

@property (assign,setter=_setPerformingInputChanges:,nonatomic) BOOL isPerformingInputChanges;              //@synthesize isPerformingInputChanges=_isPerformingInputChanges - In the implementation block
@property (assign,setter=_setShouldUpdateOutput:,nonatomic) BOOL _shouldUpdateOutput;                       //@synthesize _shouldUpdateOutput=__shouldUpdateOutput - In the implementation block
@property (nonatomic,readonly) id<ISVitalitySettings> settings;                                             //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) long long state;                                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id outputChangeHandler;                                                          //@synthesize outputChangeHandler=_outputChangeHandler - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id<ISVitalitySettings>)settings;
-(void)invalidateOutput;
-(void)updateOutput;
-(BOOL)isPerformingInputChanges;
-(void)_setPerformingInputChanges:(BOOL)arg1 ;
-(void)performInputChanges:(/*^block*/id)arg1 ;
-(id)outputChangeHandler;
-(void)setOutputChangeHandler:(id)arg1 ;
-(BOOL)_shouldUpdateOutput;
-(void)_setShouldUpdateOutput:(BOOL)arg1 ;
@end
