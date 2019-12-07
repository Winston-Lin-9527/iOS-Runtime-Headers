/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMFocusResult : NSObject {

	BOOL _performingContrastDetection;
	BOOL _contrastBasedFocusDidStart;
	BOOL _contrastBasedFocusDidEnd;
	BOOL _deviceSupportsFocus;
	long long _focusMode;
	CGPoint _pointOfInterest;

}

@property (getter=isPerformingContrastDetection,nonatomic,readonly) BOOL performingContrastDetection;              //@synthesize performingContrastDetection=_performingContrastDetection - In the implementation block
@property (nonatomic,readonly) CGPoint pointOfInterest;                                                            //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) long long focusMode;                                                                //@synthesize focusMode=_focusMode - In the implementation block
@property (nonatomic,readonly) BOOL contrastBasedFocusDidStart;                                                    //@synthesize contrastBasedFocusDidStart=_contrastBasedFocusDidStart - In the implementation block
@property (nonatomic,readonly) BOOL contrastBasedFocusDidEnd;                                                      //@synthesize contrastBasedFocusDidEnd=_contrastBasedFocusDidEnd - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsFocus;                                                           //@synthesize deviceSupportsFocus=_deviceSupportsFocus - In the implementation block
-(id)description;
-(CGPoint)pointOfInterest;
-(long long)focusMode;
-(BOOL)deviceSupportsFocus;
-(BOOL)isPerformingContrastDetection;
-(BOOL)contrastBasedFocusDidStart;
-(BOOL)contrastBasedFocusDidEnd;
-(id)initWithMode:(long long)arg1 pointOfInterest:(CGPoint)arg2 performingContrastDetection:(BOOL)arg3 contrastBasedFocusDidStart:(BOOL)arg4 contrastBasedFocusDidEnd:(BOOL)arg5 deviceSupportsFocus:(BOOL)arg6 ;
@end
