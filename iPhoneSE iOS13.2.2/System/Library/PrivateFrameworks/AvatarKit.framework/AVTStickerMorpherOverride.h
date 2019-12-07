/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVTStickerMorpherOverride : NSObject {

	float _value;
	NSString* _geometry;
	NSString* _morpher;

}

@property (nonatomic,copy,readonly) NSString * geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,copy,readonly) NSString * morpher;               //@synthesize morpher=_morpher - In the implementation block
@property (nonatomic,readonly) float value;                           //@synthesize value=_value - In the implementation block
+(id)morpherOverrideFromDictionary:(id)arg1 ;
-(float)value;
-(NSString *)geometry;
-(NSString *)morpher;
-(void)applyToAvatar:(id)arg1 ;
-(id)overridenMorpherForAvatar:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 morpher:(id)arg2 value:(float)arg3 ;
@end
