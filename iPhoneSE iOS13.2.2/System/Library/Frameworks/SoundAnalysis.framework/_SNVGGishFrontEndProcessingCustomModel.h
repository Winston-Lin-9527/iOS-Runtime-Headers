/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class SNDSPGraphCustomModel;

@interface _SNVGGishFrontEndProcessingCustomModel : NSObject <MLCustomModel> {

	SNDSPGraphCustomModel* _model;

}
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
@end
