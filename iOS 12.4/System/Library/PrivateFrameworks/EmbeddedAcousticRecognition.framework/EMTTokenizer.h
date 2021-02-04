/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _EARFormatter, NSObject, NSLocale;

@interface EMTTokenizer : NSObject {

	_EARFormatter* _formatter;
	NSObject*<OS_dispatch_queue> _queue;
	NSLocale* _outputLocale;

}

@property (nonatomic,readonly) NSLocale * outputLocale;              //@synthesize outputLocale=_outputLocale - In the implementation block
-(id)format:(id)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(id)format:(id)arg1 preToPostItnMap:(id)arg2 ;
-(NSLocale *)outputLocale;
@end
