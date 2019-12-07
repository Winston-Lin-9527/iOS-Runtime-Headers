/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSData;

@interface NTKCompanionImageDataScaler : NSObject {

	NSData* _outputData;
	NSData* _data;
	long long _orientation;
	CGSize _inputSize;
	CGSize _outputSize;
	CGRect _inputCrop;

}

@property (nonatomic,readonly) CGSize inputSize;                   //@synthesize inputSize=_inputSize - In the implementation block
@property (nonatomic,readonly) CGRect inputCrop;                   //@synthesize inputCrop=_inputCrop - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                  //@synthesize outputSize=_outputSize - In the implementation block
-(NSData *)data;
-(long long)orientation;
-(CGSize)inputSize;
-(CGRect)inputCrop;
-(CGSize)outputSize;
-(id)initWithSize:(CGSize)arg1 crop:(CGRect)arg2 data:(id)arg3 orientation:(long long)arg4 outputSize:(CGSize)arg5 ;
-(void)cropAndScaleWithCompletion:(/*^block*/id)arg1 ;
@end
