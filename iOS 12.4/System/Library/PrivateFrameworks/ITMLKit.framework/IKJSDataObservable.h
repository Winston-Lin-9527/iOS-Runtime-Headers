/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>

@class NSMutableArray, _IKJSDataItemExporter, JSManagedValue, NSArray;

@interface IKJSDataObservable : IKJSEventListenerObject {

	NSMutableArray* _observerRecords;
	_IKJSDataItemExporter* _exporter;
	JSManagedValue* _boxedManagedValue;
	BOOL _observersEnabled;
	BOOL _isInternal;
	IKJSDataObservable* _parent;
	NSArray* _parentAccessorSequence;

}

@property (nonatomic,copy,readonly) NSArray * parentAccessorSequence;              //@synthesize parentAccessorSequence=_parentAccessorSequence - In the implementation block
@property (nonatomic,__weak,readonly) IKJSDataObservable * parent;                 //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) BOOL observersEnabled;                                //@synthesize observersEnabled=_observersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isInternal;                                    //@synthesize isInternal=_isInternal - In the implementation block
-(id)initWithValue:(id)arg1 internal:(BOOL)arg2 ;
-(id)dataDictionaryObject;
-(NSArray *)parentAccessorSequence;
-(id)unbox;
-(id)boxedValue;
-(BOOL)observersEnabled;
-(id)valueForAccessorSequence:(id)arg1 closestParent:(id*)arg2 accessorSequenceFromClosestParent:(id*)arg3 ;
-(id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(void)touchPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(void)setParent:(id)arg1 accessorSequence:(id)arg2 ;
-(void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2 ;
-(void)setObserversEnabled:(BOOL)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(BOOL)isInternal;
-(void)removeObserver:(id)arg1 ;
-(IKJSDataObservable *)parent;
@end
