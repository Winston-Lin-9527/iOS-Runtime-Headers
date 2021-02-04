/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VNSequenceRequestHandler;

@interface BWVisionInferenceContext : NSObject {

	VNSequenceRequestHandler* _sequenceRequestHandler;

}

@property (nonatomic,readonly) VNSequenceRequestHandler * sequenceRequestHandler;              //@synthesize sequenceRequestHandler=_sequenceRequestHandler - In the implementation block
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(int)prepareForInference;
-(VNSequenceRequestHandler *)sequenceRequestHandler;
-(id)init;
-(void)dealloc;
-(BOOL)isPrepared;
@end
