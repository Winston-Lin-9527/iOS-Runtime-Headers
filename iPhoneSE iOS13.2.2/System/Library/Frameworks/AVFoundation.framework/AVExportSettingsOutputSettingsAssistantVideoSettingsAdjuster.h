/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputSettingsAssistantVideoSettingsAdjuster.h>

@class NSString, NSDictionary;

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster> {

	NSString* _outputSettingsPresetIdentifier;
	NSDictionary* _exportSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)averageBitRateForSourceDimensions:(CGSize)arg1 andTargetFrameRate:(float)arg2 ;
-(id)colorSpaceFromSourceFormatDescriptions:(id)arg1 andRendererColorSpace:(id)arg2 ;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
@end
