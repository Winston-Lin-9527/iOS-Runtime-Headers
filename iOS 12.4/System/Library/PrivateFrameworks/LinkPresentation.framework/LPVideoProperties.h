/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface LPVideoProperties : NSObject <NSCopying> {

	BOOL _hasAudio;
	NSString* _accessibilityText;
	UIColor* __overlappingControlsColor;

}

@property (setter=_setOverlappingControlsColor:,nonatomic,retain) UIColor * _overlappingControlsColor;              //@synthesize _overlappingControlsColor=__overlappingControlsColor - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                                                                         //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                                                            //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(NSString *)accessibilityText;
-(BOOL)hasAudio;
-(void)setHasAudio:(BOOL)arg1 ;
-(UIColor *)_overlappingControlsColor;
-(void)_setOverlappingControlsColor:(id)arg1 ;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
