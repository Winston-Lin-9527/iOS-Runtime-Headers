/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKViewElementStyleComposer;


@protocol IKStyleableElement <NSObject>
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement; 
@property (nonatomic,copy,readonly) NSString * elementName; 
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer; 
@required
-(id)objectForKeyedSubscript:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(NSString *)elementName;
-(id<IKStyleableElement>)parentStyleableElement;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(id)arg1;

@end
