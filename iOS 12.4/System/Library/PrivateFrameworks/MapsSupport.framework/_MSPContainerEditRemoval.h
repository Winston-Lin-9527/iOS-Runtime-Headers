/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditRemoval.h>

@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditRemoval : _MSPContainerEdit <MSPContainerEditRemoval> {

	NSArray* _originalObjects;
	NSArray* _removedImmutableObjects;
	NSIndexSet* _indexesOfRemovedObjects;

}

@property (nonatomic,readonly) NSArray * originalObjects;                         //@synthesize originalObjects=_originalObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * removedImmutableObjects;                 //@synthesize removedImmutableObjects=_removedImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfRemovedObjects;              //@synthesize indexesOfRemovedObjects=_indexesOfRemovedObjects - In the implementation block
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSArray *)originalObjects;
-(NSArray *)removedImmutableObjects;
-(NSIndexSet *)indexesOfRemovedObjects;
-(id)initWithRemovedObjects:(id)arg1 indexes:(id)arg2 ;
-(NSString *)description;
@end
