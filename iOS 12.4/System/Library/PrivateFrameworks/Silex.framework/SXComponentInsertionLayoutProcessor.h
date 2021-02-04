/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXLayoutProcessor.h>

@protocol SXComponentInsertionManager;
@class SXLayoutOptions, NSString;

@interface SXComponentInsertionLayoutProcessor : NSObject <SXLayoutProcessor> {

	id<SXComponentInsertionManager> _componentInsertionManager;
	SXLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) id<SXComponentInsertionManager> componentInsertionManager;              //@synthesize componentInsertionManager=_componentInsertionManager - In the implementation block
@property (nonatomic,retain) SXLayoutOptions * layoutOptions;                                          //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(SXLayoutOptions *)arg1 ;
-(void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(id<SXComponentInsertionManager>)componentInsertionManager;
-(id)initWithComponentInsertionManager:(id)arg1 ;
@end
