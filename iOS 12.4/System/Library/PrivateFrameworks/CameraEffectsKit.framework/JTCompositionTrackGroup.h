/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSString, AVMutableCompositionTrack, NSMutableArray, AVMutableAudioMixInputParameters, AVMutableComposition, NSDictionary;

@interface JTCompositionTrackGroup : NSObject {

	BOOL _isExporting;
	BOOL _seenSpeedClip;
	BOOL _seenMoreThanOneASBD;
	BOOL _isFlexMusic;
	BOOL _videoTrackInUse;
	float _volumeAtLastVolumeChange;
	float _volumeChangePending;
	int _timeScale;
	NSString* _label;
	AVMutableCompositionTrack* _videoTrack;
	AVMutableCompositionTrack* _audioTrack;
	NSMutableArray* _audioSegments;
	AVMutableAudioMixInputParameters* _audioParameters;
	NSString* _preferredAudioTimePitchAlgorithm;
	AVMutableComposition* _composition;
	NSString* _timePitchAlgorithm;
	NSMutableArray* _extraAudioTrackGroups;
	opaqueCMFormatDescriptionRef _audioFormatDescription;
	NSDictionary* _fmTrackInfoDict;
	NSMutableArray* _videoSegments;
	SCD_Struct_JT6 _cursor;
	SCD_Struct_JT6 _cursorAtLastVideoInsertion;
	SCD_Struct_JT6 _timeOfLastVolumeChange;
	SCD_Struct_JT6 _timeOfLastRequest;
	SCD_Struct_JT6 _fadeOutStart;
	SCD_Struct_JT6 _fadeOutDuration;
	SCD_Struct_JT6 _lastRampToZeroEnd;
	SCD_Struct_JT6 _cursorForMovieAudio;

}

@property (assign,nonatomic) NSString * timePitchAlgorithm;                                    //@synthesize timePitchAlgorithm=_timePitchAlgorithm - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraAudioTrackGroups;                           //@synthesize extraAudioTrackGroups=_extraAudioTrackGroups - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef audioFormatDescription;              //@synthesize audioFormatDescription=_audioFormatDescription - In the implementation block
@property (assign,nonatomic) BOOL seenSpeedClip;                                               //@synthesize seenSpeedClip=_seenSpeedClip - In the implementation block
@property (assign,nonatomic) BOOL seenMoreThanOneASBD;                                         //@synthesize seenMoreThanOneASBD=_seenMoreThanOneASBD - In the implementation block
@property (nonatomic,retain) AVMutableAudioMixInputParameters * audioParameters;               //@synthesize audioParameters=_audioParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * fmTrackInfoDict;                                   //@synthesize fmTrackInfoDict=_fmTrackInfoDict - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 lastRampToZeroEnd;                                 //@synthesize lastRampToZeroEnd=_lastRampToZeroEnd - In the implementation block
@property (assign,nonatomic) BOOL isFlexMusic;                                                 //@synthesize isFlexMusic=_isFlexMusic - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JT6 cursorForMovieAudio;                             //@synthesize cursorForMovieAudio=_cursorForMovieAudio - In the implementation block
@property (assign,nonatomic) int timeScale;                                                    //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) BOOL videoTrackInUse;                                             //@synthesize videoTrackInUse=_videoTrackInUse - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoSegments;                                   //@synthesize videoSegments=_videoSegments - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioSegments;                                   //@synthesize audioSegments=_audioSegments - In the implementation block
@property (nonatomic,copy) NSString * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) AVMutableCompositionTrack * videoTrack;                           //@synthesize videoTrack=_videoTrack - In the implementation block
@property (nonatomic,retain) AVMutableCompositionTrack * audioTrack;                           //@synthesize audioTrack=_audioTrack - In the implementation block
@property (nonatomic,retain) NSString * preferredAudioTimePitchAlgorithm;                      //@synthesize preferredAudioTimePitchAlgorithm=_preferredAudioTimePitchAlgorithm - In the implementation block
@property (nonatomic,readonly) int actualVideoTrackID; 
@property (nonatomic,readonly) int usableVideoTrackID; 
@property (nonatomic,readonly) SCD_Struct_JT6 cursor;                                          //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JT6 cursorAtLastVideoInsertion;                      //@synthesize cursorAtLastVideoInsertion=_cursorAtLastVideoInsertion - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 timeOfLastVolumeChange;                            //@synthesize timeOfLastVolumeChange=_timeOfLastVolumeChange - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 timeOfLastRequest;                                 //@synthesize timeOfLastRequest=_timeOfLastRequest - In the implementation block
@property (assign,nonatomic) float volumeAtLastVolumeChange;                                   //@synthesize volumeAtLastVolumeChange=_volumeAtLastVolumeChange - In the implementation block
@property (assign,nonatomic) float volumeChangePending;                                        //@synthesize volumeChangePending=_volumeChangePending - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 fadeOutStart;                                      //@synthesize fadeOutStart=_fadeOutStart - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 fadeOutDuration;                                   //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (nonatomic,retain) AVMutableComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL isExporting;                                                 //@synthesize isExporting=_isExporting - In the implementation block
+(id)visualDescriptionForSegments:(id)arg1 ;
-(AVMutableComposition *)composition;
-(void)setComposition:(AVMutableComposition *)arg1 ;
-(void)markDirty;
-(void)setIsExporting:(BOOL)arg1 ;
-(void)setAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)removeExtraAudioTrackGroups;
-(BOOL)containsVideoSegments;
-(BOOL)containsAudioSegments;
-(void)setSeenSpeedClip:(BOOL)arg1 ;
-(void)setSeenMoreThanOneASBD:(BOOL)arg1 ;
-(void)resetVolumeState;
-(NSMutableArray *)extraAudioTrackGroups;
-(void)setExtraAudioTrackGroups:(NSMutableArray *)arg1 ;
-(AVMutableCompositionTrack *)audioTrack;
-(BOOL)isFlexMusic;
-(void)setIsFlexMusic:(BOOL)arg1 ;
-(void)_updateIsFlexMusic:(id)arg1 ;
-(BOOL)isExporting;
-(BOOL)seenMoreThanOneASBD;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(BOOL)asbd:(opaqueCMFormatDescriptionRef)arg1 isEqualTo:(opaqueCMFormatDescriptionRef)arg2 ;
-(BOOL)seenSpeedClip;
-(void)setAudioTrack:(AVMutableCompositionTrack *)arg1 ;
-(NSString *)preferredAudioTimePitchAlgorithm;
-(void)setPreferredAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)addExtraAudioTrackGroup:(id)arg1 ;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_JT6)arg2 ;
-(void)applyPaddingToTime:(SCD_Struct_JT6)arg1 ;
-(SCD_Struct_JT6)lastRampToZeroEnd;
-(void)setFmTrackInfoDict:(NSDictionary *)arg1 ;
-(NSDictionary *)fmTrackInfoDict;
-(void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(SCD_Struct_JT16)arg2 ;
-(id)apply_version2_to_track:(id)arg1 withSegments:(id)arg2 assets:(id)arg3 ;
-(void)apply_version2:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(void)setAudioParameters:(AVMutableAudioMixInputParameters *)arg1 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 ;
-(BOOL)requestVolume:(float)arg1 atTime:(SCD_Struct_JT6)arg2 ;
-(void)applyAudioMixParameters:(id)arg1 ;
-(void)setTimeOfLastVolumeChange:(SCD_Struct_JT6)arg1 ;
-(void)setVolumeAtLastVolumeChange:(float)arg1 ;
-(void)setVolumeChangePending:(float)arg1 ;
-(void)setTimeOfLastRequest:(SCD_Struct_JT6)arg1 ;
-(void)setLastRampToZeroEnd:(SCD_Struct_JT6)arg1 ;
-(float)volumeChangePending;
-(SCD_Struct_JT6)timeOfLastRequest;
-(float)volumeAtLastVolumeChange;
-(SCD_Struct_JT6)timeOfLastVolumeChange;
-(BOOL)commitPendingVolumeToTime:(SCD_Struct_JT6)arg1 ;
-(SCD_Struct_JT6)fadeOutStart;
-(float)linearFadeOutValueForTime:(SCD_Struct_JT6)arg1 ;
-(float)setFadedVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 ;
-(void)commitVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 ;
-(BOOL)shouldCommitVolume:(float)arg1 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 fillEmptySegment:(BOOL)arg4 ;
-(BOOL)containsSegments;
-(int)usableVideoTrackID;
-(int)actualVideoTrackID;
-(void)applyCompositionItem:(id)arg1 ;
-(void)apply_version1;
-(AVMutableCompositionTrack *)videoTrack;
-(void)setVideoTrack:(AVMutableCompositionTrack *)arg1 ;
-(NSMutableArray *)videoSegments;
-(NSMutableArray *)audioSegments;
-(SCD_Struct_JT6)cursorAtLastVideoInsertion;
-(void)setFadeOutStart:(SCD_Struct_JT6)arg1 ;
-(NSString *)timePitchAlgorithm;
-(void)setTimePitchAlgorithm:(NSString *)arg1 ;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(id)initWithLabel:(id)arg1 timeScale:(int)arg2 ;
-(void)applyCompositionItem:(id)arg1 skipAudio:(BOOL)arg2 ;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_JT6)arg2 skipAudio:(BOOL)arg3 ;
-(void)setAudioSegments:(NSMutableArray *)arg1 ;
-(SCD_Struct_JT6)cursorForMovieAudio;
-(BOOL)videoTrackInUse;
-(void)setVideoTrackInUse:(BOOL)arg1 ;
-(void)setVideoSegments:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(AVMutableAudioMixInputParameters *)audioParameters;
-(void)setLabel:(NSString *)arg1 ;
-(void)setFadeOutDuration:(SCD_Struct_JT6)arg1 ;
-(SCD_Struct_JT6)fadeOutDuration;
-(SCD_Struct_JT6)cursor;
-(BOOL)validate;
@end
