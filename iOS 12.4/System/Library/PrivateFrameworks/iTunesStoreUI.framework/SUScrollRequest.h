/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSValue;

@interface SUScrollRequest : NSObject {

	BOOL _animated;
	/*^block*/id _completionHandler;
	NSValue* _contentOffsetValue;
	NSValue* _frameValue;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSValue * contentOffsetValue;                           //@synthesize contentOffsetValue=_contentOffsetValue - In the implementation block
@property (retain) NSValue * frameValue;                                   //@synthesize frameValue=_frameValue - In the implementation block
-(void)setFrameValue:(NSValue *)arg1 ;
-(void)setContentOffsetValue:(NSValue *)arg1 ;
-(NSValue *)contentOffsetValue;
-(NSValue *)frameValue;
-(void)dealloc;
-(id)completionHandler;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
@end
