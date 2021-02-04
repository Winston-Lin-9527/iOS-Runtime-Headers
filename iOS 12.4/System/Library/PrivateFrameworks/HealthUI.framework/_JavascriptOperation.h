/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _JavascriptOperation : NSObject {

	NSString* _javascript;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSString * javascript;              //@synthesize javascript=_javascript - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
-(id)initWithJavascript:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitJavascript:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(NSString *)javascript;
-(void)setJavascript:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end
