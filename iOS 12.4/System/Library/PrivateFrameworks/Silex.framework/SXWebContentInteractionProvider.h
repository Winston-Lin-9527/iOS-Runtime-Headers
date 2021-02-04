/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentMessageHandler.h>
#import <libobjc.A.dylib/SXWebContentInteractionProvider.h>

@protocol SXWebContentInteractionProvider <NSObject>
@property (nonatomic,readonly) id<SXWebContentInteraction> interaction; 
@required
-(void)onChange:(/*^block*/id)arg1;
-(id<SXWebContentInteraction>)interaction;

@end


@protocol SXWebContentInteraction, SXWebContentInteractionFactory, SXWebContentLogger;
@class NSMutableArray, NSString;

@interface SXWebContentInteractionProvider : NSObject <SXWebContentMessageHandler, SXWebContentInteractionProvider> {

	id<SXWebContentInteraction> _interaction;
	id<SXWebContentInteractionFactory> _interactionFactory;
	id<SXWebContentLogger> _logger;
	NSMutableArray* _blocks;

}

@property (nonatomic,readonly) id<SXWebContentInteractionFactory> interactionFactory;              //@synthesize interactionFactory=_interactionFactory - In the implementation block
@property (nonatomic,readonly) id<SXWebContentLogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableArray * blocks;                                            //@synthesize blocks=_blocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXWebContentInteraction> interaction;                            //@synthesize interaction=_interaction - In the implementation block
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithMessageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 interactionFactory:(id)arg3 logger:(id)arg4 ;
-(id<SXWebContentInteractionFactory>)interactionFactory;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(id<SXWebContentLogger>)logger;
-(NSMutableArray *)blocks;
-(id<SXWebContentInteraction>)interaction;
@end
