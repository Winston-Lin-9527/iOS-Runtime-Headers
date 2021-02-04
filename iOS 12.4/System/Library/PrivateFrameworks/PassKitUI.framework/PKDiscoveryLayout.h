/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PKDiscoveryLayout : UICollectionViewLayout {

	NSMutableDictionary* _attributesPerIndexPath;
	NSMutableDictionary* _headersPerIndexPath;
	CGSize _currentSize;
	double _interimSpacing;
	double _lineSpacing;

}

@property (assign,nonatomic) double interimSpacing;              //@synthesize interimSpacing=_interimSpacing - In the implementation block
@property (assign,nonatomic) double lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(double)interimSpacing;
-(void)setInterimSpacing:(double)arg1 ;
-(id)init;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
@end
