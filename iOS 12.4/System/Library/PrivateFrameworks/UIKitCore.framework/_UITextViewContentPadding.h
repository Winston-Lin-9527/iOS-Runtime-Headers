/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextViewContentPaddingDelegate;
@interface _UITextViewContentPadding : NSObject {

	long long _mode;
	double _targetValue;
	double _currentValue;
	id<_UITextViewContentPaddingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UITextViewContentPaddingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double targetValue;                                                 //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) double currentValue;                                              //@synthesize currentValue=_currentValue - In the implementation block
-(void)setDelegate:(id<_UITextViewContentPaddingDelegate>)arg1 ;
-(id<_UITextViewContentPaddingDelegate>)delegate;
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(double)currentValue;
-(void)increaseToValue:(double)arg1 ;
-(void)_checkNewCurrentValue;
-(void)resetCurrentValue;
@end
