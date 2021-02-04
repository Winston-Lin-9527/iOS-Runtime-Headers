/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MLEQPreset : NSObject {

	NSString* _name;
	NSString* _localizedName;
	int _builtInPresetType;

}
+(id)eqPresetForBuiltInPresetType:(int)arg1 ;
+(id)eqPresetForName:(id)arg1 ;
-(id)initWithBuiltInPresetType:(int)arg1 ;
-(int)builtInPresetType;
-(int)typeForAVController;
-(id)name;
-(id)localizedName;
@end
