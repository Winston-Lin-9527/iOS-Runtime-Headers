/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEGradient : PAEGeneratorDefaultBase {

	int _currentMethod;

}
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA78*)arg2 ;
-(BOOL)frameSetup:(SCD_Struct_PA78*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)initPAEGradientWithHeight:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(id)properties;
@end
