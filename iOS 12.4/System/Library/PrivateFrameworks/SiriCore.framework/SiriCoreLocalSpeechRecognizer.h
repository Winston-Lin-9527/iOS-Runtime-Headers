/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSpeechServiceDelegate.h>

@protocol OS_dispatch_queue, SiriCoreLocalSpeechRecognizerDelegate;
@class NSObject, NSXPCConnection, NSString, NSError, NSData;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate> {

	BOOL _recognitionActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _esConnection;
	BOOL _hasRecognizedAnything;
	unsigned char _instanceUUID[16];
	NSString* _currentLanguage;
	NSError* _recognitionError;
	NSString* _preheatedProfileAssetPath;
	NSData* _preheatedProfile;
	id<SiriCoreLocalSpeechRecognizerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<SiriCoreLocalSpeechRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechProfileDataLastModifiedDataForLanguage:(id)arg1 ;
+(id)installedAssetSizeWithError:(id*)arg1 ;
+(id)purgeInstalledAssetsWithError:(id*)arg1 ;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)preheatSpeechRecognitionWithLanguage:(id)arg1 ;
-(void)addAudioPacket:(id)arg1 ;
-(void)finishAudio;
-(void)createSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getOfflineDictationStatusIgnoringCache:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchUserDataForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runAdaptationRecipeEvaluation:(id)arg1 recordData:(id)arg2 attachments:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)writeDESRecord;
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1 ;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1 ;
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1 ;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1 ;
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2 ;
-(id)_newConnection;
-(id)_connection;
-(id)_service;
-(void)_readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_serviceWithFunctionName:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char)arg2 ;
-(id)_synchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)startSpeechRecognitionWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(BOOL)arg4 detectUtterances:(BOOL)arg5 maximumRecognitionDuration:(double)arg6 farField:(BOOL)arg7 secureOfflineOnly:(BOOL)arg8 censorSpeech:(BOOL)arg9 originalAudioFileURL:(id)arg10 overrides:(id)arg11 modelOverrideURL:(id)arg12 didStartHandler:(/*^block*/id)arg13 ;
-(void)updateSpeechProfileWithLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetDESWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id<SiriCoreLocalSpeechRecognizerDelegate>)delegate;
-(void)invalidate;
@end
