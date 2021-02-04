/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/ETTask.h>

@class NSArray;

@interface ETTaskClassifier : ETTask {

	shared_ptr<Espresso::net>* net_with_bwd;
	shared_ptr<Espresso::net>* fwd_net;
	options sgd_options;
	NSArray* _class_names;

}

@property (assign) NSArray * class_names;              //@synthesize class_names=_class_names - In the implementation block
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(BOOL)arg4 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 ;
-(float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(/*^block*/id)arg3 ;
-(float)fit:(id)arg1 numberOfBatches:(unsigned)arg2 withProgress:(/*^block*/id)arg3 ;
-(void)saveNetwork:(id)arg1 ;
-(NSArray *)class_names;
-(void)setClass_names:(NSArray *)arg1 ;
-(id)evaluate:(id)arg1 ;
@end
