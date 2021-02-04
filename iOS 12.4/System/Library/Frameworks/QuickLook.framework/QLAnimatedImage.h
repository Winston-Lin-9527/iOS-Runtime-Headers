/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject {

	QLImageData* _imageData;
	unsigned long long _durationsCount;
	QLFrameDurationInformation* _durations;
	double _duration;
	UIImage* _lastImage;
	unsigned long long _lastImageIndex;

}
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)generateDurations;
-(BOOL)time:(double)arg1 belongsToIndex:(unsigned long long)arg2 ;
-(long long)indexForTime:(double)arg1 ;
-(id)frameAtTime:(double)arg1 ;
-(void)dealloc;
-(double)duration;
-(unsigned long long)frameCount;
@end
