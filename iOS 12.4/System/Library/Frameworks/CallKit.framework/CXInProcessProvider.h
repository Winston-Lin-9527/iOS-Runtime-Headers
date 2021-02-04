/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXProvider.h>

@class CXInProcessCallSource, NSString;

@interface CXInProcessProvider : CXProvider {

	CXInProcessCallSource* _callSource;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CXInProcessCallSource * callSource;              //@synthesize callSource=_callSource - In the implementation block
-(id)hostProtocolDelegate;
-(CXInProcessCallSource *)callSource;
-(id)initWithIdentifier:(id)arg1 callSource:(id)arg2 configuration:(id)arg3 ;
-(void)setCallSource:(CXInProcessCallSource *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end
