/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLKDevice, NSString;

@interface NTKEditOption : NSObject <NSSecureCoding> {

	CLKDevice* _device;

}

@property (nonatomic,readonly) long long swatchStyle; 
@property (nonatomic,readonly) CLKDevice * device;                             //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * dailySnapshotKey; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedNameForAction; 
+(id)optionsDescription;
+(CGSize)sizeForSwatchStyle:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(CLKDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)dailySnapshotKey;
-(long long)swatchStyle;
-(NSString *)localizedNameForAction;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(BOOL)optionExistsInOSVersion:(unsigned)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
@end
