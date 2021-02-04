/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Speech/SFSpeechRecognitionTask.h>

@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {

	/*^block*/id _resultHandler;
	BOOL _hasFiredFinalResult;

}
-(void)_fireResultHandlerWithResult:(id)arg1 error:(id)arg2 ;
-(void)_finalizeResultHandler;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2 ;
@end
