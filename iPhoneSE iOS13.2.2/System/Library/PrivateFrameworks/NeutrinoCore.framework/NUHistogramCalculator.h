/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUHistogramCalculator : NSObject {

	long long _binCount;
	SCD_Struct_NU10 _range;
	SCD_Struct_NU12 _colorMatrix;

}

@property (assign,nonatomic) long long binCount;                       //@synthesize binCount=_binCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU10 range;                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU12 colorMatrix;              //@synthesize colorMatrix=_colorMatrix - In the implementation block
-(id)init;
-(SCD_Struct_NU10)range;
-(void)setRange:(SCD_Struct_NU10)arg1 ;
-(SCD_Struct_NU12)colorMatrix;
-(void)setColorMatrix:(SCD_Struct_NU12)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2 ;
-(long long)binCount;
-(void)setBinCount:(long long)arg1 ;
@end
