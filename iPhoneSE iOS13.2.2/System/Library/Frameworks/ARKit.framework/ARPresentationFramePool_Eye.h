/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@interface ARPresentationFramePool_Eye : NSObject {

	SCD_Struct_AR12 _eyeOffset;
	SCD_Struct_AR12 _projection;

}

@property (assign,nonatomic) SCD_Struct_AR12 eyeOffset;               //@synthesize eyeOffset=_eyeOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR12 projection;              //@synthesize projection=_projection - In the implementation block
-(SCD_Struct_AR12)projection;
-(void)setProjection:(SCD_Struct_AR12)arg1 ;
-(SCD_Struct_AR12)eyeOffset;
-(void)setEyeOffset:(SCD_Struct_AR12)arg1 ;
@end
