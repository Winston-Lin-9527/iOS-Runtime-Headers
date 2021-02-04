/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewDropItem.h>

@protocol _UICollectionViewDropItem <UICollectionViewDropItem>
@end


@class UIDragItem, NSIndexPath, NSString;

@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem> {

	UIDragItem* _dragItem;
	NSIndexPath* _sourceIndexPath;
	CGSize _previewSize;

}

@property (nonatomic,retain) UIDragItem * dragItem;                      //@synthesize dragItem=_dragItem - In the implementation block
@property (assign,nonatomic) CGSize previewSize;                         //@synthesize previewSize=_previewSize - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceIndexPath;              //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(UIDragItem *)dragItem;
-(id)initWithDragItem:(id)arg1 previewSize:(CGSize)arg2 sourceIndexPath:(id)arg3 ;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(NSIndexPath *)sourceIndexPath;
-(CGSize)previewSize;
-(void)setPreviewSize:(CGSize)arg1 ;
-(void)setSourceIndexPath:(NSIndexPath *)arg1 ;
@end
