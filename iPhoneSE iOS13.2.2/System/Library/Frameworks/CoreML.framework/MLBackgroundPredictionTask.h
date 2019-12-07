/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLBackgroundTask.h>

@class NSURL, MLModelConfiguration, MLPredictionOptions;

@interface MLBackgroundPredictionTask : MLBackgroundTask {

	NSURL* _modelURL;
	MLModelConfiguration* _modelConfiguration;
	MLPredictionOptions* _predictionOptions;

}

@property (nonatomic,copy) NSURL * modelURL;                                       //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,copy) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
@property (nonatomic,copy) MLPredictionOptions * predictionOptions;                //@synthesize predictionOptions=_predictionOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(MLModelConfiguration *)modelConfiguration;
-(void)setModelConfiguration:(MLModelConfiguration *)arg1 ;
-(MLPredictionOptions *)predictionOptions;
-(void)setPredictionOptions:(MLPredictionOptions *)arg1 ;
@end
